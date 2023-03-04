#define PROGRAM_DATA_PATH QString("{HOME}/.local/share/catera")

#define ACCOUNT_CHANGE_MAIN_PAGE_INDEX 0
#define MAIN_MAIN_PAGE_INDEX 1
    #define PROFILE_MAIN_MAIN_PAGE_INDEX 0
#define ADD_ACCOUNT_MAIN_PAGE_INDEX 2
#define BROWSER_2FA_MAIN_PAGE_INDEX 3

#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "api/http.hpp"
#include "qurl.h"
#include "qwebengineview.h"
#include <QDebug>
#include <QDir>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    QString home_dir = QDir::homePath();
    am = new accountManager(PROGRAM_DATA_PATH.replace("{HOME}", home_dir).toStdString() + "/accounts.json");
    Logger = new logger(PROGRAM_DATA_PATH.replace("{HOME}", home_dir).toStdString() + "/log.txt");
    ui->setupUi(this);
    _on_addAccount();
    ui->mainStacked->setCurrentIndex(0);
    vk = new api("5.131", "", *Logger);
    MainWindow::loadImages();
}

void MainWindow::loadImages(){
    ui->changeAccountBtn->setIcon(QIcon(QPixmap(":/resourses/logo-small1.png")));
    ui->changeAccountBtn->setIconSize(QPixmap(":/resourses/logo-small1.png").rect().size());
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_addAccountButton_clicked(){
    ui->mainStacked->setCurrentIndex(ADD_ACCOUNT_MAIN_PAGE_INDEX);
}

void MainWindow::_on_addAccount(){
    std::vector<std::string> accounts = am->getAccounts();
    int index = 0;
    ui->choiceAccountComboBox->clear();
    for(const std::string& account : accounts){
        std::vector<arg> args = {};
        std::string responseStr = VK_API("https", "5.131", account, "account.getProfileInfo", args, *Logger);
        json response = json::parse(responseStr.c_str());
        if(!response.contains("response"))
            am->removeAccountByIndex(index);
        if(!response["response"].contains("first_name") or !response["response"].contains("last_name"))
            am->removeAccountByIndex(index);
        ui->choiceAccountComboBox->addItem(QString::fromStdString(response["response"]["first_name"]) + " " + QString::fromStdString(response["response"]["last_name"]));
        index++;
    }
    ui->loginBtn->setEnabled(ui->choiceAccountComboBox->count() != 0);
}

void MainWindow::on_loginBtn_clicked(){
    ui->mainStacked->setCurrentIndex(MAIN_MAIN_PAGE_INDEX);
    chosenAccountIndex = ui->choiceAccountComboBox->currentIndex();
    QVector<QString> okAccounts;
    std::vector<std::string> accounts = am->getAccounts();
    for(const std::string& account : accounts){
      try{
            std::string responseStr = VK_API("https", "5.131", account, "account.getProfileInfo", {}, *Logger);
            json response = json::parse(responseStr.c_str());
            okAccounts.append(QString::fromStdString(account));
        }catch(nlohmann::detail::exception nde){}
    }
    if(okAccounts.size() >= chosenAccountIndex) {
      QString token = okAccounts[chosenAccountIndex];
      vk = new api("5.131", token.toStdString(), *Logger);
    }
}


void MainWindow::on_changeAccountBtn_clicked(){
    _on_addAccount();
    ui->mainStacked->setCurrentIndex(0);
}


void MainWindow::on_login1Btn_clicked(){
    QWebEngineView* browser = ui->loginBrowser;
    auto* profile = browser->page()->profile();
    browser->show();
    QUrl* url = new QUrl();
    std::vector<arg> args = {
        arg("grant_type", "password"),
        arg("client_id", "6146827"),
        arg("client_secret", "qVxWRF1CwHERuIrKBnqe"),
        arg("username", ui->loginLineEdit->text().toStdString()),
        arg("password", ui->passwordLineEdit->text().toStdString()),
        arg("2fa_supported", "1")
    };
    QString link = QString::fromStdString(REQUEST_COMPONE("https", "oauth.vk.com/token", args));
    std::string responseStr = GET("oauth.vk.com", link.toStdString());
    json response = json::parse(responseStr);
    if(response.contains("error_type")){
        if(response["error_type"] == "username_or_password_is_incorrect"){
            ui->statusbar->showMessage("Неправильный логин или пароль!");
            return;
        }
    }else if(response.contains("error")){
        if(response["error"] == "need_validation"){
            link = QString::fromStdString(response["redirect_uri"]).replace("\\/", "/");
        }
    }
    url->setUrl(link);
    browser->load(*url);
    ui->mainStacked->setCurrentIndex(BROWSER_2FA_MAIN_PAGE_INDEX);
}


void MainWindow::on_loginBrowser_urlChanged(const QUrl &url){
    QString link = url.toDisplayString();
    if(!link.startsWith("https://oauth.vk.com/blank.html#success=1&access_token=")) return;
    QString access_token = link.replace(QRegularExpression("https://oauth.vk.com/blank.html#success=1&access_token="), "")
                       .replace(QRegularExpression("&user_id=571844602"), "");
    ui->statusbar->showMessage(link);
    am->addAccount(access_token.toStdString());
    MainWindow::on_changeAccountBtn_clicked();
}


void MainWindow::on_newPostBtn_clicked(){
    vk->wall_post({
        arg("message", ui->newPostTextEdit->toPlainText().toStdString())
    });
    ui->newPostTextEdit->clear();
}


void MainWindow::on_mainStacked_currentChanged(int pageIndex){
    switch(pageIndex){
    case ACCOUNT_CHANGE_MAIN_PAGE_INDEX:
      this->setWindowTitle("Сменить аккаунт | CateraVK");
      break;
    case MAIN_MAIN_PAGE_INDEX:
      MainWindow::on_mainMainStacked_currentChanged(ui->mainMainStacked->currentIndex());
      break;
    case ADD_ACCOUNT_MAIN_PAGE_INDEX:
      this->setWindowTitle("Добавить аккаунт | CateraVK");
      break;
    case BROWSER_2FA_MAIN_PAGE_INDEX:
      this->setWindowTitle("Пройти дополнительную аутентификацию | CateraVK");
      break;
    }
}


void MainWindow::on_mainMainStacked_currentChanged(int pageIndex){
    switch(pageIndex){
    case PROFILE_MAIN_MAIN_PAGE_INDEX:
      this->setWindowTitle("Профиль| Главная | CateraVK");
      break;
    }
}


void MainWindow::on_logoutBtn_clicked(){
    am->removeAccountByIndex(chosenAccountIndex);
    _on_addAccount();
    ui->mainStacked->setCurrentIndex(ACCOUNT_CHANGE_MAIN_PAGE_INDEX);
    ui->mainMainStacked->setCurrentIndex(PROFILE_MAIN_MAIN_PAGE_INDEX);
}


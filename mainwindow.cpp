#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "api/http.hpp"
#include "login.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    am = new accountManager("/home/mrybs/Desktop/accounts.json");
    Logger = new logger("/home/mrybs/Desktop/log.txt");
    ui->setupUi(this);
    _on_addAccount();
}

MainWindow::~MainWindow(){
    delete ui;
}


void MainWindow::on_addAccountButton_clicked(){
    auto* login = new Login(this);
    connect(login, SIGNAL(reload_accounts()), this, SLOT(_on_addAccount()));
    login->show();
}

void MainWindow::_on_addAccount(){
  std::vector<std::string> accounts = am->getAccounts();
  for(const std::string& account : accounts){
    std::vector<arg> args = {};
    std::string responseStr = VK_API("https", "5.131", account, "account.getProfileInfo", args, *Logger);
    json response = json::parse(responseStr.c_str());
    //ui->statusbar->showMessage(QString::fromStdString(to_string(response)));

    ui->choiceAccountComboBox->addItem(QString::fromStdString(response["response"]["first_name"]) + " " + QString::fromStdString(response["response"]["last_name"]));
  }
}

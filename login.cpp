#include "login.h"
#include "qregularexpression.h"
#include "ui_login.h"
#include "api/http.hpp"
#include "api/accountManager.h"
#include "mainwindow.h"
#include <QWebEngineView>
#include <QWebEngineCookieStore>
#include <QWebEngineProfile>

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    QWebEngineView* browser = ui->browser;
    auto* profile = browser->page()->profile();
    profile->defaultProfile()->cookieStore()->deleteAllCookies();
    browser->show();
    QUrl* url = new QUrl();
    std::vector<arg> args = {
        arg("client_id", "51494453"),
        arg("display", "page"),
        arg("redirect_uri", "https://oauth.vk.com/blank.html"),
        arg("scope", "11111111111111111111111111"),
        arg("response_type", "token"),
        arg("v", "5.131")
    };
    QString link = QString::fromStdString(REQUEST_COMPONE("https", "oauth.vk.com/authorize", args));
    url->setUrl(link);
    browser->load(*url);
}

Login::~Login()
{
    delete ui;
}

void Login::on_browser_urlChanged(const QUrl &url){
    QString link = url.toDisplayString();
    //ui->statusbar->showMessage(link);
    if(!link.startsWith("https://oauth.vk.com/blank.html#access_token=")) return;
    QString access_token = link.replace(QRegularExpression("https://oauth.vk.com/blank.html#access_token="), "")
                       .replace(QRegularExpression("&expires_in=.+&user_id=\\d+"), "");
    ui->statusbar->showMessage(link);
    accountManager am("/home/mrybs/Desktop/accounts.json");
    am.addAccount(access_token.toStdString());
    this->close();
    reload_accounts();
}


#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "api/accountManager.h"
#include "tools/logger.h"
#include "api/api.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_addAccountButton_clicked();
    void _on_addAccount();
    void on_loginBtn_clicked();
    void on_changeAccountBtn_clicked();
    void on_login1Btn_clicked();
    void on_loginBrowser_urlChanged(const QUrl &arg1);
    void on_newPostBtn_clicked();
    void on_mainStacked_currentChanged(int pageIndex);
    void on_mainMainStacked_currentChanged(int arg1);
    void on_logoutBtn_clicked();
    void loadImages();


private:
    Ui::MainWindow *ui;
    accountManager *am;
    logger *Logger;
    api *vk;
    short chosenAccountIndex;
};
#endif // MAINWINDOW_H

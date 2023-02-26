#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "api/accountManager.h"
#include "tools/logger.h"

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

private:
    Ui::MainWindow *ui;
    accountManager *am;
    logger *Logger;
};
#endif // MAINWINDOW_H

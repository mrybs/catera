#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>

namespace Ui {
class Login;
}

class Login : public QMainWindow
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();

signals:
    void reload_accounts();

private slots:
    void on_browser_urlChanged(const QUrl &arg1);

private:
    Ui::Login *ui;
};

#endif // LOGIN_H

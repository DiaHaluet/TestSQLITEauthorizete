#pragma once

#include <QWidget>

namespace Ui {
class Auth_window;
}

class Auth_window : public QWidget
{
    Q_OBJECT

public:
    explicit Auth_window(QWidget *parent = nullptr);
    ~Auth_window();
    QString getLogin();
    QString getPass();

signals:
    void login_button_cliced();
    void register_button_cliced();

private slots:
    void on_NameLineEdit_textEdited(const QString &arg1);
    void on_PasswordLineEdit_textEdited(const QString &arg1);
    void on_LogBtn_pressed();
    void on_RegBtn_clicked();

private:
    Ui::Auth_window *ui;
    QString m_username;
    QString m_userpass;
};

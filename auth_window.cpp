#include "auth_window.h"
#include "ui_auth_window.h"

Auth_window::Auth_window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Auth_window)
{
    ui->setupUi(this);
}

Auth_window::~Auth_window()
{
    delete ui;
}

void Auth_window::on_NameLineEdit_textEdited(const QString &arg1)
{
    Auth_window::m_username =arg1;
}


void Auth_window::on_PasswordLineEdit_textEdited(const QString &arg1)
{
    Auth_window::m_userpass = arg1;
}


void Auth_window::on_LogBtn_pressed()
{
    emit login_button_cliced();
}


void Auth_window::on_RegBtn_clicked()
{
    emit register_button_cliced();
}

QString Auth_window::getLogin()
{
    return Auth_window::m_username;
}

QString Auth_window::getPass()
{
    return Auth_window::m_userpass;
}

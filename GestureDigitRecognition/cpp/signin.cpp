#include "h/signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);
    this->setWindowTitle("登录");
    ui->Signin->setStyleSheet("QGroupBox{border:none}");
    ui->box1->setStyleSheet("QGroupBox{border:none}");
    ui->userPassword->setEchoMode(QLineEdit::Password);
}

SignIn::~SignIn()
{
    delete ui;
}

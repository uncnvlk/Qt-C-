#include "sendmailing.h"
#include "ui_sendmailing.h"

SendMailing::SendMailing(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SendMailing)
{
    ui->setupUi(this);
}

SendMailing::~SendMailing()
{
    delete ui;
}

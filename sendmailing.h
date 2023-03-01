#ifndef SENDMAILING_H
#define SENDMAILING_H

#include <QDialog>

namespace Ui {
class SendMailing;
}

class SendMailing : public QDialog
{
    Q_OBJECT

public:
    explicit SendMailing(QWidget *parent = nullptr);
    ~SendMailing();

private:
    Ui::SendMailing *ui;
};

#endif // SENDMAILING_H

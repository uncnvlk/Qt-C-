/********************************************************************************
** Form generated from reading UI file 'sendmailing.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDMAILING_H
#define UI_SENDMAILING_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_SendMailing
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;

    void setupUi(QDialog *SendMailing)
    {
        if (SendMailing->objectName().isEmpty())
            SendMailing->setObjectName("SendMailing");
        SendMailing->resize(636, 556);
        buttonBox = new QDialogButtonBox(SendMailing);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(270, 500, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(SendMailing);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 20, 281, 16));
        label_2 = new QLabel(SendMailing);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 180, 281, 16));
        pushButton = new QPushButton(SendMailing);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(10, 430, 131, 32));
        lineEdit = new QLineEdit(SendMailing);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 50, 501, 21));
        textEdit = new QTextEdit(SendMailing);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(10, 210, 561, 201));

        retranslateUi(SendMailing);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SendMailing, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SendMailing, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SendMailing);
    } // setupUi

    void retranslateUi(QDialog *SendMailing)
    {
        SendMailing->setWindowTitle(QCoreApplication::translate("SendMailing", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SendMailing", "\320\242\320\265\320\274\320\260 \320\277\320\270\321\201\321\214\320\274\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("SendMailing", "\320\242\320\265\320\272\321\201\321\202 \320\277\320\270\321\201\321\214\320\274\320\260", nullptr));
        pushButton->setText(QCoreApplication::translate("SendMailing", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214 \321\204\320\260\320\271\320\273\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SendMailing: public Ui_SendMailing {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDMAILING_H

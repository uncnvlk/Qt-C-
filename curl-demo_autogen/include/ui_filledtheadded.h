/********************************************************************************
** Form generated from reading UI file 'filledtheadded.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILLEDTHEADDED_H
#define UI_FILLEDTHEADDED_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FilledTheAdded
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *surnameLabel;
    QLabel *nameLabel;
    QLabel *lastnameLabel;
    QLabel *positionLabel;
    QLineEdit *surnameTextField;
    QLineEdit *nameTextField;
    QLineEdit *lastnameTextField;
    QLineEdit *positionTextField;
    QLabel *emailLabel;
    QLineEdit *emailTextField;
    QLabel *numberLabel;
    QLineEdit *numberTextField;

    void setupUi(QDialog *FilledTheAdded)
    {
        if (FilledTheAdded->objectName().isEmpty())
            FilledTheAdded->setObjectName("FilledTheAdded");
        FilledTheAdded->resize(400, 394);
        buttonBox = new QDialogButtonBox(FilledTheAdded);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(290, 20, 81, 241));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        surnameLabel = new QLabel(FilledTheAdded);
        surnameLabel->setObjectName("surnameLabel");
        surnameLabel->setGeometry(QRect(10, 10, 58, 16));
        nameLabel = new QLabel(FilledTheAdded);
        nameLabel->setObjectName("nameLabel");
        nameLabel->setGeometry(QRect(10, 80, 58, 16));
        lastnameLabel = new QLabel(FilledTheAdded);
        lastnameLabel->setObjectName("lastnameLabel");
        lastnameLabel->setGeometry(QRect(10, 150, 58, 16));
        positionLabel = new QLabel(FilledTheAdded);
        positionLabel->setObjectName("positionLabel");
        positionLabel->setGeometry(QRect(10, 210, 81, 16));
        surnameTextField = new QLineEdit(FilledTheAdded);
        surnameTextField->setObjectName("surnameTextField");
        surnameTextField->setGeometry(QRect(10, 40, 113, 21));
        nameTextField = new QLineEdit(FilledTheAdded);
        nameTextField->setObjectName("nameTextField");
        nameTextField->setGeometry(QRect(10, 110, 113, 21));
        lastnameTextField = new QLineEdit(FilledTheAdded);
        lastnameTextField->setObjectName("lastnameTextField");
        lastnameTextField->setGeometry(QRect(10, 180, 113, 21));
        positionTextField = new QLineEdit(FilledTheAdded);
        positionTextField->setObjectName("positionTextField");
        positionTextField->setGeometry(QRect(10, 240, 113, 21));
        emailLabel = new QLabel(FilledTheAdded);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setGeometry(QRect(10, 270, 81, 16));
        emailTextField = new QLineEdit(FilledTheAdded);
        emailTextField->setObjectName("emailTextField");
        emailTextField->setGeometry(QRect(10, 300, 113, 21));
        numberLabel = new QLabel(FilledTheAdded);
        numberLabel->setObjectName("numberLabel");
        numberLabel->setGeometry(QRect(10, 330, 121, 16));
        numberTextField = new QLineEdit(FilledTheAdded);
        numberTextField->setObjectName("numberTextField");
        numberTextField->setGeometry(QRect(10, 360, 113, 21));

        retranslateUi(FilledTheAdded);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FilledTheAdded, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FilledTheAdded, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FilledTheAdded);
    } // setupUi

    void retranslateUi(QDialog *FilledTheAdded)
    {
        FilledTheAdded->setWindowTitle(QCoreApplication::translate("FilledTheAdded", "Dialog", nullptr));
        surnameLabel->setText(QCoreApplication::translate("FilledTheAdded", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        nameLabel->setText(QCoreApplication::translate("FilledTheAdded", "\320\230\320\274\321\217", nullptr));
        lastnameLabel->setText(QCoreApplication::translate("FilledTheAdded", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        positionLabel->setText(QCoreApplication::translate("FilledTheAdded", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        emailLabel->setText(QCoreApplication::translate("FilledTheAdded", "\320\237\320\276\321\207\321\202\320\260", nullptr));
        numberLabel->setText(QCoreApplication::translate("FilledTheAdded", "\320\235\320\276\320\274\320\265\321\200 \321\202\320\265\320\273\320\265\321\204\320\276\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilledTheAdded: public Ui_FilledTheAdded {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILLEDTHEADDED_H

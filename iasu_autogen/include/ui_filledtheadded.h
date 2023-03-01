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
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_FilledTheAdded
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *surnameTextField;
    QLineEdit *nameTextField;
    QLineEdit *nameTextField_2;
    QLineEdit *nameTextField_3;

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
        surnameTextField = new QLineEdit(FilledTheAdded);
        surnameTextField->setObjectName("surnameTextField");
        surnameTextField->setGeometry(QRect(10, 40, 191, 21));
        nameTextField = new QLineEdit(FilledTheAdded);
        nameTextField->setObjectName("nameTextField");
        nameTextField->setGeometry(QRect(10, 70, 191, 21));
        nameTextField_2 = new QLineEdit(FilledTheAdded);
        nameTextField_2->setObjectName("nameTextField_2");
        nameTextField_2->setGeometry(QRect(10, 100, 191, 21));
        nameTextField_3 = new QLineEdit(FilledTheAdded);
        nameTextField_3->setObjectName("nameTextField_3");
        nameTextField_3->setGeometry(QRect(190, 230, 191, 21));

        retranslateUi(FilledTheAdded);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, FilledTheAdded, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, FilledTheAdded, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(FilledTheAdded);
    } // setupUi

    void retranslateUi(QDialog *FilledTheAdded)
    {
        FilledTheAdded->setWindowTitle(QCoreApplication::translate("FilledTheAdded", "Dialog", nullptr));
        surnameTextField->setText(QCoreApplication::translate("FilledTheAdded", "\320\244\320\230\320\236", nullptr));
        nameTextField->setText(QCoreApplication::translate("FilledTheAdded", "\320\222\320\270\320\264 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
        nameTextField_2->setText(QCoreApplication::translate("FilledTheAdded", "\320\224\320\276\320\273\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        nameTextField_3->setText(QCoreApplication::translate("FilledTheAdded", "\320\222\320\270\320\264 \320\264\320\265\321\217\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FilledTheAdded: public Ui_FilledTheAdded {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILLEDTHEADDED_H

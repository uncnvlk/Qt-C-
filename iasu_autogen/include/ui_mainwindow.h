/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_3;
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget;
    QGroupBox *toolGroupBox;
    QGridLayout *gridLayout_4;
    QPushButton *sendButton;
    QPushButton *changeButton;
    QPushButton *deleteButton;
    QPushButton *cancelButton;
    QPushButton *selectButton;
    QPushButton *addButton;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *deleteButton1;
    QPushButton *addButton1;
    QWidget *tab_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_3 = new QVBoxLayout(centralwidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        tab_1 = new QWidget();
        tab_1->setObjectName("tab_1");
        verticalLayout_2 = new QVBoxLayout(tab_1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        groupBox = new QGroupBox(tab_1);
        groupBox->setObjectName("groupBox");
        groupBox->setFlat(true);
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setSpacing(1);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 1, 1);
        tableWidget = new QTableWidget(groupBox);
        tableWidget->setObjectName("tableWidget");

        gridLayout_3->addWidget(tableWidget, 0, 0, 1, 2);

        toolGroupBox = new QGroupBox(groupBox);
        toolGroupBox->setObjectName("toolGroupBox");
        toolGroupBox->setLayoutDirection(Qt::LeftToRight);
        toolGroupBox->setFlat(true);
        gridLayout_4 = new QGridLayout(toolGroupBox);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setContentsMargins(0, 0, 1, 1);
        sendButton = new QPushButton(toolGroupBox);
        sendButton->setObjectName("sendButton");

        gridLayout_4->addWidget(sendButton, 2, 0, 1, 1);

        changeButton = new QPushButton(toolGroupBox);
        changeButton->setObjectName("changeButton");
        QFont font;
        font.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        changeButton->setFont(font);

        gridLayout_4->addWidget(changeButton, 1, 0, 1, 1);

        deleteButton = new QPushButton(toolGroupBox);
        deleteButton->setObjectName("deleteButton");

        gridLayout_4->addWidget(deleteButton, 2, 2, 1, 1);

        cancelButton = new QPushButton(toolGroupBox);
        cancelButton->setObjectName("cancelButton");

        gridLayout_4->addWidget(cancelButton, 2, 1, 1, 1);

        selectButton = new QPushButton(toolGroupBox);
        selectButton->setObjectName("selectButton");

        gridLayout_4->addWidget(selectButton, 1, 1, 1, 1);

        addButton = new QPushButton(toolGroupBox);
        addButton->setObjectName("addButton");

        gridLayout_4->addWidget(addButton, 1, 2, 1, 1);


        gridLayout_3->addWidget(toolGroupBox, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox);

        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableView = new QTableView(tab_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(0, 10, 791, 391));
        deleteButton1 = new QPushButton(tab_2);
        deleteButton1->setObjectName("deleteButton1");
        deleteButton1->setGeometry(QRect(130, 420, 100, 32));
        addButton1 = new QPushButton(tab_2);
        addButton1->setObjectName("addButton1");
        addButton1->setGeometry(QRect(10, 420, 100, 32));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());

        verticalLayout_3->addWidget(tabWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        toolGroupBox->setTitle(QString());
        sendButton->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\321\201\321\213\320\273\320\272\320\260", nullptr));
        changeButton->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\264\320\260\320\275\320\275\321\213\320\265", nullptr));
        deleteButton->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        cancelButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
        selectButton->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\321\200\320\260\321\202\321\214", nullptr));
        addButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QCoreApplication::translate("MainWindow", "\320\241\320\276\321\202\321\200\321\203\320\264\320\275\320\270\320\272\320\270", nullptr));
        deleteButton1->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        addButton1->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\320\222\320\260\320\272\321\206\320\270\320\275\320\260\321\206\320\270\321\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\272\320\260\320\267\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

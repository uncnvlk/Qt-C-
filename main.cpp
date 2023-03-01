#include "mainwindow.h"
#include <QPushButton>
#include <QApplication>
#include <QString>
#include <iostream>
#include <QSql>
#include <QSqlDatabase>
#include <QtSql>
#include <string>


#include <curl/curl.h>
#include <string.h>
#include <queue>
#include <unistd.h>


int main(int argc, char *argv[])
{


    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    // не надо
    //w.setWindowState(Qt::WindowMaximized);


    return a.exec();
}


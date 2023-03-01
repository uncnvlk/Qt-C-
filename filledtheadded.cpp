#include "filledtheadded.h"
#include "ui_filledtheadded.h"
#include <QPushButton>
#include <iostream>
#include <QString>
#include "teacher.h"
#include <QSql>
#include <QSqlDatabase>
#include <QtSql>
#include <iostream>
#include <string>
#include <QApplication>

FilledTheAdded::FilledTheAdded(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FilledTheAdded)
{
//    ui->setupUi(this);
//    ui->surnameLabel->setBuddy(ui->surnameTextField);
//    ui->nameLabel->setBuddy(ui->nameTextField);
//    ui->lastnameLabel->setBuddy(ui->lastnameTextField);
//    ui->positionLabel->setBuddy(ui->positionTextField);
//    ui->emailLabel->setBuddy(ui->emailTextField);
//    ui->numberLabel->setBuddy(ui->numberTextField);

    //Teacher *addedForm = new Teacher();
    connect(ui->buttonBox, &QDialogButtonBox::accepted, this, &FilledTheAdded::clickedOK);
    connect(ui->buttonBox, &QDialogButtonBox::rejected, this, &FilledTheAdded::clickedCancel);
}
//void FilledTheAdded::added(Teacher *pAddedForm) {
//    QString path = "/Users/elizavetasidorenkova/test.db";
//    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
//    sdb.setDatabaseName(path);

//    if (!sdb.open())
//    {
//        qDebug() << "Could not open database file:";
//        qDebug() << sdb.lastError();
//    }
//    QSqlQuery a_query;
//    QString str;
//    bool b;

//    QString str_insert = "INSERT INTO \"teachers\" (surname, name, lastname, position, email, phone) "
//                "VALUES ('%1', '%2', '%3', '%4', '%5', '%6');";
//        str = str_insert.arg(pAddedForm->surname)
//                        .arg(pAddedForm->name)
//                        .arg(pAddedForm->lastname)
//                        .arg(pAddedForm->position)
//                        .arg(pAddedForm->email)
//                        .arg(pAddedForm->number);
//        b = a_query.exec(str);
//        if (!b) {
//                qDebug() << "Кажется данные не вставляются, проверьте дверь, может она закрыта?";
//        }
//        else {
//            std::cout << "добавлено в таблицу" << std::endl;
//        }

//}

void FilledTheAdded::clickedOK(){
    QString id;
    QString name;
    QString position;
    QString employment;
    QString degree;
    QString dateOfDegree;
    QString numberOfDegree;
    QString rank;
    QString dateOfRank;
    QString numberOfRank;
    QString number;
    QString email;

    Teacher *pAddedForm = new Teacher(id, name, position, employment, degree, dateOfDegree, numberOfDegree, rank, dateOfRank, numberOfRank, number, email);


    // заброс к БД

    QString path = "/Users/elizavetasidorenkova/Desktop/iasu/iasu.db";
       QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
       sdb.setDatabaseName(path);

       if (!sdb.open())
       {
           qDebug() << "Could not open database file:";
           qDebug() << sdb.lastError();
       }
       QSqlQuery a_query;
       QString str;
       bool b;

       QString str_insert = "INSERT INTO \"teachers\" (id, name, position, employment, degree, dateOfDegree, numberOfDegree, rank, dateOfRank, numberOfRank, email, number) "
                   "VALUES ('%1', '%2', '%3', '%4', '%5', '%6', '%7', '%8', '%9', '%10', '%11');";
           str = str_insert.arg(pAddedForm->id)
                           .arg(pAddedForm->name)
                           .arg(pAddedForm->position)
                           .arg(pAddedForm->employment)
                           .arg(pAddedForm->degree)
                           .arg(pAddedForm->dateOfDegree)
                           .arg(pAddedForm->numberOfDegree)
                           .arg(pAddedForm->rank)
                           .arg(pAddedForm->dateOfDegree)
                           .arg(pAddedForm->dateOfDegree)
                           .arg(pAddedForm->email)
                           .arg(pAddedForm->number);
           b = a_query.exec(str);
           if (!b) {
                   qDebug() << "Кажется данные не вставляются, проверьте дверь, может она закрыта?";
           }
           else {
               std::cout << "добавлено в таблицу" << std::endl;
           }

    //this->addedteacher();
    emit added();
    std::cout << __FUNCTION__ << std::endl;
    //return pAddedForm;

}

//void FilledTheAdded::addedteacher(){
//    QString path = "/Users/elizavetasidorenkova/test.db";
//    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
//    sdb.setDatabaseName(path);

//    if (!sdb.open())
//    {
//        qDebug() << "Could not open database file:";
//        qDebug() << sdb.lastError();
//    }
//    QSqlQuery a_query;
//    QString str;
//    bool b;

//    QString str_insert = "INSERT INTO \"teachers\" (surname, name, lastname, position, email, phone) "
//                "VALUES ('%1', '%2', '%3', '%4', '%5', '%6');";
//        str = str_insert.arg(pAddedForm->surname)
//                        .arg(pAddedForm->name)
//                        .arg(pAddedForm->lastname)
//                        .arg(pAddedForm->position)
//                        .arg(pAddedForm->email)
//                        .arg(pAddedForm->number);
//        b = a_query.exec(str);
//        if (!b) {
//                qDebug() << "Кажется данные не вставляются, проверьте дверь, может она закрыта?";
//        }
//        else {
//            std::cout << "добавлено в таблицу" << std::endl;
//        }

//}

void FilledTheAdded::clickedCancel() {
    std::cout << __FUNCTION__ << std::endl;
}

FilledTheAdded::~FilledTheAdded()
{
    delete ui;
}

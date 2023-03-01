#include <QPushButton>
#include <QApplication>
#include <QString>
#include <QtSql>
#include <string>
#include <iostream>
#include <QWidget>
#include <QTableWidget>
#include <QCheckBox>
#include <QHBoxLayout>
#include <QtCore>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "teacher.h"
#include "maintableviewmodel.h"
#include "filledtheadded.h"

#include <curl/curl.h>
#include <string.h>
#include <queue>


using namespace std;

// вывести в отдельный клаа/файл
queue<string> init_message( string to, string from, string subj, string message ){

  queue<string> msg;
  string s = "To: " + to + "\n";
  msg.push( s );
  s = "From: " + from + "\n";
  msg.push( s );
  s = "Subject: " + subj + "\n";
  msg.push( s );
  s = "\n";
  msg.push( s );
  msg.push( message );
  return msg;
}

// вывести в отдельный класс/файл
static size_t payload_source(void *ptr, size_t size, size_t nmemb, void *userp){

  queue<string> *msg = (queue<string>*)userp;
  string s;
  if( msg->empty()){
    return 0;
  }
  else{
    s = msg->front();
    msg->pop();
  }

  memcpy(ptr, s.c_str(), s.size() );
  return s.size();
}


// конструктор главного окна
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // размер окна – на весь экран
    this->setWindowState(Qt::WindowMaximized);

    //  список для чтения из таблицы
    QList<Teacher> *values = new QList<Teacher>;

    // путь до БД
    QString path = "/Users/elizavetasidorenkova/Desktop/iasu/iasu.db";

    // инициализация переменной для подключение к БД
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName(path);

    // обработчик ошибок
    if (!sdb.open())
    {
        qDebug() << "Could not open database file:";
        qDebug() << sdb.lastError();
    }

    // запрос БД – select
    QSqlQuery query("SELECT * FROM teachers");
    while (query.next()) {
        QString id = query.value(0).toString();
        QString name = query.value(1).toString();
        QString position = query.value(2).toString();
        QString employment = query.value(3).toString();
        QString degree = query.value(4).toString();
        QString dateOfDegree = query.value(5).toString();
        QString numberOfDegree = query.value(6).toString();
        QString rank = query.value(7).toString();
        QString dateOfRank = query.value(8).toString();
        QString numberOfRank = query.value(9).toString();
        QString email = query.value(10).toString();
        QString number = query.value(11).toString();

        Teacher teacher (id, name, position, employment,
                         degree, dateOfDegree, numberOfDegree,
                         rank, dateOfRank, numberOfRank, email, number);
        values->append(teacher);
    }

    // формирование хедера таблицы
    QStringList *headers = new QStringList();
    headers->append("");
    headers->append("Табельный номер");
    headers->append("ФИО");
    headers->append("Должность");
    headers->append("Почта");
    headers->append("Номер телефона");

    ui->tableWidget->setColumnCount(6); // Указываем число колонок
    ui->tableWidget->setShowGrid(true); // Включаем сетку

    // разрешаем выделение только одного элемента
    ui->tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);

    // разрешаем выделение построчно
    ui->tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

    // устанавливаем заголовки колонок
    ui->tableWidget->setHorizontalHeaderLabels(*headers);

    // растягиваем последнюю колонку на всё доступное пространство
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);

    QSqlQuery query_("SELECT * FROM teachers");
    /* выполняем заполнение QTableWidget записями с помощью цикла
     * */
    for (int i = 0; query_.next(); i++) {
        // вставляем строку
        ui->tableWidget->insertRow(i);

        // создаём элемент, который будет выполнять роль чекбокса
        QTableWidgetItem *item = new QTableWidgetItem();
        item->data(Qt::CheckStateRole);

        // устанавливаем чекбокс в нулевую колонку, чекбокс не выбран по умолчанию
        item->setCheckState(Qt::Unchecked);
        ui->tableWidget->setItem(i, 0, item);

        // далее забираем все данные из результата запроса и устанавливаем в
        // остальные поля
        ui->tableWidget->setItem(
            i, 1,
            new QTableWidgetItem(
                query_.value(0).toString())); // табельный номер
        ui->tableWidget->setItem(
            i, 2, new QTableWidgetItem(query_.value(1).toString())); // фио
        ui->tableWidget->setItem(
            i, 3,
            new QTableWidgetItem(query_.value(3).toString())); // должность
        ui->tableWidget->setItem(
            i, 4, new QTableWidgetItem(query_.value(11).toString())); // почта
        ui->tableWidget->setItem(
            i, 5,
            new QTableWidgetItem(
                query_.value(10).toString())); // номер телефона
        }

        // ресайзим колонки по содержимому
        ui->tableWidget->resizeColumnsToContents();

        // скрываем колонку под номером 0
        ui->tableWidget->hideColumn(0);

        std::cout << "Таблица открыта" << std::endl;

        // настройка кнопок
        ui->changeButton->show();
        ui->addButton->hide();
        ui->selectButton->show();
        ui->cancelButton->hide();
        ui->deleteButton->hide();
        ui->sendButton->hide();


        // нажатие кнопок
        connect(ui->changeButton, &QPushButton::clicked, this, &MainWindow::changeInfo);
        connect(ui->addButton, &QPushButton::clicked, this, &MainWindow::addInfo);
        connect(ui->deleteButton, &QPushButton::clicked, this, &MainWindow::deleteInfo);
        connect(ui->selectButton, &QPushButton::clicked, this, &MainWindow::selectInfo);
        connect(ui->cancelButton, &QPushButton::clicked, this, &MainWindow::cancelSelect);
        connect(ui->sendButton, &QPushButton::clicked, this, &MainWindow::sendMail);
}

void MainWindow::changeInfo() {
    std::cout << __FUNCTION__ << std::endl;
}

void MainWindow::addInfo() {

    // диалоговое окно для заполения информации
    FilledTheAdded *nw = new FilledTheAdded();
    connect(nw, &FilledTheAdded::added, this, &MainWindow::reset);
    nw->show();

    std::cout << __FUNCTION__ << std::endl;
}

void MainWindow::deleteInfo() {
    std::cout << __FUNCTION__ << std::endl;
}

void MainWindow::selectInfo() {
    ui->tableWidget->showColumn(0);

    ui->changeButton->hide();
    ui->addButton->hide();
    ui->selectButton->hide();
    ui->cancelButton->show();
    ui->deleteButton->hide();
    ui->sendButton->show();

    std::cout << __FUNCTION__ << std::endl;
}

void MainWindow::cancelSelect() {
    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        // создаём элемент, который будет выполнять роль чекбокса
        QTableWidgetItem *item = new QTableWidgetItem();
        item->data(Qt::CheckStateRole);

        // устанавливаем чекбокс в нулевую колонку, чекбокс не выбран по умолчанию
        item->setCheckState(Qt::Unchecked);
        ui->tableWidget->setItem(i, 0, item);
    }

    ui->tableWidget->hideColumn(0);
    ui->changeButton->show();
    ui->addButton->hide();
    ui->selectButton->show();
    ui->cancelButton->hide();
    ui->deleteButton->hide();
    ui->sendButton->hide();
    std::cout << __FUNCTION__ << std::endl;
}

void MainWindow::sendMail() {

    std::cout << __FUNCTION__ << std::endl;
}


void MainWindow::testOverrideSend() {

//    FilledTheAdded *nw = new FilledTheAdded();
//    connect(nw, &FilledTheAdded::added, this, &MainWindow::reset);

//    nw->show();
//    //connect(nw, &FilledTheAdded::added, this, &MainWindow::reset);
//    std::cout << __FUNCTION__ << std::endl;

    QStringList *listOfMail = new QStringList;

    for (int i = 0; i < ui->tableWidget->rowCount(); i++) {
        if (ui->tableWidget->item(i, 0)->isSelected() == true) {
                listOfMail->append(ui->tableWidget->item(i, 5)->text());
        }
    }
    CURL *curl;
      CURLcode res;
      struct curl_slist *recipients = NULL;

      curl = curl_easy_init();
      string to = "em.sidorenkova@gmail.com";
      string from = "ems_devtest@mail.ru";
      string subject = "Test";
      string message = "qt.";

      queue<string> msg = init_message( to, from, subject, message );

      if( curl ){
        curl_easy_setopt(curl, CURLOPT_URL, "smtps://smtp.mail.ru:465");
        curl_easy_setopt(curl, CURLOPT_USERNAME, "ems_devtest@mail.ru");
        curl_easy_setopt(curl, CURLOPT_PASSWORD, "j53K1uGsV15jMi1EFGAt");
        curl_easy_setopt(curl, CURLOPT_MAIL_FROM, from.c_str() );
        recipients = curl_slist_append(recipients, to.c_str() );
        curl_easy_setopt(curl, CURLOPT_MAIL_RCPT, recipients);

        curl_easy_setopt(curl, CURLOPT_READFUNCTION, payload_source);
        curl_easy_setopt(curl, CURLOPT_READDATA, &msg );

        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1);
        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);

        res = curl_easy_perform(curl);
        if(res != CURLE_OK)
          fprintf(stderr, "curl_easy_perform() failed: %s\n",
                  curl_easy_strerror(res));

        curl_slist_free_all(recipients);
        curl_easy_cleanup(curl);

      }
}


void MainWindow::testOverrideDelete(QString deletedSurname) {
//    connect(this, &MainWindow::deleted, this, &MainWindow::reset);
//    QString path = "/Users/elizavetasidorenkova/test.db";
//    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
//    sdb.setDatabaseName(path);

//    bool b;
//    QSqlQuery a_query;
//    QString str;
//    QString str_insert = "DELETE FROM teachers"
//            "WHERE surname='%1';";
//    str = str_insert.arg(deletedSurname);
//    b = a_query.exec(str);
//    if (!b) {
//        qDebug() << "Вроде не удалить строку";
//    }


//    deleted();

    std::cout << __FUNCTION__ << std::endl;
}

void MainWindow::testOverrideSelect() {
    ui->selectButton->setEnabled(false);
    ui->sendButton->setEnabled(true);
    ui->tableWidget->showColumn(0);
    ui->selectButton->hide();
    std::cout << __FUNCTION__ << std::endl;
}

void MainWindow::reset() {
    QList<Teacher> *values = new QList<Teacher>;

    QString path = "/Users/elizavetasidorenkova/test.db";
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    sdb.setDatabaseName(path);

    if (!sdb.open())
    {
        qDebug() << "Could not open database file:";
        qDebug() << sdb.lastError();
    }
    //QSqlQuery a_query;
    //QString str;
    bool b;

    QSqlQuery query("SELECT * FROM teachers");
    while (query.next()) {
        QString id = query.value(0).toString();
        QString name = query.value(1).toString();
        QString position = query.value(2).toString();
        QString employment = query.value(3).toString();
        QString degree = query.value(4).toString();
        QString dateOfDegree = query.value(5).toString();
        QString numberOfDegree = query.value(6).toString();
        QString rank = query.value(7).toString();
        QString dateOfRank = query.value(8).toString();
        QString numberOfRank = query.value(9).toString();
        QString number = query.value(10).toString();
        QString email = query.value(11).toString();

        Teacher teacher(id, name, position, employment, degree, dateOfDegree,
                        numberOfDegree, rank, dateOfRank, numberOfRank, number,
                        email);
        values->append(teacher);
    }

    QTableViewModel *model = new QTableViewModel();
    model->populate(values);
    std::cout << "UPDATE" << std::endl;
    ui->tableView->setModel(model);

    std::cout << __FUNCTION__ << std::endl;
}

MainWindow::~MainWindow()
{
    delete ui;
}


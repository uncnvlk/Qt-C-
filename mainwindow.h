#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QApplication>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
        void changeInfo();
        void deleteInfo();
        void addInfo();
        void selectInfo();
        void cancelSelect();
        void sendMail();

        void testOverrideDelete(QString deletedSurname);
        void testOverrideSelect();
        void testOverrideSend();
        void reset();
signals:
        void deleted();
private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#ifndef FILLEDTHEADDED_H
#define FILLEDTHEADDED_H

#include <QDialog>
#include "teacher.h"
#include "mainwindow.h"
namespace Ui {
class FilledTheAdded;
}

class FilledTheAdded : public QDialog
{
    Q_OBJECT

public:
    explicit FilledTheAdded(QWidget *parent = nullptr);
    ~FilledTheAdded();

public slots:
    void clickedOK();
    void clickedCancel();
private:
    Ui::FilledTheAdded *ui;

// сигнал добавления новой информации
signals:
    void added();

};

#endif // FILLEDTHEADDED_H

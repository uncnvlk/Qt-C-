//
// Created by Elizaveta Sidorenkova on 24.01.2023.
//

#ifndef MAINTABLEVIEWMODEL_H
#define MAINTABLEVIEWMODEL_H

#include "teacher.h"
#include <QModelIndex>

class QTableViewModel : public QAbstractListModel
{
public:
    QTableViewModel(QObject *parent=nullptr);
    int rowCount(const QModelIndex &) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;
    QVariant headerData(int section, Qt::Orientation orientation, int role) const;
    void populate(QList<Teacher> *newValues);
private:
    QList<Teacher> *values;

};

#endif //MAINTABLEVIEWMODEL_H

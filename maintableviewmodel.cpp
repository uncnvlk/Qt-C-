#include "maintableviewmodel.h"
#include "teacher.h"
#include <QModelIndex>
#include <QDebug>
#include <QPixmap>

QTableViewModel::QTableViewModel(QObject *parent)
    :QAbstractListModel(parent)
{
    values = new QList<Teacher>();
}

int QTableViewModel::rowCount(const QModelIndex &) const
{
    return values->count();
}

int QTableViewModel::columnCount(const QModelIndex &) const
{
    return 5;
}

QVariant QTableViewModel::data( const QModelIndex &index, int role ) const
{

    QVariant value;

        switch ( role )
        {
            case Qt::DisplayRole: //string
            {
                switch (index.column()) {
                    case 0: {
                        value = this->values->at(index.row()).getID();
                        break;
                    }
                    case 1: {
                        value = this->values->at(index.row()).getName();
                        break;
                    }
                    case 2: {
                        value = this->values->at(index.row()).getPosition();
                        break;
                    }
                    case 3: {
                        value = this->values->at(index.row()).getEmail();
                        break;
                    }
                    case 4: {
                        value = this->values->at(index.row()).getNumber();
                    }
                }
            }
            break;

            case Qt::UserRole: //data
            {
                value = this->values->at(index.row()).getName();
            }
            break;

            default:
                break;
        }

    return value;
}

QVariant QTableViewModel::headerData(int section, Qt::Orientation orientation, int role) const
{
    if (role == Qt::DisplayRole && orientation == Qt::Horizontal) {
        switch (section) {
        case 0:
            return QString("Фамилия");
        case 1:
            return QString("Имя");
        case 2:
            return QString("Отчество");
        case 3:
            return QString("Должность");
        case 4:
            return QString("Почта");
        case 5:
            return QString("Номер телефона");
        }
    }
    return QVariant();
}

void QTableViewModel::populate(QList<Teacher> *newValues)
{
    int idx = this->values->count();
    this->beginInsertRows(QModelIndex(), 1, idx);
        this->values = newValues;
    endInsertRows();
 }

#ifndef TEACHER_H
#define TEACHER_H
#include <QString>
using namespace std;

class Teacher {

public:
    Teacher();
    Teacher(QString id, QString name, QString position, QString employment, QString degree, QString dateOfDegree, QString numberOfDegree, QString rank, QString dateOfRank, QString numberOfRank, QString email, QString number);

    void add();

    QString getID() const;
    void setID(const QString &value);

    QString getName() const;
    void setName(const QString &value);

    QString getPosition() const;
    void setPosition(const QString &value);

    QString getEmployment() const;
    void setEmployment(const QString &value);

    QString getDegree() const;
    void setDegree(const QString &value);

    QString getDateOfDegree() const;
    void setDateOfDegree(const QString &value);

    QString getNumberOfDegree() const;
    void setNumberOfDegree(const QString &value);

    QString getRank() const;
    void setRank(const QString &value);

    QString getDateOfRank() const;
    void setDateOfRank(const QString &value);

    QString getNumberOfRank() const;
    void setNumberOfRank(const QString &value);

    QString getEmail() const;
    void setEmail(const QString &value);

    QString getNumber() const;
    void setNumber(const QString &value);

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
    QString email;
    QString number;
};

#endif // TEACHER_H

#include "teacher.h"
#include <QString>

Teacher::Teacher(QString id, QString name, QString position, QString employment, QString degree, QString dateOfDegree, QString numberOfDegree, QString rank, QString dateOfRank, QString numberOfRank, QString email, QString number) {
    this->id = id;
    this->name = name;
    this->position = position;
    this->employment = employment;
    this->degree = degree;
    this->dateOfDegree = dateOfDegree;
    this->numberOfDegree = numberOfDegree;
    this->rank = rank;
    this->dateOfRank = dateOfRank;
    this->numberOfRank = numberOfRank;
    this->email = email;
    this->number = number;

};

Teacher::Teacher() {

};

QString Teacher::getID() const {
    return id;
}

void Teacher::setID(const QString &value)
{
    id = value;
}

QString Teacher::getName() const {
    return name;
}

void Teacher::setName(const QString &value)
{
    name = value;
}

QString Teacher::getPosition() const {
    return position;
}

void Teacher::setPosition(const QString &value)
{
    position = value;
}

QString Teacher::getEmployment() const {
    return employment;
}

void Teacher::setEmployment(const QString &value)
{
    employment = value;
}

QString Teacher::getDegree() const {
    return degree;
}

void Teacher::setDegree(const QString &value)
{
    degree = value;
}

QString Teacher::getDateOfDegree() const {
    return dateOfDegree;
}

void Teacher::setDateOfDegree(const QString &value)
{
    dateOfDegree = value;
}

QString Teacher::getNumberOfDegree() const {
    return numberOfDegree;
}

void Teacher::setNumberOfDegree(const QString &value)
{
    numberOfDegree = value;
}

QString Teacher::getRank() const {
    return rank;
}

void Teacher::setRank(const QString &value)
{
    rank = value;
}

QString Teacher::getDateOfRank() const {
    return dateOfRank;
}

void Teacher::setDateOfRank(const QString &value)
{
    dateOfRank = value;
}

QString Teacher::getNumberOfRank() const {
    return numberOfRank;
}

void Teacher::setNumberOfRank(const QString &value)
{
    numberOfRank = value;
}

QString Teacher::getNumber() const {
    return number;
}

void Teacher::setNumber(const QString &value)
{
    number = value;
}

QString Teacher::getEmail() const {
    return email;
}

void Teacher::setEmail(const QString &value)
{
    email = value;
}











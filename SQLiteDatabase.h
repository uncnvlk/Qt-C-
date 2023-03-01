#ifndef SQLITEDATABASE_H
#define SQLITEDATABASE_H


class SQLiteDatabase {
    SQLiteDatabase();

public:
    void createDB();
    void createTable();
    void show();
    void addItem();
    void deleteItem();


};

#endif // SQLITEDATABASE_H

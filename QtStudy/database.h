#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>

class DataBase
{
public:

    void CreateDataBase(const QString &dbName);
    void CreateDataBaseTable(const QString &tableName);
    void DeleteDataBaseItem(const QString &tableName, const QString &Item, QString &value);
};

#endif // DATABASE_H

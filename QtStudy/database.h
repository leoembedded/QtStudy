#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QDebug>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QFile>

#include <QDateTime>

class DataBase
{
public:

    void CreateDataBase(const QString &dbName);
    void CreateDataBaseTable(const QString &tableName);
    void DeleteDataBaseItem(const QString &tableName, const QString &Item, QString &value);
    void InsertDataBaseItem(const QString &tableName, const QString &item, float value);
};

#endif // DATABASE_H

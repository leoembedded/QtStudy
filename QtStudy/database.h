#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QDebug>
#include <QString>

class DataBase
{
public:

    void CreateDataBase(const QString &dbName);
};

#endif // DATABASE_H

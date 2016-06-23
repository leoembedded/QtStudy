#include "database.h"



void DataBase::CreateDataBase(const QString &dbName)
{

    // 添加sqlite数据库
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");

    // 设置数据库名称
    db.setDatabaseName(dbName);

    if (db.open())
    {

        qDebug() << QObject::tr("成功打开数据库!");

    }
    else
    {
        qDebug() << QObject::tr("打开数据库失败!");
    }
}

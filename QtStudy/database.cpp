#include "database.h"



void DataBase::CreateDataBase(const QString &dbName)
{

    if (QFile::exists(dbName))
    {
        qDebug() << QObject::tr("数据库已经存在!");

    }
    else
    {
        qDebug() << QObject::tr("数据库不存在，需要新建数据库!");



    }

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

void DataBase::CreateDataBaseTable(const QString &tableName)
{

    // 声明变量
    QSqlQuery query;

    if (!query.exec(tableName))
    {
        qDebug() << QObject::tr("创建表格失败!") << query.lastError().text();
    }
    else
    {
        qDebug() << QObject::tr("创建表格成功!");
    }

}

void DataBase::DeleteDataBaseItem(const QString &Item, QString &value)
{

    // 声明变量
    QSqlQuery query;

    QString

    query.prepare(clear_sql);

    if (!query.exec(tableName))
    {
        qDebug() << QObject::tr("创建表格失败!") << query.lastError().text();
    }
    else
    {
        qDebug() << QObject::tr("创建表格成功!");
    }

}

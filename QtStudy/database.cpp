#include "database.h"


/*******************************************************************************
*                           陆超@2016-06-23
* Function Name  :  CreateDataBase
* Description    :  创建/打开数据库
* Input          :  const QString &dbName       待创建/打开的数据库名称
* Output         :  None
* Return         :  None
*******************************************************************************/
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

}// End of void DataBase::CreateDataBase(const QString &dbName)

/*******************************************************************************
*                           陆超@2016-06-23
* Function Name  :  CreateDataBaseTable
* Description    :  创建表格
* Input          :  const QString &tableName        待创建表格名称
* Output         :  None
* Return         :  None
*******************************************************************************/
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

}// End of void DataBase::CreateDataBaseTable(const QString &tableName)

/*******************************************************************************
*                           陆超@2016-06-24
* Function Name  :  DataBase::InsertDataBaseItem
* Description    :  插入内存至数据库   "insert into student(item,item1) values (?, ?, ?)"
* Input          :  const QString &tableName            待插入表格
*                   const QString &item                 待插入项
*                   float value                         待插入值
* Output         :  None
* Return         :  None
*******************************************************************************/
void DataBase::InsertDataBaseItem(const QString &tableName, const QString &item, float value)
{

    // 声明变量
    QSqlQuery query;


    // 字符串变量
    QString insertSql;

    // 获取系统时间
    QDateTime time;

    QString timeStr;

    time    = QDateTime::currentDateTime();
    timeStr = time.toString("yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式


    insertSql = QString("insert into %1 (Time, %2) values (?, ?)").arg(tableName).arg(item);

    // 准备命令
    query.prepare(insertSql);
    query.addBindValue(timeStr);
    query.addBindValue(value);


    if (!query.exec())
    {
        qDebug() << QObject::tr("插入内容成功失败!") << query.lastError().text();
    }
    else
    {
        qDebug() << QObject::tr("插入内容成功!");

        // 打印插入内容
    }

}// End of void DataBase::InsertDataBaseItem(const QString &tableName, const QString &item, float value)

/*******************************************************************************
*                           陆超@2016-06-24
* Function Name  :  DeleteDataBaseItem
* Description    :  删除DB某些内容  delete from %s where %s = ?"
* Input          :  const QString &tableName        待删除表名称
*                   const QString &Item             待删除项名称
*                   QString &value                  待删除内容
* Output         :  None
* Return         :  None
*******************************************************************************/
void DataBase::DeleteDataBaseItem(const QString &tableName, const QString &Item, QString &value)
{

    // 声明变量
    QSqlQuery query;

    // 字符串变量
    QString clearSql;

//    clearSql = QString("delete from %s where %s = %s").arg(tableName).arg(Item).arg(value);

//    query.prepare(clearSql);

    clearSql = QString("delete from %s where %s = ?").arg(tableName).arg(Item);

    query.prepare(clearSql);
    query.addBindValue(value);

    if (!query.exec())
    {
        qDebug() << QObject::tr("删除内容失败!") << query.lastError().text();
    }
    else
    {
        qDebug() << QObject::tr("删除内容成功!");
    }

}// End of void DataBase::DeleteDataBaseItem(const QString &tableName, const QString &Item, QString &value)

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QtNetwork>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 删除标题栏
    setWindowFlags(Qt::FramelessWindowHint);

    // 增加按钮并修改显示内容 通过TR转码
    ui->newScreenButton->setText("Login");

    // 绑定信号和槽
    connectSignalWithSlot();

    // 获取本机名字
    QString localHostName = QHostInfo::localHostName();
    qDebug() <<"localHostName: "<<localHostName;

    // 获取本机IP
    QHostInfo info = QHostInfo::fromName(localHostName);
    qDebug() <<"IP Address: "<<info.addresses();

    // 只输出IPv4地址
    foreach(QHostAddress address,info.addresses())
    {
         if(address.protocol() == QAbstractSocket::IPv4Protocol)
            qDebug() << address.toString();
    }

    SqliteDataBase.CreateDataBase("test2.db");

}

MainWindow::~MainWindow()
{
    delete ui;
}

// 连接信号和槽
void MainWindow::connectSignalWithSlot()
{
    // 绑定信号和槽
    connect(ui->newScreenButton, SIGNAL(clicked()), this, SLOT(showLoginDialog()));
    // 绑定信号和槽
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(showTcpConnect()));
}

void MainWindow::showLoginDialog()
{
//    QDialog *dlg = new QDialog(this);
//    dlg->show();

    loginDialog.show();

}

void MainWindow::showTcpConnect()
{
    tcpConnectForm.show();
}


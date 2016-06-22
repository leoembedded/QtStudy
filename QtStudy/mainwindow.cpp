#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>
#include <QDebug>
#include <QtNetwork>>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 删除标题栏
    setWindowFlags(Qt::FramelessWindowHint);

    // 增加按钮并修改显示内容 通过TR转码
    ui->newScreenButton->setText(tr("新窗口"));

    // 绑定信号和槽
    connect(ui->newScreenButton, SIGNAL(clicked()), this, SLOT(showChildDialog()));

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

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showChildDialog()
{
//    QDialog *dlg = new QDialog(this);
//    dlg->show();

    LoginDialog.show();

}


#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    // 创建TCP服务
    tcpServer = new QTcpServer(this);

    qDebug() << tr("进入TCP服务！");

    if(!tcpServer->listen(QHostAddress::LocalHost, 6666))
    {
        //**本地主机的6666端口，如果出错就输出错误信息，并关闭
        qDebug() << tcpServer->errorString();
        close();
    }

    // 连接槽和想要槽函数
    connect(tcpServer, SIGNAL(newConnection()), this, SLOT(sendMessage()));
}

Form::~Form()
{
    delete ui;
}

void Form::sendMessage()
{

}

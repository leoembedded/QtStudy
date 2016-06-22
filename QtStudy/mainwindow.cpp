#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 增加按钮并修改显示内容 通过TR转码
    ui->newScreenButton->setText(tr("新窗口"));

    // 绑定信号和槽
    connect(ui->newScreenButton, SIGNAL(clicked()), this, SLOT(showChildDialog()));
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


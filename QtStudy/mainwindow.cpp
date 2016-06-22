#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // 增加按钮并修改显示内容 通过tr转码
    ui->newScreenButton->setText(tr("新窗口"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

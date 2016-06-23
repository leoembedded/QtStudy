#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "dialog.h"
#include "form.h"
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:

    void showLoginDialog();                                             // Login槽
    void showTcpConnect();                                              // TCP连接页面槽


private:
    Ui::MainWindow *ui;

    Dialog loginDialog;

    Form tcpConnectForm;

    DataBase SqliteDataBase;


    // Private Function
    void connectSignalWithSlot();                                       // 连接信号和槽
};

#endif // MAINWINDOW_H

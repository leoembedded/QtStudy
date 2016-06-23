#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QtNetWork>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();


private slots:

    void sendMessage();

private:
    Ui::Form *ui;

    QTcpServer *tcpServer;                                              // 私有对象

};

#endif // FORM_H

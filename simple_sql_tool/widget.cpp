#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


Widget::OpenDatabase()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    qDebug() << "is ODBC available?" << db.isValid();
    QString dsn = QString::fromLocal8Bit("sqlServer2008r2");


}

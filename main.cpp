#include "mainwindow.h"
#include"connection.h"
#include<QMessageBox>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    connection c;
    bool test=c.createconnect();
    MainWindow w;
    w.show();
    if(test)
    {
        QMessageBox::information(nullptr,QObject::tr("database is open"),
        QObject::tr("connection successful.\n"
                    "Click cancel to exit."), QMessageBox::Cancel);
}
    else
        QMessageBox::critical(nullptr, QObject::tr("database is not open"),
                    QObject::tr("connection failed.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);



    return a.exec();
}

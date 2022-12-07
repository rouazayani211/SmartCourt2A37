#include "dialog_in.h"
#include "ui_dialog_in.h"
#include "mainwindow.h"
#include <QApplication>
#include <QObject>
#include <QMessageBox>
#include <QDebug>
#include <QFile>
dialog_in::dialog_in(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::dialog_in)
{
    ui->setupUi(this);
}

dialog_in::~dialog_in()
{
    delete ui;
}

void dialog_in::on_pushButton_clicked()
{

    employes e;
    QString mail=ui->login->text();
    QString pass=ui->password->text();
if(e.verif_login(mail,pass)!=0)  {

    QMessageBox::information(this,"Connexion","login et mdp correcte");
    MainWindow*main =new MainWindow(this);

    main->show();

}else{
    QMessageBox::warning(this, "login","username or password in not correct");

}
}

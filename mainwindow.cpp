#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "citoyen.h"
#include <QMessageBox>
#include<QIntValidator>
#include <QApplication>
#include<QSound>
#include<QDebug>
#include<QMediaPlayer>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_cin_c->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->le_cin_2->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->le_num_c->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->cin_s->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->le_num_c_2->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->tab_c->setModel(Etmp.afficherCitoyen());
    player=new QMediaPlayer(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_ajouter_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/Click.mp3"));
      player->play();
    QString nom_c=ui->le_nom_c->text();
    QString prenom_c=ui->le_prenom_c->text();
    QString nationalite_c=ui->la_nationalite_c->text();
    int cin_c=ui->le_cin_c->text().toInt();
    QDate date_c=ui->la_date_c->date();
    QString adresse_c=ui->adresse_c->text();
    int num_c=ui->le_num_c->text().toInt();

    Citoyen C (nom_c,prenom_c,nationalite_c,cin_c,date_c,adresse_c,num_c);

    bool test=C.ajouterCitoyen();

    if(test)
    {
        player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/success.mp3"));
          player->play();
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout éffectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_c->setModel(Etmp.afficherCitoyen());//mise a jour

}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                    QObject::tr("Ajout non éffectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);




}

void MainWindow::on_pushButton_modifier_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/Click.mp3"));
      player->play();
    QString nom_c=ui->le_nom_2->text();
    QString prenom_c=ui->le_prenom_2->text();
    QString nationalite_c=ui->la_nationalite_2->text();
    int cin_c=ui->le_cin_2->text().toInt();
    QDate date_c=ui->la_date_2->date();
    QString adresse_c=ui->adresse_2->text();
    int num_c=ui->le_num_c_2->text().toInt();

    Citoyen C (nom_c,prenom_c,nationalite_c,cin_c,date_c,adresse_c,num_c);


    bool test=C.modifierCitoyen();

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Modification avec succés.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab_c->setModel(C.afficherCitoyen());


}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                    QObject::tr("Modification non éffectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}


void MainWindow::on_pushButton_supprimer_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/Click.mp3"));
      player->play();
    int cin_c=ui->cin_s->text().toInt();


    bool test=Etmp.supprimerCitoyen(cin_c);

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Supression avec succés.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab_c->setModel(Etmp.afficherCitoyen());//mise a jour
}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                    QObject::tr("Suppression non éffectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}



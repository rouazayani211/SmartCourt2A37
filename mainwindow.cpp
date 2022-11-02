#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"employes.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tab_employes->setModel(emp.afficher());
    ui->le_id->setValidator(new QIntValidator(0,9999999,this));
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_b_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString date_naissance=ui->le_date_naissance->text();
    QString adresse=ui->le_adresse->text();
    QString grade=ui->le_grade->text();
employes e(id,nom,prenom,date_naissance,adresse,grade);
bool test=e.ajouter();
if(test)
{ ui->tab_employes->setModel(emp.afficher());
    QMessageBox::information(nullptr, QObject::tr("OK"),
                QObject::tr("ajout effectuer.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);


     }
else
{

    QMessageBox::critical(nullptr, QObject::tr("not ok"),
                QObject::tr("ajout n'est pas effectuer.\n"
                            "Click Cancel to exit."), QMessageBox::Cancel);
}

 }

void MainWindow::on_supprimer_clicked()
{
    int id=ui->le_id_3->text().toInt();
   bool test=emp.supprimer(id);
   if (test)
   {
        ui->tab_employes->setModel(emp.afficher());
       QMessageBox::information(nullptr, QObject::tr("OK"),
                   QObject::tr("suppression effectué.\n"
                               "Click Cancel to exit."), QMessageBox::Cancel);

   }
   else
   {

           QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                       QObject::tr("suppression n'est pas effectué.\n"
                                 "Click Cancel to exit."), QMessageBox::Cancel);
   }
}



void MainWindow::on_modifier_clicked()
{
    int id=ui->le_id_2->text().toInt();
    QString nom=ui->le_nom_2->text();
    QString prenom=ui->le_prenom_2->text();
    QString dn=ui->le_dn_2->text();
    QString adr=ui->le_adr_2->text();
    QString grade=ui->le_grade_2->text();
     employes E(id,nom,prenom,dn,adr,grade);
    bool test=E.modifier();
    if (test)
    {
         ui->tab_employes->setModel(emp.afficher());
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("modification effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else
    {

            QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                        QObject::tr("modification n'est pas effectué.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
    }
}



 #include "mainwindow.h"
#include "ui_mainwindow.h"

#include "empp.h"
#include "cit.h"
#include "aff.h"
#include "avoc.h"
#include "gerer_salles.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}
MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    empp * homee = new empp ();
homee->setWindowTitle("Employes");
homee->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    cit * homees = new cit ();
homees->setWindowTitle("Citoyens");
homees->show();
}

void MainWindow::on_pushButton_3_clicked()
{
    aff * homeea = new aff ();
homeea->setWindowTitle("Affaires");
homeea->show();

}

void MainWindow::on_pushButton_4_clicked()
{
    avoc * homeeav = new avoc ();
homeeav->setWindowTitle("Avocats");
homeeav->show();
}

void MainWindow::on_pushButton_5_clicked()
{
    gerer_salles * g_s = new gerer_salles ();
g_s->setWindowTitle("Salles");
g_s->show();
}

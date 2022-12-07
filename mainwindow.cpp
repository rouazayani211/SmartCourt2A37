#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QTextStream>
#include <QTextDocument>
#include <QSpinBox>
#include <QDebug>
#include <QPainter>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QPrintPreviewDialog>
#include <QString>
#include <QDateEdit>
#include <QMessageBox>
#include <QIntValidator>
#include <QPainter>
#include <QPrinter>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView_salle_ghatas->setModel(s.afficher_salle());
    ui->tableView_historique_ghatas->setModel(s.afficher_actions());
    ui->ComboBox_numsallemodif_ghatas->setModel(s.afficher_salle());
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajoute_ghatas_clicked()
{

       int capacite=ui->Line_Edit_capacite_ghatas->text().toInt();
       QString depart=ui->comboBox_departement_ghatas->currentText();
       int nbp=ui->lineEdit_nbp_ghatas->text().toInt();

       salles s1(0,capacite,depart,nbp) ;//sna3et  instance mel classe salle bel constructeur parametre

    if((nbp==0)||(capacite==0))
    {
       QMessageBox::information(nullptr,QObject::tr("ajouter une salle"),QObject::tr("veuillez remplir les champs"),QMessageBox::Ok);
    }

     else
    {

    bool test=s1.ajouter_salle();
     if(test)
    {


        QMessageBox::information(nullptr, QObject::tr("Salle ajoutée"),
                    QObject::tr("Salle ajoutée.\n"
                                "Cancel to exit."), QMessageBox::Cancel);
        ui->tableView_salle_ghatas->setModel(s.afficher_salle());
        ui->ComboBox_numsallemodif_ghatas->setModel(s.afficher_salle());
    }

    else
     {        QMessageBox::critical(nullptr, QObject::tr("Salle non ajoutée"),
                                       QObject::tr("Salle non ajoutée .\n"
                                                   "Click Cancel to exit."), QMessageBox::Cancel);
    }
    }
}

void MainWindow::on_pushButton_modifier_ghatas_clicked()
{
    int numsalle = ui->ComboBox_numsallemodif_ghatas->currentText().toInt();
    int capacite = ui->Line_Edit_capacite_ghatas->text().toInt();
    QString depart=ui->comboBox_departement_ghatas->currentText();
    int nbp=ui->lineEdit_nbp_ghatas->text().toInt();

      if((numsalle==0)||(capacite==0))//||(truck_id==""))
      {
         QMessageBox::information(nullptr,QObject::tr("Ajouter une salle"),QObject::tr("Remplir les champs"),QMessageBox::Ok);
      }
      salles s(numsalle,capacite,depart,nbp);

      bool test=s.modifier_salle();
      if(test)
      {

          QMessageBox::information(nullptr, QObject::tr("Salle modifiée"),
                      QObject::tr("Salle modfiée.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tableView_salle_ghatas->setModel(s.afficher_salle());
      }
      else
       {        QMessageBox::critical(nullptr, QObject::tr("Salle non modifiée"),
                                         QObject::tr("Salle non modifiée.\n"
                                                     "Click Cancel to exit."), QMessageBox::Cancel);
      }
}

void MainWindow::on_pushButton_supprimer_ghatas_clicked()
{
    salles s;

    int num_del=ui->tableView_salle_ghatas->model()->data(ui->tableView_salle_ghatas->model()->index(ui->tableView_salle_ghatas->currentIndex().row(),0)).toInt();

    bool test1;
    test1= s.supprimer_salle(num_del);
    if(test1==false)
    {

        QMessageBox::critical(nullptr, QObject::tr("salle non supprimée"),
                              QObject::tr("salle non supprime .\n"
                                          "Click Cancek to exit"), QMessageBox::Cancel);
}
    else{
        QMessageBox::information(nullptr, QObject::tr("salle  supprimée"),
                              QObject::tr("salle supprime .\n"
                                          "Click Cancek to exit"), QMessageBox::Cancel);
        ui->tableView_salle_ghatas->setModel(s.afficher_salle());
        ui->ComboBox_numsallemodif_ghatas->setModel(s.afficher_salle());
    }
}

void MainWindow::on_lineEdit_recherche_ghatas_textChanged(const QString &arg1)
{
    ui->tableView_salle_ghatas->setModel(s.Recherche(arg1));
}

void MainWindow::on_pushButton_trier_ghatas_clicked()
{
    ui->tableView_salle_ghatas->setModel(s.TriParNum());
}
void MainWindow::on_pushButton_pdf_ghatas_clicked()
{
    QPrinter printer;

    QPdfWriter pdf("C:/Users/firas/Desktop/test.pdf");
                QPainter painter(&pdf);
                int i = 4000;
                painter.setPen(Qt::red);
                painter.setFont(QFont("Arial", 30));
                painter.drawText(3300,800,"Liste des salles");
                painter.setPen(Qt::black);
                painter.setFont(QFont("Arial", 50));
                painter.drawRect(1500,200,7300,1000);
                painter.drawRect(0,3000,9600,500);
                painter.setFont(QFont("Arial", 9));
                painter.drawText(1300,3300,"Numero salle");
                painter.drawText(2600,3300,"Capacité");
                painter.drawText(3900,3300,"Département");
                painter.drawText(5200,3300,"Nombre publique");

                QSqlQuery query;
                query.prepare("select * from salle");
                query.exec();
                while (query.next())
                {
                    painter.drawText(1300,i,query.value(0).toString());
                    painter.drawText(2600,i,query.value(1).toString());
                    painter.drawText(3900,i,query.value(2).toString());
                    painter.drawText(5200,i,query.value(3).toString());
                    i = i +500;
                }

                int reponse = QMessageBox::question(this, "Génerer PDF", "<PDF Enregistré>...Vous Voulez Affichez Le PDF ?", QMessageBox::Yes |  QMessageBox::No);
                if (reponse == QMessageBox::Yes)
                {
                    QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/firas/Desktop/test.pdf"));

                    painter.end();
                }
                if (reponse == QMessageBox::No)
                {
                    painter.end();
                }
}

void MainWindow::on_pushButton_stat_ghatas_clicked()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT departement FROM salle WHERE  departement='Administratif' ");
    float countAdmin=model->rowCount();
    model->setQuery("SELECT departement FROM salle WHERE  departement='Judiciaire' ");
    float countJud=model->rowCount();
    model->setQuery("SELECT departement FROM salle WHERE  departement='Commercial' ");
    float countcom=model->rowCount();
    float total=countAdmin+countJud+countcom;

            QPieSeries *series = new QPieSeries();
            series->append("Administratif",countAdmin);
            series->append("Judiciaire",countJud);
            series->append("Commercial",countcom);

            if (countAdmin!=0)
            {QPieSlice *slice = series->slices().at(0);
                slice->setLabel("Administratif "+QString("%1%").arg(100*slice->percentage(),3,'f',1));
                slice->setLabelVisible();
                slice->setPen(QPen(Qt::black));}
            if ( countJud!=0)
            {
                // Add label, explode and define brush for 2nd slice
                QPieSlice *slice1 = series->slices().at(1);
                //slice1->setExploded();
                slice1->setLabel("Judiciaire "+QString("%1%").arg(100*slice1->percentage(),3,'f',1));
                slice1->setLabelVisible();
                slice1->setBrush(QColor(Qt::cyan));
            }
            if ( countcom!=0)
            {
                // Add label, explode and define brush for 2nd slice
                QPieSlice *slice2 = series->slices().at(2);
                //slice1->setExploded();
                slice2->setLabel("Commercial "+QString("%1%").arg(100*slice2->percentage(),3,'f',1));
                slice2->setLabelVisible();
                slice2->setBrush(QColor(Qt::red));
            }

            // Create the chart widget
            QChart *chart = new QChart();
            // Add data to chart with title and hide legend
            chart->addSeries(series);
            chart->setTitle("Totale "+ QString::number(total));
            // Used to display the chart
            QChartView *chartView = new QChartView(chart);
            chartView->setRenderHint(QPainter::Antialiasing);
            chartView->resize(1000,500);
            chart->legend()->hide();
            chartView->show();
}

void MainWindow::on_pushButton_clicked()
{
    int num=ui->tableView_salle_ghatas->model()->data(ui->tableView_salle_ghatas->model()->index(ui->tableView_salle_ghatas->currentIndex().row(),0)).toInt();
    int cap=ui->tableView_salle_ghatas->model()->data(ui->tableView_salle_ghatas->model()->index(ui->tableView_salle_ghatas->currentIndex().row(),1)).toInt();
    int nbp=ui->tableView_salle_ghatas->model()->data(ui->tableView_salle_ghatas->model()->index(ui->tableView_salle_ghatas->currentIndex().row(),3)).toInt();
    if (num == 0)
    {
        QMessageBox::information(nullptr, QObject::tr("vide!"),
                              QObject::tr("Selectionnez une salle.\n"
                                          "Click Cancek to exit"), QMessageBox::Cancel);
    }
    else
    {
    if (nbp<cap)
    {
       nbp++;
       salles s1(num,cap,"aaaa",nbp);
       bool test = s1.modifier_nbp();
       if (test)
       {
           ui->tableView_salle_ghatas->setModel(s.afficher_salle());

       bool test1 = s1.ajouter_action(num,"Entree");
       if (test1)
       {
           QMessageBox::information(nullptr, QObject::tr("action ajoutée"),
                                 QObject::tr("entrée ajouté .\n"
                                             "Click Cancek to exit"), QMessageBox::Cancel);
           ui->tableView_historique_ghatas->setModel(s.afficher_actions());
       }
       else {
           QMessageBox::critical(nullptr, QObject::tr("action non ajoutée"),
                                 QObject::tr("entrée non ajoutée .\n"
                                             "Click Cancek to exit"), QMessageBox::Cancel);
       }

       }
    }
    if (nbp == cap)
    {
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
                    QString res=QString::number(num);
                    notifyIcon->show();
                    notifyIcon->showMessage("Notification Salle ","la salle dont le numero est "+res+" est saturée",QSystemTrayIcon::Information,15000);
    }
    }
}


void MainWindow::on_pushButton_sortie_ghatas_clicked()
{
    int num=ui->tableView_salle_ghatas->model()->data(ui->tableView_salle_ghatas->model()->index(ui->tableView_salle_ghatas->currentIndex().row(),0)).toInt();
    int cap=ui->tableView_salle_ghatas->model()->data(ui->tableView_salle_ghatas->model()->index(ui->tableView_salle_ghatas->currentIndex().row(),1)).toInt();
    int nbp=ui->tableView_salle_ghatas->model()->data(ui->tableView_salle_ghatas->model()->index(ui->tableView_salle_ghatas->currentIndex().row(),3)).toInt();
    if (num == 0)
    {
        QMessageBox::information(nullptr, QObject::tr("vide!"),
                              QObject::tr("Selectionnez une salle.\n"
                                          "Click Cancek to exit"), QMessageBox::Cancel);
    }
    else
    {
    if (nbp>0)
    {
       nbp--;
       salles s1(num,cap,"aaaa",nbp);
       bool test = s1.modifier_nbp();
       if (test)
       {
           ui->tableView_salle_ghatas->setModel(s.afficher_salle());

       bool test1 = s1.ajouter_action(num,"Sortie");
       if (test1)
       {
           QMessageBox::information(nullptr, QObject::tr("action ajoutée"),
                                 QObject::tr("sortie ajouté .\n"
                                             "Click Cancek to exit"), QMessageBox::Cancel);
           ui->tableView_historique_ghatas->setModel(s.afficher_actions());
       }
       else {
           QMessageBox::critical(nullptr, QObject::tr("action non ajoutée"),
                                 QObject::tr("sortie non ajoutée .\n"
                                             "Click Cancek to exit"), QMessageBox::Cancel);
       }

       }
    }

    }
}

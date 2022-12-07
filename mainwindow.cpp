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
#include <QFile>
#include <QString>
#include <QDebug>
#include <QTextStream>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
        /////////////////////////////////////////////////////////// arduino
    int ret=A.connect_arduino(); // lancer la connexion à arduino
    switch(ret){
    case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
        break;
    case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
       break;
    case(-1):qDebug() << "arduino is not available";
    }
     QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(update_label())); // permet de lancer
     //le slot update_label suite à la reception du signal readyRead (reception des données).
        /// ////////////////////////////////////
    ui->tableView_salle_ghatas->setModel(s.afficher_salle());
    ui->ComboBox_numsallemodif_ghatas->setModel(s.afficher_salle());
    read();
    int nbs = 0 ;
    QSqlQueryModel *model=new QSqlQueryModel();
      model = s.afficher_salle();
      QDate da;
      QString das = (da.currentDate()).toString("yyyy-MM-dd");
      qDebug()<< das  ;
      for (int i = 0; i < model->rowCount(); i++) {
          qDebug() << (model->data(model->index(i,4)).toString());
          if ( (das == (model->data(model->index(i,4)).toString())) && ((model->data(model->index(i,5)).toString()) == "Reservee" ))
          {
              nbs++;
          }
      }


    QString res = QString::number(nbs);
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->showMessage("Notification Salle ","il ya " + res + " salles reservess aujourdui le " + das,QSystemTrayIcon::Information,15000);

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
       QDate date = ui->dateEdit_res_ghatas->date();
       QString etat = ui->comboBox_etat_ghatas->currentText();

       salles s1(0,capacite,depart,nbp,date,etat) ;//sna3et  instance mel classe salle bel constructeur parametre

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
        QString a = QDate::currentDate().toString();
        QString ajout = "ajout " + a;
        write(ajout);
        read();
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
    QDate date = ui->dateEdit_res_ghatas->date();
    QString etat = ui->comboBox_etat_ghatas->currentText();

      if((numsalle==0)||(capacite==0))//||(truck_id==""))
      {
         QMessageBox::information(nullptr,QObject::tr("Modifier une salle"),QObject::tr("Remplir les champs"),QMessageBox::Ok);
      }
      salles s(numsalle,capacite,depart,nbp,date,etat);

      bool test=s.modifier_salle();
      if(test)
      {

          QMessageBox::information(nullptr, QObject::tr("Salle modifiée"),
                      QObject::tr("Salle modfiée.\n"
                                  "Click Cancel to exit."), QMessageBox::Cancel);
          ui->tableView_salle_ghatas->setModel(s.afficher_salle());
          QString a = QDate::currentDate().toString();
          QString modif = "modification " + a;
          write(modif);
          read();
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
        QString a = QDate::currentDate().toString();
        QString supp = "suppression " + a;
        write(supp);
        read();
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

    QPdfWriter pdf("C:/Users/Adem Hamdi/Desktop/salles_fi/test.pdf");
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
                    QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/Adem Hamdi/Desktop/salles_fi/test.pdf"));

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
void MainWindow::write(QString action)
{
    QFile file("C:/Users/Adem Hamdi/Desktop/salles_fi/Historique.txt");
    // Trying to open in WriteOnly and Text mode
    if(!file.open(QIODevice::Append |
                  QFile::Text))
    {
        qDebug() << " Could not open file for writing";
        return;
    }

    // To write text, we use operator<<(),
    // which is overloaded to take
    // a QTextStream on the left
    // and data types (including QString) on the right

    QTextStream out(&file);
    out << action << endl;
    file.flush();
    file.close();
}
void MainWindow::read()
{
    QFile file("C:/Users/Adem Hamdi/Desktop/salles_fi/Historique.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug() << " Could not open the file for reading";
        return;
    }
    QStandardItemModel * model = new QStandardItemModel();
    QTextStream in(&file);
    int i = 0 ;


        while (!file.atEnd()) {
            QByteArray line = file.readLine();
            qDebug() << line;
            QString txt = line ;
            QStandardItem *item= new QStandardItem(txt);
             model->insertRow(i,item);
             i++;
        }

    file.close();
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Action"));
    ui->tableView_historique_ghatas->setModel(model);
}


void MainWindow::on_pushButton_entree_ghatas_clicked()
{
    QByteArray ba ="entree!! ";

     A.write_to_arduino(ba);
}

void MainWindow::on_pushButton_sortie_ghatas_clicked()
{
    QByteArray ba ="sortie!! ";

     A.write_to_arduino(ba);
}

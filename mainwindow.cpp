 #include "mainwindow.h"
#include "ui_mainwindow.h"
#include"employes.h"
#include <QMessageBox>
#include <QPrinter>
#include <QTextStream>
#include <QTextDocument>
#include <QDataStream>
#include<qsqlquery.h>
#include<qdebug.h>

#include<QtCharts>
#include<QChartView>
#include<QBarSet>
#include<QBarSeries>
#include"QrCode.hpp"
using namespace qrcodegen;

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
void MainWindow::on_ajouter_clicked()
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


        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("ajout n'est pas effectuer.\n"
                                "Click Cancel to exit.") ,QMessageBox::Cancel);


}

void MainWindow::on_b_modifier_clicked()
{
    int id=ui->le_id_2->text().toInt();
    QString nom=ui->le_nom_2->text();
    QString prenom=ui->le_prenom_2->text();
    QString date_naissance=ui->le_date_naissance_2->text();
    QString adresse=ui->le_adresse_2->text();
    QString grade=ui->le_grade_2->text();
     employes E(id,nom,prenom,date_naissance,adresse,grade);
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

void MainWindow::on_b_supprimer_clicked()
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

void MainWindow::on_tri_nom_clicked()
{
    ui->tab_employes->setModel(emp.trieremployes());
}

void MainWindow::on_pdf_clicked()
{
    //pdf : vous trouver le fichier dans le dossier build

        QString strStream;
                    QTextStream out(&strStream);
                    const int rowCount = ui->tab_employes->model()->rowCount();
                    const int columnCount =ui->tab_employes->model()->columnCount();


                    out <<  "<html>\n"
                            "<head>\n"
                            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                            <<  QString("<title>%1</title>\n").arg("eleve")
                            <<  "</head>\n"
                            "<body bgcolor=#CFC4E1 link=#5000A0>\n"
                                "<h1>Liste des Evenements</h1>"

                                "<table border=1 cellspacing=0 cellpadding=2>\n";

                    // headers
                        out << "<thead><tr bgcolor=#f0f0f0>";
                        for (int column = 0; column < columnCount; column++)
                            if (!ui->tab_employes->isColumnHidden(column))
                                out << QString("<th>%1</th>").arg(ui->tab_employes->model()->headerData(column, Qt::Horizontal).toString());
                        out << "</tr></thead>\n";
                        // data table
                           for (int row = 0; row < rowCount; row++) {
                               out << "<tr>";
                               for (int column = 0; column < columnCount; column++) {
                                   if (!ui->tab_employes->isColumnHidden(column)) {
                                       QString data = ui->tab_employes->model()->data(ui->tab_employes->model()->index(row, column)).toString().simplified();
                                       out << QString("<td bkcolor=0>%1</td>").arg((!data.isEmpty()) ? data : QString("&nbsp;"));
                                   }
                               }
                               out << "</tr>\n";
                           }
                           out <<  "</table>\n"
                               "</body>\n"
                               "</html>\n";



            QTextDocument *document = new QTextDocument();
            document->setHtml(strStream);


            //QTextDocument document;
            //document.setHtml(html);
            QPrinter printer(QPrinter::PrinterResolution);
            printer.setOutputFormat(QPrinter::PdfFormat);
            printer.setOutputFileName("mypdffile.pdf");
            document->print(&printer);
}


void MainWindow::on_recherche_2_clicked()
{
    ui->tab_employes->setModel(emp.recherche_employes(ui->recherche->text()));
}



void MainWindow::on_stat_clicked()
{
    employes e;
            QBarSet *set0 = new QBarSet("statistique : courbe");

            *set0 << e.statistiquesemployes("tunis") <<e.statistiquesemployes("nabeul")<<e.statistiquesemployes("sfax");


            QColor color(0x87CEEB);
            set0->setColor(color);

            QBarSeries *series = new QBarSeries();
            series->append(set0);




            QChart *chart = new QChart();
            chart->addSeries(series);
            chart->setTitle("");
            chart->setAnimationOptions(QChart::SeriesAnimations);
            chart->setBackgroundVisible(false);

            QColor bgColor(0xFa9a9a9);
                           chart->setBackgroundBrush(QBrush(QColor(bgColor)));

                           chart->setBackgroundVisible(true);

            QStringList categories;
            categories << "Tunis" << "Nabeul"<< "Sfax";
            QBarCategoryAxis *axis = new QBarCategoryAxis();
            axis->append(categories);
            chart->createDefaultAxes();
            chart->setAxisX(axis, series);

            QChartView *chartView = new QChartView(chart);

            chartView->setMinimumWidth(500);
            chartView->setMinimumHeight(300);
            chartView->setParent(ui->st);
            chart->legend()->setAlignment(Qt::AlignBottom);
            chartView->show();
}



void MainWindow::on_pushButton_clicked()
{
    employes e;
    QString mail=ui->login->text();
    QString pass=ui->password->text();
if(e.verif_login(mail,pass)!=0)  {

    ui->SW->setCurrentIndex(1);


}else{
    QMessageBox::warning(this, "login","username or password in not correct");
}
}

void MainWindow::on_stat_2_clicked()
{
    ui->SW->setCurrentIndex(0);

}

void MainWindow::on_QR_clicked()
{
    int tab_emp=ui->tab_employes->currentIndex().row(); // ligne
        QVariant idd=ui->tab_employes->model()->data(ui->tab_employes->model()->index(tab_emp,0));//selection de id et letre en variable idd
        QString id= idd.toString();
        QSqlQuery qry;
        qry.prepare("select * from ge_employes where id=:id");
        qry.bindValue(":id",id);
        qry.exec();
        QString nom,Prenom,naissance,Adresse,ids;
        while(qry.next()){
            nom=qry.value(1).toString();
            Prenom=qry.value(2).toString();
            naissance=qry.value(3).toString();
            Adresse=qry.value(4).toString();
        }
        ids=QString(id);
        ids="ID: "+ids+" Nom: "+nom+" Prenom: "+Prenom+" Date de naissance: "+naissance+" Adresse : "+Adresse;
        QrCode qr = QrCode::encodeText(ids.toUtf8().constData(), QrCode::Ecc::HIGH);//cripta chaine

        // Read the black & white pixels
        QImage im(qr.getSize(),qr.getSize(), QImage::Format_RGB888);
        for (int y = 0; y < qr.getSize(); y++) {
            for (int x = 0; x < qr.getSize(); x++) {
                int color = qr.getModule(x, y);  // 0 for white, 1 for black

                // You need to modify this part
                if(color==0)
                    im.setPixel(x, y,qRgb(254, 254, 254));
                else
                    im.setPixel(x, y,qRgb(0, 0, 0));
            }
        }
        im=im.scaled(200,200);
        ui->qrlabel->setPixmap(QPixmap::fromImage(im));

}

void MainWindow::on_supp_clicked()
{
    ui->SW->setCurrentIndex(3);
}

void MainWindow::on_logout_clicked()
{
    ui->SW->setCurrentIndex(0);
}

void MainWindow::on_return_2_clicked()
{
    ui->SW->setCurrentIndex(1);
}

void MainWindow::on_return_3_clicked()
{
    ui->SW->setCurrentIndex(1);
}

void MainWindow::on_b_modifier_2_clicked()
{
    ui->SW->setCurrentIndex(4);
}

void MainWindow::on_afficher_clicked()
{
    ui->SW->setCurrentIndex(2);
}

void MainWindow::on_return_4_clicked()
{
    ui->SW->setCurrentIndex(1);
}

void MainWindow::on_return_5_clicked()
{
    ui->SW->setCurrentIndex(1);
}

void MainWindow::on_ajouter_2_clicked()
{
    ui->SW->setCurrentIndex(5);
}

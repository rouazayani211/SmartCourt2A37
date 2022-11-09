#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"employes.h"
#include <QMessageBox>
#include <QPrinter>
#include <QTextStream>
#include <QTextDocument>
#include <QDataStream>
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



void MainWindow::on_PDF_pushButton_clicked()
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




void MainWindow::on_tri_clicked()
{

          ui->tab_employes->setModel(emp.trieremployes());
}




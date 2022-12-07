#include "avoc.h"
#include "ui_avoc.h"
#include "avocat.h"
#include <QMessageBox>
#include <QIntValidator>
#include <QMainWindow>
#include <QDebug>
#include <QDate>

avoc::avoc(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::avoc)
{
    ui->setupUi(this);
    ui->le_cin->setValidator(new QIntValidator(0, 99999999, this));
    ui->le_num->setValidator(new QIntValidator(0, 99999999, this));
    ui->le_cin_supp->setValidator(new QIntValidator(0, 99999999, this));
    ui->le_cin->setValidator(new QIntValidator(0, 99999999, this));
    ui->le_num->setValidator(new QIntValidator(0, 99999999, this));
    ui->tab_avocat->setModel(A.afficher());
}

avoc::~avoc()
{
    delete ui;
}

void avoc::on_pb_ajouter_clicked()
{
    int cin=ui->le_cin->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString date_nss=ui->la_date->text();
    QString grade=ui->le_grade->currentText();
    int num_tel=ui->le_num->text().toInt();
    QString adresse=ui->l_adresse->text();
    Avocat A(cin,nom,prenom,date_nss,grade,num_tel,adresse);
    bool test=A.ajouter();
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("ajout effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_avocat->setModel(A.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("ajout n'est pas effectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void avoc::on_pb_supprimer_clicked()
{
    Avocat A1;A1.setcin(ui->le_cin_supp->text().toInt());
    bool test=A1.supprimer(A1.getcin());
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("ok"),
                    QObject::tr("Suppression avec succes.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        ui->tab_avocat->setModel(A.afficher());

}
    else
        QMessageBox::critical(nullptr, QObject::tr("not ok"),
                    QObject::tr("Echec de suppression.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);


}

void avoc::on_pb_modifier_clicked()
{
    int cin=ui->le_cin->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    QString date_nss=ui->la_date->text();
    QString grade=ui->le_grade->currentText();
    int num_tel=ui->le_num->text().toInt();
    QString adresse=ui->l_adresse->text();




    Avocat A(cin,nom,prenom,date_nss,grade,num_tel,adresse);


    bool test=A.modifierAvocat();

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Modification avec succés.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab_avocat->setModel(A.afficher());


}
    else
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                    QObject::tr("Modification non éffectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
}

void avoc::on_pb_PDF_clicked()
{
    //pdf : vous trouver le fichier dans le dossier build

        QString strStream;
                    QTextStream out(&strStream);
                    const int rowCount = ui->tab_avocat->model()->rowCount();
                    const int columnCount =ui->tab_avocat->model()->columnCount();


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
                            if (!ui->tab_avocat->isColumnHidden(column))
                                out << QString("<th>%1</th>").arg(ui->tab_avocat->model()->headerData(column, Qt::Horizontal).toString());
                        out << "</tr></thead>\n";
                        // data table
                           for (int row = 0; row < rowCount; row++) {
                               out << "<tr>";
                               for (int column = 0; column < columnCount; column++) {
                                   if (!ui->tab_avocat->isColumnHidden(column)) {
                                       QString data = ui->tab_avocat->model()->data(ui->tab_avocat->model()->index(row, column)).toString().simplified();
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

            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("Generation PDF avec succés.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}

void avoc::on_rb_tri1_clicked()
{
        ui->tab_avocat->setModel(A.trierAvocat());
}


void avoc::on_rb_tri2_clicked()
{
        ui->tab_avocat->setModel(A.trierAvocat2());
}




void avoc::on_la_recherche_clicked()
{
    QString rech=ui->le_rech->text();
    ui->tab_avocat->setModel(A.rechercherAvocat(rech));
}

void avoc::on_pb_stat_clicked()
{
    s = new stat_combo();
        s->setWindowTitle("Statistiques Par grade");
        s->choix_pie();
        s->choix_bar();
        s->show();
}


void avoc::on_note_clicked()
{
    n= new notepad(this);
    n->show();

}



void avoc::on_cam_clicked()
{
    c= new camera();
       c->show();
}


void avoc::on_pushButton_7_clicked()
{
    hide();
}

/* void avoc::on_pushButton_8_clicked()
{
    hide();
}*/

#include "cit.h"
#include "ui_cit.h"
#include "mainwindow.h"
#include "citoyen.h"
#include "smtp.h"
#include "stat_combo.h"
#include "ui_stat_combo.h"
#include <QMessageBox>
#include<QIntValidator>

#include "QrCode.hpp"
#include <QApplication>
#include<QSound>
#include<QDebug>
#include<QMediaPlayer>
#include <QPrinter>
#include <QTextStream>
#include <QTextDocument>
#include <QDataStream>
#include <QPrintDialog>
#include <QSqlQuery>
#include<QComboBox>
#include<QSaveFile>
#include<QBuffer>
#include<QFileDialog>
#include<QFile>
#include <QMessageBox>
#include <QDebug>
#include <QIntValidator>
#include "QrCode.hpp"
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include<QDesktopServices>
#include<QUrl>
#include <QTextStream>
#include <QTextDocument>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QtWidgets>
#include<QFileDialog>
#include "exportexcelobjec.h"
#include<QGraphicsView>
#include<QPdfWriter>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QDateEdit>
#include <QComboBox>
#include"smtp.h"
#include <QPixmap>
#include <QMediaPlayer>
#include <QTabWidget>
#include <QObject>
#include <QDialog>
#include <QValidator>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QSequentialAnimationGroup>
#include <QState>
#include <QStateMachine>
#include <QSignalTransition>
#include <QPainter>
#include<QString>
#include<QStatusBar>
//#include "arduino.h"
#include <QSound>
#include<QTimer>
#include<QDateTime>
#include <QSystemTrayIcon>
#include <QApplication>
cit::cit(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::cit)
{
    ui->setupUi(this);
    ui->le_cin_c->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->le_cin_c_2->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->le_num_c->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->cin_s->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->le_num_c_2->setValidator(new QIntValidator(0, 99999999 ,this));
    ui->tab_c->setModel(Etmp.afficherCitoyen());
    player=new QMediaPlayer(this);
    connect(ui->sendBtn, SIGNAL(clicked()),this, SLOT(sendMail()));
    connect(ui->browseBtn, SIGNAL(clicked()), this, SLOT(browse()));
}

cit::~cit()
{
    delete ui;
}

void cit::on_pushButton_ajouter_clicked()
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
    QString email_c=ui->lemail_c->text();
    QString etat_c=ui->etat_c->currentText();

    Citoyen C (nom_c,prenom_c,nationalite_c,cin_c,date_c,adresse_c,num_c,email_c,etat_c);

    bool test=C.ajouterCitoyen();

    if(test)
    {
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
           notifyIcon->show();
           notifyIcon->showMessage("ALERTE NOTIF","un element ajoutée ",QSystemTrayIcon::Information,15000);


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
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

       notifyIcon->show();
       notifyIcon->showMessage("ALERTE NOTIF"," ECHEC ",QSystemTrayIcon::Critical,15000);




}

void cit::on_pushButton_modifier_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/Click.mp3"));
      player->play();
    int cin_c=ui->le_cin_c_2->text().toInt();
    QString nom_c=ui->le_nom_c_2->text();
    QString prenom_c=ui->le_prenom_c_2->text();
    QString nationalite_c=ui->la_nationalite_c_2->text();
    QDate date_c=ui->la_date_c_2->date();
    QString adresse_c=ui->adresse_c_2->text();
    int num_c=ui->le_num_c_2->text().toInt();
    QString email_c=ui->lemail_c_2->text();
    QString etat_c=ui->etat_c_2->currentText();

    Citoyen C (nom_c,prenom_c,nationalite_c,cin_c,date_c,adresse_c,num_c,email_c,etat_c);


    bool test=C.modifierCitoyen();

    if(test)
    { QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->show();
        notifyIcon->showMessage("ALERTE NOTIF","un element modifiee ",QSystemTrayIcon::Information,15000);

        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Modification avec succés.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab_c->setModel(C.afficherCitoyen());


}
    else{
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                    QObject::tr("Modification non éffectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

       notifyIcon->show();
       notifyIcon->showMessage("ALERTE NOTIF"," ECHEC ",QSystemTrayIcon::Critical,15000);}
}


void cit::on_pushButton_supprimer_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/Click.mp3"));
      player->play();
    int cin_c=ui->cin_s->text().toInt();


    bool test=Etmp.supprimerCitoyen(cin_c);

    if(test)
    { QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->show();
        notifyIcon->showMessage("ALERTE NOTIF","un element supprimé ",QSystemTrayIcon::Information,15000);
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Supression avec succés.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
    ui->tab_c->setModel(Etmp.afficherCitoyen());//mise a jour
}
    else{
        QMessageBox::critical(nullptr, QObject::tr("Not Ok"),
                    QObject::tr("Suppression non éffectué.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);
        QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;

           notifyIcon->show();
           notifyIcon->showMessage("ALERTE NOTIF"," ECHEC ",QSystemTrayIcon::Critical,15000);

    }

}
void cit::on_tri1_radioButton_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/success.mp3"));
      player->play();
          ui->tab_c->setModel(Etmp.trierCitoyen());

}


void cit::on_tri2_radioButton_clicked()
{
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/success.mp3"));
      player->play();
          ui->tab_c->setModel(Etmp.trierCitoyen2());}

void cit::on_pdf_pushButton_clicked()

{ QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
    notifyIcon->show();
    notifyIcon->showMessage("ALERTE NOTIF","exportation avec succes ",QSystemTrayIcon::Information,15000);
    player->setMedia(QUrl::fromLocalFile("C:/Users/Mariem/Downloads/Click.mp3"));
      player->play();
    //pdf : vous trouver le fichier dans le dossier build

        QString strStream;
                    QTextStream out(&strStream);
                    const int rowCount = ui->tab_c->model()->rowCount();
                    const int columnCount =ui->tab_c->model()->columnCount();


                    out <<  "<html>\n"
                            "<head>\n"
                            "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                            <<  QString("<title>%1</title>\n").arg("citoyen")
                            <<  "</head>\n"
                            "<body bgcolor=#CFC4E1 link=#5000A0>\n"
                                "<h1>Liste des Citoyens</h1>"

                                "<table border=1 cellspacing=0 cellpadding=2>\n";

                    // headers
                        out << "<thead><tr bgcolor=#f0f0f0>";
                        for (int column = 0; column < columnCount; column++)
                            if (!ui->tab_c->isColumnHidden(column))
                                out << QString("<th>%1</th>").arg(ui->tab_c->model()->headerData(column, Qt::Horizontal).toString());
                        out << "</tr></thead>\n";
                        // data table
                           for (int row = 0; row < rowCount; row++) {
                               out << "<tr>";
                               for (int column = 0; column < columnCount; column++) {
                                   if (!ui->tab_c->isColumnHidden(column)) {
                                       QString data = ui->tab_c->model()->data(ui->tab_c->model()->index(row, column)).toString().simplified();
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
            printer.setOutputFileName("Citoyens.pdf");
            document->print(&printer);

            QMessageBox::information(nullptr, QObject::tr("OK"),
                        QObject::tr("Fichier PDF ajouté au dossier Build.\n"
                                    "Click Cancel to exit."), QMessageBox::Cancel);
}
    void cit::on_pushButton_chercher_clicked()
    {
        QString cin=ui->cin_chercher->text();
        ui->tab_c->setModel(Etmp.chercherCitoyen_par_cin(cin));

    }

void cit::on_pushButton_stat_clicked()
{
    s = new stat_combo();
    s->setWindowTitle("Statistiques Par Etat");
    s->choix_pie();
    s->choix_bar();
    s->show();


}


/*
void cit::on_qrcode_pushButton_clicked()

{
    int tabeq=ui->tab_c->currentIndex().row();
               QVariant idd=ui->tab_c->model()->data(ui->tab_c->model()->index(tabeq,0));
               QString cinn= idd.toString();
               QSqlQuery qry;
               qry.prepare("select * from CITOYEN where cin_c=:cin_c");
               qry.bindValue(":cin_c",cinn);
               qry.exec();
                  QString  nom_c,prenom_c,nationalite_c,cin_c,date_c,adresse_c,num_c,email_c,etat_c;

               while(qry.next()){

                   nom_c=qry.value(0).toString();
                   prenom_c=qry.value(1).toString();
                   nationalite_c=qry.value(2).toString();
                   cin_c=qry.value(4).toString();
                   date_c=qry.value(6).toString();
                   adresse_c=qry.value(7).toString();
                   num_c=qry.value(8).toString();
                   etat_c=qry.value(9).toString();



               }
               cin_c=QString(cin_c);
               cin_c="NOM_C:"+nom_c+  "PRENOM_C:"+prenom_c+
                       "NATIONALITE_C:"+nationalite_c+
                       "CIN_C:"+cin_c+  " DATE_C:"  +date_c+
                       "ADRESSE_C:"+adresse_c+  "NUM_C:"+num_c+
                       "EMAIL_C:"+email_c+  "ETAT_c:"+etat_c;
               QrCode qr = QrCode::encodeText(cin_c.toUtf8().constData(), QrCode::Ecc::HIGH);

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
               im=im.scaled(300,300);
               ui->qrcodeoutput->setPixmap(QPixmap::fromImage(im));
               //QString path = idpr+".jpeg";
                    //QString imagePath(QStringLiteral("path/image.jpeg"));
                       QByteArray ba;
                       QBuffer buffer(&ba);
                       buffer.open(QIODevice::WriteOnly);
                       im.save(&buffer, "PNG"); // writes image into ba in PNG format
                       QSaveFile file("C:/Users/DELL/Desktop/Qt/qt/QrCode/"+cin_c+".png");
                       file.open(QIODevice::WriteOnly);
                       file.write(ba);
                       // Calling commit() is mandatory, otherwise nothing will be written.
                       file.commit();
                       // Now save the directory into a QString and then into the database
                       QString directory = "C:/Users/DELL/Desktop/Qt/qt/QrCode/"+cin_c+".png";
                       Citoyen P;
                       bool qrqr = P.UpdateQrcodeLink(directory, cin_c);
                       if (qrqr) {
                           QMessageBox::information(nullptr, QObject::tr("Qr code link succesfully added to the database"),
                                                    QObject::tr("Qr code effectué\n"
                                                                "Click cancel to exit."), QMessageBox::Cancel);
                           ui->tab_c->setModel(Etmp.afficherCitoyen());
                       } else
                       {
                       QMessageBox::information(nullptr, QObject::tr("Error"),QObject::tr("failed"));
                       }
}

*//*
void  cit::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   cit::sendMail()
{
    Smtp* smtp = new Smtp("marwa.mannai@esprit.tn",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("marwamannai987@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("marwamannai987@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   cit::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}

void cit::on_sendBtn_clicked()
{
    {
        Smtp* smtp = new Smtp("marwamannai987@gmail.com",ui->mail_pass->text(), "smtp.gmail.com");
        connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

        if( !files.isEmpty() )
            smtp->sendMail("marwamannai987@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
        else
            smtp->sendMail("marwamannai987@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
    }
}*/
//rnsjutxnkbqyshcm



void  cit::browse()
{
    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );

    ui->file->setText( fileListString );

}
void   cit::sendMail()
{
    Smtp* smtp = new Smtp("marwamannai987@gmail.com",ui->mail_pass->text(), "smtp.gmail.com");
    connect(smtp, SIGNAL(status(QString)), this, SLOT(mailSent(QString)));

    if( !files.isEmpty() )
        smtp->sendMail("marwamannai987@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText(), files );
    else
        smtp->sendMail("marwamannai987@gmail.com", ui->rcpt->text() , ui->subject->text(),ui->msg->toPlainText());
}
void   cit::mailSent(QString status)
{

    if(status == "Message sent")
        QMessageBox::warning( nullptr, tr( "Qt Simple SMTP client" ), tr( "Message sent!\n\n" ) );
    ui->rcpt->clear();
    ui->subject->clear();
    ui->file->clear();
    ui->msg->clear();
    ui->mail_pass->clear();
}
void cit::on_browseBtn_clicked()
{

    files.clear();

    QFileDialog dialog(this);
    dialog.setDirectory(QDir::homePath());
    dialog.setFileMode(QFileDialog::ExistingFiles);

    if (dialog.exec())
        files = dialog.selectedFiles();

    QString fileListString;
    foreach(QString file, files)
        fileListString.append( "\"" + QFileInfo(file).fileName() + "\" " );




}

/*
void cit::on_qrcodegen_2_clicked()
{

    int tab_emp=ui->tab_c->currentIndex().row(); // ligne
            QVariant idd=ui->tab_c->model()->data(ui->tab_c->model()->index(tab_emp,0));//selection de id et letre en variable idd
            QString cin_c= idd.toString();
            QSqlQuery qry;
            qry.prepare("select * from Citoyen where cin_c=:cin_c");
            qry.bindValue(":icin_c",cin_c);
            qry.exec();
            QString nom_c,prenom_c,nationalite_c,adresse_c ,email_c ,etat_c ,  ids;

            while(qry.next()){
                nom_c=qry.value(1).toString();
                prenom_c=qry.value(2).toString();
                nationalite_c=qry.value(3).toString();
                adresse_c=qry.value(4).toString();
                email_c=qry.value(5).toString();
                etat_c=qry.value(6).toString();
            }
            ids=QString(cin_c);

            qrcode qr = qrcode::encodeText(ids.toUtf8().constData(), qrcode::Ecc::HIGH);//cripta chaine
            ids="cin_c: "+ids+" nom_c: "+nom_c+" prenom_c: "+prenom_c+" nationalite_c: "+nationalite_c+" adresse_c : "+adresse_c+ " email_c : "+email_c+ " etat_c : "+etat_c;

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
            ui->qrcodecommande_2->setPixmap(QPixmap::fromImage(im));

}*/

void cit::on_export_excel_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Excel file"), qApp->applicationDirPath (),
                                                    tr("Excel Files (*.xls)"));
    if (fileName.isEmpty())
        return;

    ExportExcelObject obj(fileName, "mydata", ui->tab_c);

    //colums to export
    obj.addField(0, "entier", "char(20)");
    obj.addField(1, "reel", "char(20)");
    obj.addField(2, "combobox", "char(20)");
    obj.addField(3, "lineedit", "char(20)");
    obj.addField(4, "textedit", "char(20)");
    obj.addField(5, "dateedit", "char(20)");
    obj.addField(5, "timeedit", "char(20)");


    int retVal = obj.export2Excel();
    if( retVal > 0)
    {  QSystemTrayIcon *notifyIcon = new QSystemTrayIcon;
        notifyIcon->show();
        notifyIcon->showMessage("ALERTE NOTIF"," exportation excel avec succes ",QSystemTrayIcon::Information,15000);
        QMessageBox::information(this, tr("Done"),
                                 QString(tr("%1 records exported!")).arg(retVal)//fichier enregistré dans dossier debug(build)
                                 );
    }
}



void cit::on_sendBtn_clicked()
{

}

void cit::on_pushButton_7_clicked()
{
    hide();
}


void cit::on_pushButton_9_clicked()
{
    hide();
}

void cit::on_pushButton_10_clicked()
{
    hide();
}

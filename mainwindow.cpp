#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include"affaire.h"
#include<QString>
#include <QIntValidator>
#include <QtPrintSupport/QPrinter>
#include <QtPrintSupport/QAbstractPrintDialog>
#include<QDirModel>
#include <QtPrintSupport/QPrintDialog>
#include<QPdfWriter>
#include<QDesktopServices>
#include <QPainter>
#include<QUrl>
#include<iostream>
#include<QtCharts>
#include<QPrinter>
#include "arduino.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
  {
    ui->setupUi(this);
     ui->le_num_proces_2->setValidator(new QIntValidator(0, 9999999, this));
     {


                     ui->tri_par_2->addItem("nom juge" );
                     ui->tri_par_2->addItem("nom avocat" );
                     ui->tri_par_2->addItem("numéro du Procès" );

                     int ret=A.connect_arduino(); // lancer la connexion à arduino
                                  switch(ret){
                                  case(0):qDebug()<< "arduino is available and connected to : "<< A.getarduino_port_name();
                                      break;
                                  case(1):qDebug() << "arduino is available but not connected to :" <<A.getarduino_port_name();
                                     break;
                                  case(-1):qDebug() << "arduino is not available";
                                  }
                                   QObject::connect(A.getserial(),SIGNAL(readyRead()),this,SLOT(on_update_clicked())); // permet de lancer
                                   //le slot update_label suite à la reception du signal readyRead (reception des données).
}}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::readfile(){
    QString filename="C:/Users/HP/Desktop/gestion des affaires/hist/historique.txt";  // bech thot l path
    QFile file(filename);
    if(!file.exists()){
        qDebug() << " not existed ! "<<filename;
    }else{
        qDebug() << filename<<" existed ";
    }
    QString line;// vriable
    ui->textHisto->clear(); //bech tfassakh le9dim
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)){
        QTextStream stream(&file);
        while (!stream.atEnd()){
            line = stream.readLine();
            ui->textHisto->setText(ui->textHisto->toPlainText()+line+"\n");
        }
    }
    file.close();
}





void MainWindow::on_ajouter_pushButton_clicked()
{


    int num_proces=ui->le_num_proces_2->text().toInt();
    QString date_proces=ui->la_date_proces_2->text();
    QString type_proces=ui->le_type_proces_2->text();
    QString nom_avocat=ui->le_nom_avocat_2->text();
    QString nom_juge=ui->le_nom_juge_2->text();
    QString description=ui->la_description_2->text();
    QString etat=ui->le_etat_2->text();



  affaires r(num_proces,date_proces,type_proces,nom_avocat,nom_juge,description,etat);

  bool test=r.ajouter();
  if(test)
{
      foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                                     le->clear();}
                                QFile file("C:/Users/HP/Desktop/gestion des affaires/hist/historique.txt");
                                if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                                    return;
                                QTextStream cout(&file);
                                QString d_info = QDateTime::currentDateTime().toString();
                                QString message2=" + "+d_info+" Un proces a été ajouté sous le num de proces : "+num_proces+"  \n";
                                cout << message2;
QMessageBox::information(nullptr, QObject::tr("OK"),
                  QObject::tr("procés ajoutée.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);


  }



  else{
      QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                  QObject::tr("Erreur !.\n"
                              "Click Cancel to exit."), QMessageBox::Cancel);}
}





void MainWindow::on_suprimer_pushButton_clicked()
{


    int num_proces = ui->num_proces_supp->text().toInt();
    bool test=aff.supprimer(num_proces);
    if(test)
{
        foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                             le->clear();}
                        QFile file("C:/Users/HP/Desktop/gestion des affaires/hist/historique.txt");
                        if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                            return;
        QMessageBox::information(nullptr, QObject::tr("Supprimer un procés"),
                    QObject::tr("procés supprimé.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

    }
    else{
        QMessageBox::critical(nullptr, QObject::tr("Supprimer un procés"),
                    QObject::tr("Erreur !.\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);}
}

void MainWindow::on_afficher_pushButton_clicked()

    {
         affaires c;
        ui->tableView->setModel(c.afficher());
        //afficher selon le nom de juge
        if(QString::number(ui->tri_par_2->currentIndex())=="0"){
         ui->tableView->setModel(c.afficher_affaires_trie_nom_juge());
        }
        //afficher selon le nom d'avocat
        else if(QString::number(ui->tri_par_2->currentIndex())=="1"){
            ui->tableView->setModel(c.afficher_affaires_trie_nom_avocat());
        }
        //afficher selon le numéro du proces
        else if(QString::number(ui->tri_par_2->currentIndex())=="2"){
            ui->tableView->setModel(c.afficher_affaires_trie_num_proces());

    }
}


void MainWindow::on_modiffier_pushButton_clicked()
{


    int num_proces = ui->le_num_proces_2->text().toInt();
    QString date_proces= ui->la_date_proces_2->text();
    QString type_proces= ui->le_type_proces_2->text();
    QString nom_avocat= ui->le_nom_avocat_2->text();
   QString nom_juge = ui->le_nom_juge_2->text();
    QString description = ui->la_description_2->text();
    QString etat = ui->le_etat_2->text();






            affaires r;
            bool test=r.modifier(num_proces,date_proces,type_proces,nom_avocat,nom_juge,description,etat);

            if(test)
            {
                foreach(QLineEdit* le, findChildren<QLineEdit*>()) {
                                     le->clear();}
                                QFile file("C:/Users/HP/Desktop/gestion des affaires/hist/historique.txt");
                                if(!file.open(QIODevice::WriteOnly | QIODevice::Append | QIODevice::Text))
                                    return;
                QTextStream cout(&file);
                                QString d_info = QDateTime::currentDateTime().toString();
                                QString message2=" ~ "+d_info+" Un proces a été modifié sous le num de proces : "+num_proces+" \n";
                                cout << message2;
                ui->tableView->setModel(r.afficher());//refresh

                QMessageBox::information(nullptr, QObject::tr("modifie un procés "),
                                  QObject::tr("procés modifiée.\n"
                                              "Click Cancel to exit."), QMessageBox::Cancel);
            }
            else{
                QMessageBox::critical(nullptr, QObject::tr("non modifie"),
                            QObject::tr("Erreur !.\n"
                                        "Click Cancel to exit."), QMessageBox::Cancel);}
}







void MainWindow::on_chercher_pushButton_clicked()
{
    affaires c;
QString rech =ui->lineEdit_chercher->text();
ui->tableView->setModel(c.chercher_affaires(rech));
}

void MainWindow::on_pdf_pushButton_clicked()
{
    QString strStream;
                      QTextStream out(&strStream);
                      const int rowCount = ui->tableView->model()->rowCount();
                      const int columnCount =ui->tableView->model()->columnCount();


                      out <<  "<html>\n"
                              "<head>\n"
                              "<meta Content=\"Text/html; charset=Windows-1251\">\n"
                              <<  QString("<title>%1</title>\n").arg("voyageur")
                              <<  "</head>\n"
                              "<body bgcolor=#CFC4E1 link=#5000A0>\n"
                                  "<h1>Liste des affaire</h1>"

                                  "<table border=1 cellspacing=0 cellpadding=2>\n";

                      // headers
                          out << "<thead><tr bgcolor=#f0f0f0>";
                          for (int column = 0; column < columnCount; column++)
                              if (!ui->tableView->isColumnHidden(column))
                                  out << QString("<th>%1</th>").arg(ui->tableView->model()->headerData(column, Qt::Horizontal).toString());
                          out << "</tr></thead>\n";
                          // data table
                             for (int row = 0; row < rowCount; row++) {
                                 out << "<tr>";
                                 for (int column = 0; column < columnCount; column++) {
                                     if (!ui->tableView->isColumnHidden(column)) {
                                         QString data = ui->tableView->model()->data(ui->tableView->model()->index(row, column)).toString().simplified();
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
              printer.setOutputFileName("mypdffile1.pdf");
              document->print(&printer);
}







void MainWindow::on_calendarWidget_clicked(const QDate &date)

{

    this->select_date = date.toString("yyyy-MM-dd");

    this->selected_day_json = this->json[date.toString("yyyy-MM-dd")].toArray();

    if (selected_day_json.size()) {

       // ui->comboBox->clear();

        for (int i = 0; i < selected_day_json.size(); i++) {

            auto context_name =

                selected_day_json[i].toObject()["context_name"].toString();

          //  ui->comboBox->addItem(context_name);

        }

    } else {



        ui->lineEdit_num->setText("1");

        auto format = ui->calendarWidget->dateTextFormat(

            ui->calendarWidget->selectedDate());

        format.setBackground(QColor("#FFFFFF"));

        ui->calendarWidget->setDateTextFormat(

            ui->calendarWidget->selectedDate(), format);

    }

}







void MainWindow::on_pushButton_add_clicked_clicked()
{

    {

        bool ok;

        QString text = QInputDialog::getText(

            this, tr("Evenement d'entré"), tr("Veuillez entrer le nom de l'événement"), QLineEdit::Normal, 0, &ok);

        if (!ok || text.isEmpty()) return;



        auto date = ui->calendarWidget->selectedDate();



        QString event_title = text;

        QString event_start = "";

        QString event_end = "";

        QString event_local = "";

        QString _method = "POST";

        date = date.addDays(-1);

        event_start = event_end = date.toString("yyyy-MM-ddT16%3A00%3A00Z");



        QByteArray byte;

        byte.append("calendar_event%5Btitle%5D=" + event_title.toUtf8());

        byte.append("&calendar_event%5Bstart_at%5D=" + event_start.toUtf8());

        byte.append("&calendar_event%5Bend_at%5D=" + event_end.toUtf8());

        byte.append("&calendar_event%5Blocation_name%5D=" + event_local.toUtf8());

     //   byte.append("&calendar_event%5Bcontext_code%5D=user_" + user);

        byte.append("&_method=POST");

       // byte.append("&authenticity_token=" + token);

        QString url = "http://canvas.tongji.edu.cn/api/v1/calendar_events";

        //auto re = post(url, byte, "application/x-www-form-urlencoded");



       /* auto document = QJsonDocument::fromJson(re);

        auto object = document.object();

        auto value = object.value("id");

        auto plid = value.toInt();*/



        QJsonObject temp;

        temp.insert("context_name", QString(name));

        temp.insert("context_type", "User");

        QString d = date.toString("yyyy-MM-dd");

        d = d + "T16:00:00Z";

        temp.insert("plannable_date", d);

        QJsonObject pl;

        pl.insert("title", text);

        temp.insert("plannable", QJsonValue(pl));

       // temp.insert("plannable_id", plid);

       /* QJsonValueRef ref = this->json.find(this->select_date).value();

        QJsonArray arr = ref.toArray();

        arr.append(temp);

        ref = arr;*/



        auto format =

            ui->calendarWidget->dateTextFormat(ui->calendarWidget->selectedDate());

        format.setBackground(QColor("#00FFFF"));

        ui->calendarWidget->setDateTextFormat(ui->calendarWidget->selectedDate(),

                                              format);



      //  on_calendarWidget_clicked(ui->calendarWidget->selectedDate());

    }

}




void MainWindow::on_stat_pushButton_clicked()


    {
        affaires aff;
        QBarSet *set0 = new QBarSet("statistique : courbe");

        *set0 << aff.statistiquesaffaire("classifier") <<aff.statistiquesaffaire("non classifier");


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
        categories << "Classifier" << "Non classifier";
        QBarCategoryAxis *axis = new QBarCategoryAxis();
        axis->append(categories);
        chart->createDefaultAxes();
        chart->setAxisX(axis, series);

        QChartView *chartView = new QChartView(chart);

        chartView->setMinimumWidth(500);
        chartView->setMinimumHeight(300);
        chartView->setParent(ui->frame);
        chart->legend()->setAlignment(Qt::AlignBottom);
        chartView->show();


}
void MainWindow::on_tabWidget_currentChanged(int index)
{
    readfile();
}



void MainWindow::on_update_clicked()
{
    ID=A.read_from_arduino();

               bool test=V.ajouter_etat( ID);
               if(test==true)
              {
                     ui->tab_pointage->setModel(V.afficher_pointage());
                 //QMessageBox::information(nullptr, QObject::tr("ok"),
                 //QObject::tr("door is opened.\n"
                             //"Click Cancel to exit."), QMessageBox::Cancel);

              }

                  { ui->tab_pointage->setModel(V.afficher_pointage());

                //QMessageBox::critical(nullptr, QObject::tr("not ok"),
              //  QObject::tr("door is closed.\n"
                         //   "Click Cancel to exit."), QMessageBox::Cancel);


           }
}

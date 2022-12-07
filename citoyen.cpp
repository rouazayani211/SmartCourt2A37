#include "citoyen.h"
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QtDebug>
#include<QObject>
#include<QString>
#include<QDate>
#include<QComboBox>

//initialiser constructeur par défaut
Citoyen::Citoyen()
{
     nom_c="";
     prenom_c="";
     nationalite_c="";
     cin_c=0;
     date_c=QDate(2000,01,01);
     adresse_c="";
     num_c=0;
     email_c="";
     etat_c="";


}

Citoyen::Citoyen(QString nom_c,QString prenom_c,QString nationalite_c,int cin_c,QDate date_c,QString adresse_c,int num_c,QString email_c ,QString etat_c)
{
//affecter les nouvelles valeurs
this-> nom_c= nom_c;
this-> prenom_c= prenom_c;
this-> nationalite_c= nationalite_c;
this->cin_c=cin_c;
this->date_c=date_c;
this-> adresse_c= adresse_c;
this-> num_c= num_c;
this-> email_c= email_c;
this-> etat_c= etat_c;



}

QString Citoyen::getnom_c(){return  nom_c;}
QString Citoyen::getprenom_c(){return  prenom_c;}
QString Citoyen::getnationalite_c(){return  nationalite_c;}
int Citoyen::getcin_c(){return cin_c;}
QDate Citoyen::getdate_c(){ return date_c;}
QString Citoyen::getadresse_c(){return adresse_c;}
int Citoyen::getnum_c(){return num_c;}
QString Citoyen::getemail_c(){return  email_c;}
QString Citoyen::getetat_c(){return  etat_c;}



void Citoyen::setnom_c(QString  nom_c ){this-> nom_c= nom_c;}
void Citoyen::setprenom_c(QString prenom_c){this->prenom_c=prenom_c;}
void Citoyen::setnationalite_c(QString  nationalite_c ){this-> nationalite_c= nationalite_c;}
void Citoyen::setcin_c(int cin_c){this->cin_c=cin_c;}
void Citoyen::setdate_c(QDate date_c){ this->date_c=date_c;}
void Citoyen::setadresse_c(QString adresse_c){this->adresse_c=adresse_c;}
void Citoyen::setnum_c(int  num_c){this-> num_c= num_c;}
void Citoyen::setemail_c(QString  email_c ){this-> email_c= email_c;}
void Citoyen::setetat_c(QString  etat_c ){this-> etat_c= etat_c;}




bool Citoyen::ajouterCitoyen()
{

     QSqlQuery query;
     QString cin_c_string=QString::number(cin_c);//convertir un valeur int to string
      QString  num_c_string=QString::number( num_c);
           query.prepare("INSERT INTO Citoyen ( nom_c, prenom_c, nationalite_c,cin_c,date_c,adresse_c, num_c,email_c,etat_c) "
                         "VALUES (:nom_c, :prenom_c,:nationalite_c,:cin_c, :date_c, :adresse_c,:num_c,:email_c,:etat_c)");

           query.bindValue(":nom_c",  nom_c); //correspondace entre le nom de la variable "nom" et sa valeur
           query.bindValue(":prenom_c", prenom_c);
           query.bindValue(":nationalite_c", nationalite_c);
           query.bindValue(":cin_c", cin_c_string);
           query.bindValue(":date_c",date_c);
           query.bindValue(":adresse_c", adresse_c);
           query.bindValue(":num_c",  num_c_string);
           query.bindValue(":email_c",  email_c);
           query.bindValue(":etat_c",  etat_c);


         return  query.exec();//retourne soit true soit false

 }


 bool Citoyen::supprimerCitoyen(int cin_c)
 {
     QSqlQuery query;
     QString cin_c_string=QString::number(cin_c);
           query.prepare("DELETE from Citoyen where cin_c=:cin_c");
           query.bindValue(0, cin_c);

         return  query.exec();


 }

QSqlQueryModel*Citoyen::afficherCitoyen()
{
    QSqlQueryModel*model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM Citoyen");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr(" NOM")); //donner nom au colonne
      model->setHeaderData(1, Qt::Horizontal, QObject::tr(" PRENOM"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("NATIONALITE "));;
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE "));;
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE "));
           model->setHeaderData(6, Qt::Horizontal, QObject::tr("NUMERO"));;
            model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));;
             model->setHeaderData(8, Qt::Horizontal, QObject::tr("ETAT"));;


           return model;
}
bool Citoyen::modifierCitoyen( )
{
    QSqlQuery query;
    query.prepare("UPDATE Citoyen set nom_c=:nom_c,prenom_c=:prenom_c,nationalite_c=:nationalite_c,cin_c=:cin_c,date_c=:date_c,adresse_c=:adresse_c,num_c=:num_c,email_c=:email_c,etat_c=:etat_c WHERE cin_c=:cin_c");

    query.bindValue(":nom_c",nom_c);
    query.bindValue(":prenom_c",prenom_c);
    query.bindValue(":nationalite_c",nationalite_c);
    query.bindValue(":cin_c",cin_c);
    query.bindValue(":date_c",date_c);
    query.bindValue(":adresse_c",adresse_c);
    query.bindValue(":num_c",num_c);
    query.bindValue(":email_c",email_c);
    query.bindValue(":etat_c",etat_c);


    return (query.exec());}

QSqlQueryModel* Citoyen:: trierCitoyen()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from Citoyen order by nom_c ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr(" NOM")); //donner nom au colonne
      model->setHeaderData(1, Qt::Horizontal, QObject::tr(" PRENOM"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("NATIONALITE "));;
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE "));;
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE "));
           model->setHeaderData(6, Qt::Horizontal, QObject::tr("NUMERO"));;
           model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));;
            model->setHeaderData(8, Qt::Horizontal, QObject::tr("ETAT"));;

    return model;
}

QSqlQueryModel* Citoyen:: trierCitoyen2()
{

    QSqlQueryModel * model=new QSqlQueryModel();

    model->setQuery("select * from Citoyen order by prenom_c ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr(" NOM")); //donner nom au colonne
      model->setHeaderData(1, Qt::Horizontal, QObject::tr(" PRENOM"));
       model->setHeaderData(2, Qt::Horizontal, QObject::tr("NATIONALITE "));;
        model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE "));;
          model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE "));
           model->setHeaderData(6, Qt::Horizontal, QObject::tr("NUMERO"));;
           model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));;
            model->setHeaderData(8, Qt::Horizontal, QObject::tr("ETAT"));;


    return model;
}
Citoyen Citoyen::chercher_cin(int cin_c)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM CITOYEN WHERE cin_c=:cin_c");
    query.bindValue(":cin_c",cin_c);//correspendance entre variable cin et sa valeur
    query.exec();
    Citoyen ci;
    while(query.next()){

        ci.setnom_c(query.value(1).toString());
        ci.setprenom_c(query.value(1).toString());
        ci.setnationalite_c(query.value(1).toString());
        ci.setcin_c(query.value(0).toInt());
        ci.setdate_c(query.value(3).toDate());
        ci.setadresse_c(query.value(1).toString());
        ci.setnum_c(query.value(0).toInt());
        ci.setemail_c(query.value(1).toString());
        ci.setetat_c(query.value(1).toString());

    }

    return ci;
}


QSqlQueryModel *Citoyen::chercherCitoyen_par_cin(QString cin)
 {

    {
        QSqlQueryModel *model = new QSqlQueryModel;

        model->setQuery("SELECT * FROM Citoyen WHERE cin_c like '"+cin+"%' ");//query est une requete de recherche

        model->setHeaderData(0, Qt::Horizontal, QObject::tr(" NOM")); //donner nom au colonne et affichage
          model->setHeaderData(1, Qt::Horizontal, QObject::tr(" PRENOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("NATIONALITE "));;
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("CIN"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE DE NAISSANCE "));;
              model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE "));
               model->setHeaderData(6, Qt::Horizontal, QObject::tr("NUMERO"));;
               model->setHeaderData(7, Qt::Horizontal, QObject::tr("EMAIL"));;
                model->setHeaderData(8, Qt::Horizontal, QObject::tr("ETAT"));;
        return model ;
    }
}
/*
bool Citoyen::UpdateQrcodeLink(QString qr, QString cin_c) {
    QSqlQuery query;
    query.prepare("UPDATE CITOYEN SET QR_CODE= :qrc where cin_c=:cin_c");
    query.bindValue(":qrc", qr);
    query.bindValue(":cin_c", cin_c);
    return query.exec();
}
QSqlQuery Citoyen::NbCitoyen() {
    QSqlQuery query;
     query.exec("SELECT COUNT(*) FROM CITOYEN");
     return query;
}
QSqlQuery Citoyen::NbCitoyen1000() {
    QSqlQuery query;
     query.exec("SELECT COUNT(*) FROM CITOYEN where prix > 1000");
     return query;
}


int Citoyen::calculEtat(QString etat_c)
{
    QSqlQuery query;
    query.prepare("select count(*) from CITOYEN where etat_c=:Accuse and etat_c=:Temoin and etat_c=:Membre de public ");
    query.bindValue(":etat_c",etat_c);
    query.exec();

    int count =-1;

            while(query.next())
                    {
                        count = query.value(0).toInt() ;
                        //qDebug() << "count=" << count ;
                        return count;

                    }

    return count;

}
*/

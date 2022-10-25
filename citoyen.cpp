#include "citoyen.h"
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QtDebug>
#include<QObject>
#include<QString>
#include<QStringList>
#include<QDate>


Citoyen::Citoyen()
{
     cin=0;
     nom="";
     prenom="";
     adresse="";
     num=0;
     date=QDate(2000,01,01);
     nationalite="";
}

Citoyen::Citoyen(int cin,QString nom,QString prenom,QString adresse,int num,QDate date,QString nationalite)
{
this->cin=cin;
this-> nom= nom;
this-> prenom= prenom;
this-> adresse= adresse;
this-> num= num;
this->date=date;
this-> nationalite= nationalite;

}

int Citoyen::getcin(){return cin;}
QString Citoyen::getnom(){return  nom;}
QString Citoyen::getprenom(){return  prenom;}
QString Citoyen::getadresse(){return adresse;}
int Citoyen::getnum(){return num;}
QDate Citoyen::getdate(){ return date;}
QString Citoyen::getnationalite(){return  nationalite;}



void Citoyen::setcin(int cin){this->cin=cin;}
void Citoyen::setnom(QString  nom ){this-> nom= nom;}
void Citoyen::setprenom(QString prenom){this->prenom=prenom;}
void Citoyen::setadresse(QString adresse){this->adresse=adresse;}
void Citoyen::setnum(int  num){this-> num= num;}
void Citoyen::setdate(QDate date){ this->date=date;}
void Citoyen::setnationalite(QString  nationalite ){this-> nationalite= nationalite;}



bool Citoyen::ajouterCitoyen()
{

     QSqlQuery query;
     QString cin_string=QString::number(cin);
      QString  num_string=QString::number( num);
           query.prepare("INSERT INTO Citoyen (cin, nom, prenom,adresse, num, date_naissance,nationalite) "
                         "VALUES (:cin, :nom, :prenom, :adresse,:num,:date_naissance,:nationalite)");
           query.bindValue(":cin", cin_string);
           query.bindValue(":nom",  nom);
           query.bindValue(":prenom", prenom);
           query.bindValue(":adresse", adresse);
           query.bindValue(":num",  num_string);
           query.bindValue(":date_naissance",date);
           query.bindValue(":nationalite", nationalite);

         return  query.exec();

 }


 bool Citoyen::supprimerCitoyen(int cin)
 {
     QSqlQuery query;
     QString cin_string=QString::number(cin);
     QString  num_string=QString::number( num);
           query.prepare("DELETE from Citoyen where cin=:cin");
           query.bindValue(0, cin);

         return  query.exec();


 }

QSqlQueryModel*Citoyen::afficherCitoyen()
{
    QSqlQueryModel*model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM Citoyen");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("cin Citoyen"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom Citoyen"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom Citoyen"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse Citoyen "));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("numero tel Citoyen"));;
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("date de naissance Citoyen"));;
          model->setHeaderData(6, Qt::Horizontal, QObject::tr("nationalite Citoyen"));;
           return model;
}
bool Citoyen::modifierCitoyen(int cin, QString nom, QString prenom, QString adresse, int num , QDate date , QString nationalite)
{
    QSqlQuery query;
    query.prepare("UPDATE Citoyen set cin=:cin,nom=:nom,prenom=:prenom,adresse=:adresse,num=:num,date:=date,nationalite:=nationalite WHERE cin=:cin");
    query.bindValue(":cin",cin);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":num",num);
    query.bindValue(":date",date);
    query.bindValue(":nationalite",nationalite);

    return (query.exec());}

#include "citoyen.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QObject>
#include<QString>

#include<QStringList>
Citoyen::Citoyen()
{
     id=0;
     nom="";
     prenom="";
     adresse="";

     num=0;
}
Citoyen::Citoyen(int id,QString nom,QString prenom,QString adresse,int num)
{
this->id=id;
this-> nom= nom;
this-> prenom= prenom;
this-> adresse= adresse;
this-> num= num;
}

int Citoyen::getid(){return id;}
QString Citoyen::getnom(){return  nom;}
QString Citoyen::getprenom(){return  prenom;}
QString Citoyen::getadresse(){return adresse;}
int Citoyen::getnum(){return num;}



void Citoyen::setid(int id){this->id=id;}
void Citoyen::setnom(QString  nom ){this-> nom= nom;}
void Citoyen::setprenom(QString prenom){this->prenom=prenom;}
void Citoyen::setadresse(QString adresse){this->adresse=adresse;}
void Citoyen::setnum(int  num){this-> num= num;}


bool Citoyen::ajouterCitoyen()
{

     QSqlQuery query;
     QString id_string=QString::number(id);
      QString  num_string=QString::number( num);
           query.prepare("INSERT INTO Citoyen (id, nom, prenom,adresse, num) "
                         "VALUES (:id, :nom, :prenom, :adresse,:num)");
           query.bindValue(":id", id_string);
           query.bindValue(":nom",  nom);
           query.bindValue(":prenom", prenom);
           query.bindValue(":adresse", adresse);
           query.bindValue(":num",  num_string);

         return  query.exec();

 }


 bool Citoyen::supprimerCitoyen(int id)
 {
     QSqlQuery query;
     QString id_string=QString::number(id);
     QString  num_string=QString::number( num);
           query.prepare("DELETE from Citoyen where id=:id");
           query.bindValue(0, id);

         return  query.exec();


 }

QSqlQueryModel*Citoyen::afficherCitoyen()
{
    QSqlQueryModel*model=new QSqlQueryModel();
 model->setQuery("SELECT * FROM Citoyen");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("id Citoyen"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom Citoyen"));
      model->setHeaderData(2, Qt::Horizontal, QObject::tr(" prenom Citoyen"));
      model->setHeaderData(3, Qt::Horizontal, QObject::tr("adresse Citoyen "));
        model->setHeaderData(4, Qt::Horizontal, QObject::tr("numero tel Citoyen"));;
           return model;
}
bool Citoyen::modifierCitoyen(int id, QString nom, QString prenom, QString adresse, int num)
{
    QSqlQuery query;
    query.prepare("UPDATE Citoyen set id=:id,nom=:nom,prenom=:prenom,adresse=:adresse,num=:num WHERE id=:id");
    query.bindValue(":id",id);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":adresse",adresse);
    query.bindValue(":num",num);

    return (query.exec());}

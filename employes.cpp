#include "employes.h"
#include <QMetaObject>
#include<QString>
#include<QSqlQueryModel>
#include<QDate>
#include<QTDebug>
employes::employes()
{
id=0;
nom="";
prenom="";
date_naissance="";
adresse="";
grade="";
email="";
password="";
}


employes::employes(int id,QString nom,QString prenom,QString date_naissance,QString adresse,QString grade)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->date_naissance=date_naissance;
    this->adresse=adresse;
    this->grade=grade;
}
int employes::getid(){return id;}
QString employes::getnom(){return nom;}
QString employes::getprenom(){return prenom;}
QString employes::getdate_naissance(){return date_naissance;}
QString employes::getadresse(){return adresse;}
QString employes::getgrade(){return grade;}
void employes::setid(int id){this->id=id;}
void employes::setnom(QString nom){this->nom=nom;}
void employes::setprenom(QString prenom){this->prenom=prenom;}
void employes::setdate_naissance(QString date_naissance){this->date_naissance=date_naissance;}
void employes::setadresse(QString adresse){this->adresse=adresse;}
void employes::setgrade(QString grade){this->grade=grade;}
//test ajout tutoriel
bool employes::ajouter()
{
    QSqlQuery query;
    QString id_string=QString::number(id);
    query.prepare("INSERT INTO GE_EMPLOYES (id, nom, prenom,date_naissance,adresse,grade) "
                  "VALUES (:id, :nom, :prenom, :date_naissance, :adresse, :grade)");
    query.bindValue(":id", id_string);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":date_naissance", date_naissance);
    query.bindValue(":adresse", adresse);
    query.bindValue(":grade", grade);
    return query.exec();

}

bool employes::supprimer(int id)
{
    QSqlQuery query;
    QString id_string=QString::number(id);
    query.prepare("Delete from GE_EMPLOYES where ID=:id");
    query.bindValue(":id",id_string);
    return query.exec();
}
QSqlQueryModel* employes::afficher()
{
    QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("select * from GE_EMPLOYES");
    model->setHeaderData(0,Qt::Horizontal,QObject::tr("id"));
    model->setHeaderData(1,Qt::Horizontal,QObject::tr("nom"));
    model->setHeaderData(2,Qt::Horizontal,QObject::tr("prenom"));
    model->setHeaderData(3,Qt::Horizontal,QObject::tr("date-naissance"));
    model->setHeaderData(4,Qt::Horizontal,QObject::tr("adresse"));
    model->setHeaderData(5,Qt::Horizontal,QObject::tr("grade"));
    return model;
}
bool employes::modifier()
{
         QSqlQuery query;
         QString id_string =QString::number(id);
          query.prepare("update GE_EMPLOYES set nom='" +nom+"',prenom='"+prenom+ " ',date_naissance='"+date_naissance+"',adresse='"+adresse+"',grade='"+grade+"' WHERE ID='"+id_string+"'");
          query.bindValue(":id", id_string );
          query.bindValue(":nom",nom );
          query.bindValue(":prenom", prenom);
          query.bindValue(":date_naissance", date_naissance);
          query.bindValue(":adresse", adresse);
          query.bindValue(":grade", grade);
          return query.exec();
    
}
QSqlQueryModel* employes:: trieremployes()
{

    QSqlQueryModel * model=new QSqlQueryModel();

     model->setQuery("select * from GE_EMPLOYES order by nom ");
     model->setHeaderData(0, Qt::Horizontal, QObject::tr("id")); //donner nom au colonne
     model->setHeaderData(1, Qt::Horizontal, QObject::tr(" nom"));
     model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom "));
     model->setHeaderData(3, Qt::Horizontal, QObject::tr("date_naissance"));
     model->setHeaderData(4, Qt::Horizontal, QObject::tr("adresse "));
     model->setHeaderData(5, Qt::Horizontal, QObject::tr("grade "));

    return model;
}
QSqlQueryModel * employes ::recherche_employes(QString search)
 {
     QSqlQueryModel * model= new QSqlQueryModel();
     QString qry="select * from GE_EMPLOYES where id like '%"+search+"%' or nom like '%"+search+"%' or prenom like '%"+search+"%' or date_naissance like '%"+search+"%'or adresse like '%"+search+"%' or grade like '%"+search+"%' ";
     qDebug()<<qry;
     model->setQuery(qry);
     return model;
 }
int employes::statistiquesemployes(QString adresse)
{
    QSqlQuery query;
        query.prepare("select count(*) from GE_EMPLOYES where adresse=:adresse ");
        query.bindValue(":adresse",adresse);
        query.exec();
        query.next();
        return query.value(0).toInt();
}
int employes::verif_login(QString email,QString password){

        QSqlQuery query;
        query.prepare("SELECT * FROM GE_EMPLOYES WHERE EMAIL= :email AND PASSWORD= :password");
        query.bindValue(":email",email);
        query.bindValue(":password",password);
        query.exec();
        query.next();
       return query.value(0).toInt();

}


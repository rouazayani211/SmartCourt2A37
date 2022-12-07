#include "avocat.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>

Avocat::Avocat()
{
    cin=0;
    nom="";
    prenom="";
    date_nss="";
    grade="";
    num_tel=0;
    adresse="";

}

Avocat::Avocat(int cin,QString nom,QString prenom,QString date_nss,QString grade,int num_tel,QString adresse)
{
    this->cin=cin;
    this->nom=nom;
    this->prenom=prenom;
    this->date_nss=date_nss;
    this->grade=grade;
    this->num_tel=num_tel;
    this->adresse=adresse;

}

int Avocat::getcin(){return cin;};
QString Avocat::getnom(){return nom;};
QString Avocat::getprenom(){return prenom;}
QString Avocat::getdate_nss(){return date_nss;}
QString Avocat::getgrade(){return grade;}
int Avocat::getnum_tel(){return num_tel;}
QString Avocat::getadresse(){return adresse;}
void Avocat::setcin(int cin){this->cin=cin;}
void Avocat::setnom(QString nom){this->nom=nom;}
void Avocat::setprenom(QString prenom){this->prenom=prenom;}
void Avocat::setdate_nss(QString date_nss){this->date_nss=date_nss;}
void Avocat::setgrade(QString grade){this->grade=grade;}
void Avocat::setnum_tel(int num_tel){this->num_tel=num_tel;}
void Avocat::setadresse(QString adresse){this->adresse=adresse;}
bool Avocat::ajouter()
{

    QString cin_string=QString::number(cin);
    QString num_tel_string=QString::number(num_tel);
    QSqlQuery query;
          query.prepare("INSERT INTO avocat (cin, nom, prenom, date_de_naissance, grade, num_tel, adresse) "
                        "VALUES (:cin, :nom, :prenom, :date_nss, :grade, :num_tel, :adresse)");
          query.bindValue(":cin", cin_string);
          query.bindValue(":nom", nom);
          query.bindValue(":prenom", prenom);
          query.bindValue(":date_nss", date_nss);
          query.bindValue(":grade", grade);
          query.bindValue(":num_tel", num_tel_string);
          query.bindValue(":adresse", adresse);
          return query.exec();

}
bool Avocat::supprimer( int cin){
    QSqlQuery query;

          query.prepare("delete from avocat where cin=:cin ");
          query.bindValue(":cin", cin);
          return query.exec();

}


QSqlQueryModel* Avocat::afficher()
{
    QSqlQueryModel* model=new QSqlQueryModel();
    model->setQuery("SELECT* FROM avocat");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("D.NAISSANCE"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("GRADE"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("N.TELEPHONE"));
         model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));



    return model;
}

bool Avocat::modifierAvocat( )
{
    QSqlQuery query;
    query.prepare("UPDATE avocat set cin=:cin,nom=:nom,prenom=:prenom,date_de_naissance=:date_nss,grade=:grade,num_tel=:num_tel,adresse=:adresse WHERE cin=:cin");

    query.bindValue(":cin",cin);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":date_nss",date_nss);
    query.bindValue(":grade",grade);
    query.bindValue(":num_tel",num_tel);
    query.bindValue(":adresse",adresse);


    return (query.exec());}

QSqlQueryModel* Avocat::trierAvocat()
{
    QSqlQueryModel * model=new QSqlQueryModel();

        model->setQuery("select * from avocat order by nom ");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN")); //donner nom au colonne
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));;
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("D.NAISSANCE"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("GRADE"));;
              model->setHeaderData(5, Qt::Horizontal, QObject::tr("N.TELEPHONE"));
               model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));;

        return model;
}

QSqlQueryModel* Avocat::trierAvocat2()
{
    QSqlQueryModel * model=new QSqlQueryModel();

        model->setQuery("select * from avocat order by prenom ");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN")); //donner nom au colonne
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));;
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("D.NAISSANCE"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("GRADE"));;
              model->setHeaderData(5, Qt::Horizontal, QObject::tr("N.TELEPHONE"));
               model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));;

        return model;
}

QSqlQueryModel* Avocat::rechercherAvocat(QString rech)
{
    QSqlQueryModel * model=new QSqlQueryModel();

        model->setQuery("select * from avocat WHERE nom like '"+rech+"%' or prenom like '"+rech+"%' or cin like '"+rech+"%' ");

        model->setHeaderData(0, Qt::Horizontal, QObject::tr("CIN")); //donner nom au colonne
          model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
           model->setHeaderData(2, Qt::Horizontal, QObject::tr("PRENOM"));;
            model->setHeaderData(3, Qt::Horizontal, QObject::tr("D.NAISSANCE"));
             model->setHeaderData(4, Qt::Horizontal, QObject::tr("GRADE"));;
              model->setHeaderData(5, Qt::Horizontal, QObject::tr("N.TELEPHONE"));
               model->setHeaderData(6, Qt::Horizontal, QObject::tr("ADRESSE"));;

        return model;

}

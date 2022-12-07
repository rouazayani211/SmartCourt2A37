#include "salles.h"

#include <QDebug>
#include <iostream>
#include <list>
#include <QString>
salles::salles()//constructeur par défaut
{
    numsalle=0;
    capacite=0;

}
salles::salles(int numsalle,int capacite, QString depart , int nbp)//paramétré
{
    this->numsalle=numsalle;
    this->capacite=capacite;
    this->departement = depart ;
    this ->nbp  = nbp ;
}
bool salles::ajouter_salle()
{
    QSqlQuery query;
    QString string_numsalle = QString::number(numsalle);
    QString string_capacite = QString::number(capacite);
    query.prepare("INSERT INTO SALLE (CAPACITE,departement,nbp) "
                  "VALUES (:1,:2,:3)");
  //  query.bindValue(":0","1");
    query.bindValue(":1",capacite);
    query.bindValue(":2",departement);
    query.bindValue(":3",nbp);
    return query.exec();
}


QSqlQueryModel * salles::afficher_salle()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM SALLE");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numero salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Capacite"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Departement"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nombre publique"));
    return model;
}
bool salles::modifier_salle()
 {

    QSqlQuery query;
    query.prepare("UPDATE SALLE SET CAPACITE=:cap,departement=:depart,nbp=:nbp   WHERE (NUM_SALLE=:numsalle )");
    query.bindValue(":cap",capacite);
    query.bindValue(":depart",departement);
    query.bindValue(":nbp",nbp);
    query.bindValue(":numsalle",numsalle);

    return query.exec();
}
bool salles::supprimer_salle(int numsalle)
{
    QSqlQuery query;
    query.prepare("DELETE FROM SALLE WHERE NUM_SALLE =:numsalle ");
    query.bindValue(":numsalle", numsalle);

    return  query.exec();
}
QSqlQueryModel * salles::TriParNum()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM SALLE ORDER BY capacite");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numero salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Capacite"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Departement"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nombre publique"));
    return model;
}
QSqlQueryModel * salles::Recherche(QString test)
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM salle WHERE ( num_salle LIKE '%"+test+"%' OR capacite LIKE '%"+test+"%' OR departement LIKE '%"+test+"%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Numero salle"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Capacite"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Departement"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nombre publique"));
    return model;
}
bool salles::ajouter_action(int numsalle,QString type)
{
    QSqlQuery query;

    query.prepare("INSERT INTO historique_es (num_salle,type,datea) "
                  "VALUES (:1,:2,:3)");

    query.bindValue(":1",numsalle);
    query.bindValue(":2",type);
    query.bindValue(":3",QDateTime::currentDateTime());

    return query.exec();
}
QSqlQueryModel * salles::afficher_actions()
{
    QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("SELECT * FROM historique_es");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID Action"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Numero salle"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Type"));

    return model;
}
bool salles::modifier_nbp()
{
    QSqlQuery query;
    query.prepare("UPDATE SALLE SET nbp=:nbp WHERE (NUM_SALLE=:numsalle )");
    query.bindValue(":nbp",nbp);
    query.bindValue(":numsalle",numsalle);

    return query.exec();
}


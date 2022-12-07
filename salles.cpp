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
salles::salles(int numsalle,int capacite, QString depart , int nbp, QDate d , QString etat)//paramétré
{
    this->numsalle=numsalle;
    this->capacite=capacite;
    this->departement = depart ;
    this ->nbp  = nbp ;
    this->date_reservation = d ;
    this->etat = etat ;

}
bool salles::ajouter_salle()
{
    QSqlQuery query;
    QString dates = date_reservation.toString("yyyy-MM-dd");
    QString string_numsalle = QString::number(numsalle);
    QString string_capacite = QString::number(capacite);
    qDebug()<< dates ;
    query.prepare("INSERT INTO SALLE (CAPACITE,departement,nbp,date_reservation,etat) "
                  "VALUES (:1,:2,:3,:4,:5)");
  //  query.bindValue(":0","1");
    query.bindValue(":1",capacite);
    query.bindValue(":2",departement);
    query.bindValue(":3",nbp);
    query.bindValue(":4",dates);
    query.bindValue(":5",etat);
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
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de reservation"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat"));
    return model;
}
bool salles::modifier_salle()
 {
    QString dates = date_reservation.toString("yyyy-MM-dd");
    QSqlQuery query;
    query.prepare("UPDATE SALLE SET CAPACITE=:cap,departement=:depart,nbp=:nbp,date_reservation=:dr,etat=:etat  WHERE (NUM_SALLE=:numsalle )");
    query.bindValue(":cap",capacite);
    query.bindValue(":depart",departement);
    query.bindValue(":nbp",nbp);
    query.bindValue(":numsalle",numsalle);
    query.bindValue(":dr",dates);
    query.bindValue(":etat",etat);

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
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de reservation"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat"));
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
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Date de reservation"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("Etat"));
    return model;
}



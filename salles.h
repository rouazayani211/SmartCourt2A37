#ifndef SALLES_H
#define SALLES_H
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSystemTrayIcon>
#include <QDateTime>

class salles {
    private :
    int numsalle;
    int capacite;
    QString departement;
    int nbp ;
    QDate date_reservation;
    QString etat ;
public:
    salles();//constructeur par défaut
    salles(int ,int ,QString, int , QDate , QString  );//constructeur paramétré
    bool ajouter_salle();
    QSqlQueryModel *afficher_salle();
    bool modifier_salle();
    bool supprimer_salle(int);
    QSqlQueryModel *TriParNum();
    QSqlQueryModel *Recherche(QString);


};

#endif // SALLES_H

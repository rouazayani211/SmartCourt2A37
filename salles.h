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
public:
    salles();//constructeur par défaut
    salles(int ,int ,QString, int );//constructeur paramétré
    bool ajouter_salle();
    QSqlQueryModel *afficher_salle();
    bool modifier_salle();
    bool supprimer_salle(int);
    QSqlQueryModel *TriParNum();
    QSqlQueryModel *Recherche(QString);
    bool ajouter_action(int,QString);
    QSqlQueryModel *afficher_actions();
    bool modifier_nbp();
};

#endif // SALLES_H

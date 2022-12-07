#ifndef AFFAIRE_H
#define AFFAIRE_H
#include <QString>
#include <QSqlQuery>
#include<qsqlquerymodel.h>


class affaires
{
public:
    affaires();
    affaires(int,QString,QString,QString,QString,QString,QString);
      int  getnum_proces();
    QString getdate_proces();
    QString gettype_proces();
    QString getnom_avocat();
    QString getnom_juge();
    QString getdescription();
    QString getetat();





      void setnum_proces(int);
      void setdate_proces(QString);
      void settype_proces(QString);
      void setnom_avocat(QString);
      void setnom_juge(QString);
      void setdescription(QString);
      void setetat(QString);






      bool ajouter();
 bool supprimer(int);
  QSqlQueryModel * afficher();
  bool modifier(int,QString,QString,QString,QString,QString,QString);
  QSqlQueryModel* chercher_affaires(QString rech);
  QSqlQueryModel* afficher_affaires_trie_nom_juge();
  QSqlQueryModel* afficher_affaires_trie_nom_avocat();
  QSqlQueryModel* afficher_affaires_trie_num_proces();
int statistiquesaffaire(QString etat);
bool ajouter_etat(QByteArray);
            QSqlQueryModel* afficher_pointage();


       private:
       QString date_proces,type_proces,nom_avocat,nom_juge,description,etat;
       int num_proces;


};

#endif // AFFAIRE_H

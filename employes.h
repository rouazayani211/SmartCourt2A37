#ifndef EMPLOYES_H
#define EMPLOYES_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>

#include"QMessageBox"
class employes
{
public:
    employes();
    employes(int,QString,QString,QString,QString,QString);
    int getid();
    QString getnom();
    QString getprenom();
    QString getdate_naissance();
    QString getadresse();
    QString getgrade();
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setdate_naissance(QString);
    void setadresse(QString);
    void setgrade(QString);
    bool ajouter();
    bool supprimer(int id);
    QSqlQueryModel* afficher();
  bool modifier();

private :
    int id;
    QString nom,prenom,date_naissance,adresse,grade;

};

#endif // EMPLOYES_H

#ifndef EMPLOYES_H
#define EMPLOYES_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QPrinter>
#include <QTextStream>
#include <QTextDocument>
#include <QDataStream>
#include"QMessageBox"


#include <QWidget>
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
    QString getemail();
    void setpassword(QString);
    void setnom(QString);
    void setprenom(QString);
    void setdate_naissance(QString);
    void setadresse(QString);
    void setgrade(QString);
    bool ajouter();
    bool supprimer(int id);
    int verif_login(QString,QString);
    QSqlQueryModel* afficher();
    bool modifier();
    QSqlQueryModel* trieremployes();
    QSqlQueryModel* recherche_employes(QString search);
   int statistiquesemployes(QString adresse);



private :
    int id;
    QString nom,prenom,date_naissance,adresse,grade,email,password;

};

#endif // EMPLOYES_H

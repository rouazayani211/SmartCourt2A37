#ifndef CITOYEN_H
#define CITOYEN_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>


class Citoyen
{
public:
    Citoyen();
    Citoyen(int,QString,QString,QString,int);

    //getter
    int getid();
    QString getnom();
     QString getprenom();
    QString getadresse();
     int getnum();

      //setter
    void setid(int);
    void setnom(QString);
    void setprenom(QString);
    void setadresse(QString);
     void setnum(int);

    //methode
     bool ajouterCitoyen();
     QSqlQueryModel* afficherCitoyen();
    bool supprimerCitoyen(int);
    bool modifierCitoyen(int,QString,QString,QString,int );



private:
    int id;
   QString nom;
 QString prenom;
 QString adresse ;
 int num ;


};

#endif // CITOYEN_H

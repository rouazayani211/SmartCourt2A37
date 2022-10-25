#ifndef CITOYEN_H
#define CITOYEN_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>


class Citoyen
{
public:
    Citoyen();
    Citoyen(int,QString,QString,QString,int,QDate,QString);

//getter
int getcin();
QString getnom();
QString getprenom();
QString getadresse();
int getnum();
QDate getdate();
QString getnationalite();



//setter
void setcin(int);
void setnom(QString);
void setprenom(QString);
void setadresse(QString);
void setnum(int);
void setdate(QDate);
void setnationalite(QString);

//methode
bool ajouterCitoyen();
QSqlQueryModel* afficherCitoyen();
bool supprimerCitoyen(int);
bool modifierCitoyen(int,QString,QString,QString,int,QDate,QString);




private:
int cin;
QString nom;
QString prenom;
QString adresse ;
int num ;
QDate date;
QString nationalite;


};

#endif // CITOYEN_H

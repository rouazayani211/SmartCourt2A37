#ifndef CITOYEN_H
#define CITOYEN_H

#include<QDate>
#include<QString>
#include<QSqlQueryModel>



class Citoyen
{
public:
    Citoyen();                                                 //constructeur par défaut
    Citoyen(QString,QString,QString,int,QDate,QString,int,QString,QString);    //constructeur paramétré

//getter:afficher
QString getnom_c();
QString getprenom_c();
QString getnationalite_c();
int getcin_c();
QDate getdate_c();
QString getadresse_c();
int getnum_c();
QString getemail_c();
QString getetat_c();


//setter:modifier
void setnom_c(QString);
void setprenom_c(QString);
void setnationalite_c(QString);
void setcin_c(int);
void setdate_c(QDate);
void setadresse_c(QString);
void setnum_c(int);
void setemail_c(QString);
void setetat_c(QString);

//methode
bool ajouterCitoyen();
QSqlQueryModel* afficherCitoyen();
bool supprimerCitoyen(int);
bool modifierCitoyen();
QSqlQueryModel* trierCitoyen();
QSqlQueryModel* trierCitoyen2();
Citoyen chercher_cin(int cin_c);
QSqlQueryModel* chercherCitoyen_par_cin(QString);
//int calculEtat(QString);
//bool UpdateQrcodeLink(QString, QString);
//QSqlQuery NbCitoyen();
//QSqlQuery NbCitoyen1000();




private:

QString nom_c;
QString prenom_c;
QString nationalite_c;
int cin_c;
QDate date_c;
QString adresse_c ;
int num_c ;
QString email_c ;
QString etat_c ;




};

#endif // CITOYEN_H

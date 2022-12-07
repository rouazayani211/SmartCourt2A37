#ifndef AVOCAT_H
#define AVOCAT_H
#include <QString>
#include <QSqlQueryModel>
#include <QPrinter>
#include <QTextStream>
#include <QTextDocument>
#include <QDataStream>
#include <QDateTime>



class Avocat
{
public:
    Avocat();
    Avocat(int,QString,QString,QString,QString,int,QString);
    int getcin();
    QString getnom();
    QString getprenom();
    QString getdate_nss();
    QString getgrade();
    int getnum_tel();
    QString getadresse();
    QDateTime getdate();
    void setdate(QDateTime);
    void setcin(int);
    void setnom(QString);
    void setprenom(QString);
    void setdate_nss(QString);
    void setgrade(QString);
    void setnum_tel(int);
    void setadresse(QString);
    bool ajouter();
    QSqlQueryModel* afficher();
    bool supprimer( int);
    bool modifierAvocat( );
    QSqlQueryModel* trierAvocat();
    QSqlQueryModel* trierAvocat2();
    QSqlQueryModel* rechercherAvocat(QString);

private:
    int cin,num_tel;
    QString nom,prenom,adresse,grade,date_nss;
    QDateTime date;


};

#endif // AVOCAT_H

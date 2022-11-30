#ifndef  ENREGISTREMENT_H
#define ENREGISTREMENT_H

#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QDate>
class enregistrement
{
public:
    enregistrement();
    enregistrement(QString,QString);
     QString get_msg();

       QString get_time();
         bool ajouter();
          QSqlQueryModel * afficher();

private:

QString msg,time;
};


#endif

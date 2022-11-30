#include "enregistrement.h"

#include "connection.h"

enregistrement::enregistrement()
{



    time ="";
   msg="";

    }
    enregistrement::enregistrement(QString msg ,QString time)
    {

        this->msg=msg;


        this->time=time;
    }
    //getter
    QString enregistrement::get_msg(){return msg;}

    QString enregistrement::get_time(){return time;}





    bool enregistrement::ajouter()
    {
        //Add row to enregistrementS
        QSqlQuery query;

        query.prepare("INSERT INTO enregistrement (MSG,TIME) "
                            "VALUES (:msg, :time)");

        query.bindValue(":msg",msg);
        query.bindValue(":time",time);


        return query.exec();

    }
    QSqlQueryModel *enregistrement ::afficher()
    {QSqlQueryModel * model= new QSqlQueryModel();

    model->setQuery("select * from enregistrement");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("Message"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Date "));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Id Employee"));

        return model;
    }



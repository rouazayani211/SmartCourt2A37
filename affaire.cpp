#include"affaire.h"
affaires::affaires()
{
   num_proces=0;
   date_proces="";
   type_proces="";
   nom_avocat="";
   nom_juge="";
   description="";
   etat="";




}

affaires::affaires(int num_proces,QString date_proces,QString type_proces,QString nom_avocat,QString nom_juge,QString description,QString etat)
   { this->num_proces=num_proces;
    this->date_proces=date_proces;
     this->type_proces=type_proces;
    this->nom_avocat=nom_avocat;
     this->nom_juge=nom_juge;
     this->description=description;
     this->etat=etat;




}
int affaires::getnum_proces(){return num_proces; }
QString affaires::getdate_proces(){return date_proces; }
QString affaires::gettype_proces(){return type_proces; }
QString affaires::getnom_avocat(){return nom_avocat; }
QString affaires::getnom_juge(){return nom_juge; }
QString affaires::getdescription(){return description; }
QString affaires::getetat(){return etat; }







void affaires::setnum_proces(int num_proces_x){num_proces=num_proces_x; }
void affaires::setdate_proces(QString date_proces_x ){date_proces=date_proces_x ;}
void affaires::settype_proces(QString type_proces_x){date_proces=type_proces_x ;}
void affaires::setnom_avocat(QString nom_avocat_x){nom_avocat=nom_avocat_x ;}
void affaires::setnom_juge(QString nom_juge_x){nom_juge=nom_juge_x ;}
void affaires::setdescription(QString description_x){description=description_x ;}
void affaires::setetat(QString etat_x){etat=etat_x ;}





bool affaires::ajouter()
{
    QSqlQuery query;
 QString num_string=QString::number(num_proces);

    query.prepare("INSERT INTO affaires (num_proces,date_proces,type_proces,nom_avocat,nom_juge,description,etat)"
            "VALUES (:num_proces, :date_proces,:type_proces,:nom_avocat,:nom_juge,:description,:etat)");
    query.bindValue(":num_proces", num_string);
    query.bindValue(":date_proces", date_proces);
    query.bindValue(":type_proces", type_proces);
    query.bindValue(":nom_avocat", nom_avocat);
    query.bindValue(":nom_juge", nom_juge);
    query.bindValue(":description", description);
    query.bindValue(":etat", etat);





    return    query.exec();
}
bool affaires::supprimer(int num_proces)
{
QSqlQuery query;
QString res= QString::number(num_proces);
query.prepare("Delete from affaires where num_proces = :num_proces ");
query.bindValue(":num_proces", res);
return    query.exec();
}
QSqlQueryModel* affaires::afficher()
{QSqlQueryModel* model= new QSqlQueryModel();
model->setQuery("select * from affaires");
model->setHeaderData(0, Qt::Horizontal, QObject::tr("num_proces"));
model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_proces "));
model->setHeaderData(2, Qt::Horizontal, QObject::tr("type_proces"));
model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom_avocat"));
model->setHeaderData(4, Qt::Horizontal, QObject::tr("nom_juge"));
model->setHeaderData(5, Qt::Horizontal, QObject::tr("description"));
model->setHeaderData(6, Qt::Horizontal, QObject::tr("etat"));




    return model;
}
bool affaires::modifier(int num_proces ,QString date_proces,QString type_proces,QString nom_avocat ,QString nom_juge,QString description,QString etat)
{
    QSqlQuery query;
    query.prepare("UPDATE affaires SET num_proces= :num_proces,date_proces= :date_proces,type_proces = :type_proces,nom_avocat = :nom_avocat ,nom_juge=:nom_juge,description=:description ,etat=:etat   WHERE num_proces= :num_proces ");
    query.bindValue(":num_proces",num_proces);
    query.bindValue(":date_proces",date_proces);
    query.bindValue(":type_proces",type_proces);
    query.bindValue(":nom_avocat",nom_avocat);
    query.bindValue(":nom_juge",nom_juge);
    query.bindValue(":description",description);
    query.bindValue(":etat",etat);





    return    query.exec();
}
QSqlQueryModel* affaires::chercher_affaires(QString rech){
    QString sQuery="SELECT * FROM affaires WHERE num_proces LIKE'%"+rech+"%'";

    QSqlQueryModel*model4=new QSqlQueryModel();

    QSqlQuery qry;

    qry.prepare(sQuery);

    qry.exec();
    model4->setQuery(qry);
    return model4;
}
QSqlQueryModel* affaires::afficher_affaires_trie_nom_juge(){
    QString sQuery="SELECT * FROM affaires ORDER BY nom_juge";

    QSqlQueryModel*model1=new QSqlQueryModel();

    QSqlQuery qry;

    qry.prepare(sQuery);

    qry.exec();
    model1->setQuery(qry);
return model1;
}
QSqlQueryModel* affaires::afficher_affaires_trie_nom_avocat(){
    QString sQuery="SELECT * FROM affaires ORDER BY nom_avocat";

    QSqlQueryModel*model1=new QSqlQueryModel();

    QSqlQuery qry;

    qry.prepare(sQuery);

    qry.exec();
    model1->setQuery(qry);
return model1;
}
QSqlQueryModel* affaires::afficher_affaires_trie_num_proces(){
    QString sQuery="SELECT * FROM affaires ORDER BY num_proces";

    QSqlQueryModel*model3=new QSqlQueryModel();

    QSqlQuery qry;

    qry.prepare(sQuery);

    qry.exec();
    model3->setQuery(qry);
return model3;
}
int affaires::statistiquesaffaire(QString etat)
{
    QSqlQuery query;
    query.prepare("select count(*) from affaires where etat=:etat ");
    query.bindValue(":etat",etat);
    query.exec();
    query.next();
    return query.value(0).toInt();
}

bool affaires::ajouter_etat(QByteArray ID)
{
QSqlQuery query;
if(ID=="1")
{
    QSqlQuery query;

query.prepare("INSERT INTO historiques (porte_histos) "
              "VALUES ('door is locked')");
return query.exec();

}
if (ID=="0")
{
    QSqlQuery query;

    query.prepare("INSERT INTO historiques (porte_histos) "
                  "VALUES ('door is opened')");
    return query.exec();

}
}
QSqlQueryModel* affaires::afficher_pointage()
{
    QSqlQueryModel* model=new QSqlQueryModel();

    model->setQuery("SELECT* FROM historiques");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("pointage"));


 return model;
}

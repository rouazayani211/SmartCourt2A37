#include "connection.h"
//test tutoriol git
//cc
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("source_projet2A");
db.setUserName("roua");//inserer nom de l'utilisateur
db.setPassword("admin");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;
    return  test;
}
void Connection::closeconnection(){db.close();}

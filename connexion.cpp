#include "connexion.h"

Connexion::Connexion()
{

}

bool Connexion::ouvrirConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("projet2A");
db.setUserName("amine");//inserer nom de l'utilisateur
db.setPassword("tejamine13");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}

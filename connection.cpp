#include <QDebug>
#include"connection.h"


Connection::Connection()
{

}

bool Connection::ouvrirConnexion()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("test-bd");
db.setUserName("system");//inserer nom de l'utilisateur
db.setPassword("beyblade7");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}


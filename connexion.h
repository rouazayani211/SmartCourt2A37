#ifndef CONNECTION_H
#define CONNECTION_H
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

class Connexion
{
public:
    Connexion();
    bool ouvrirConnexion();
};

#endif // CONNECTION_H
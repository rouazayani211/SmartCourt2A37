#ifndef AFF_H
#define AFF_H

#include <QMainWindow>

#include"affaire.h"
#include "arduinoa.h"

#include <QApplication>

#include <QMessageBox>

#include <QFileDialog>

#include <QtPrintSupport/QPrinter>

#include <QTextDocument>

#include <QtDebug>

#include <QMessageBox>

#include <QTableView>

#include <QAbstractItemView>

#include <QIntValidator>

#include <QVector>

#include <qjsondocument.h>

#include <QSortFilterProxyModel>



#include <QFile>

#include <QInputDialog>

#include <QJsonArray>

#include <QJsonObject>

#include <QLineEdit>


#include <QMessageBox>

#include <QNetworkAccessManager>

#include <QNetworkCookie>

#include <QNetworkCookieJar>

#include <QNetworkReply>

#include <QNetworkSession>

QT_BEGIN_NAMESPACE

namespace Ui {
class aff;
}

class aff : public QMainWindow
{
    Q_OBJECT

public:
    explicit aff(QWidget *parent = nullptr);
    ~aff();


private slots:


    void on_ajouter_pushButton_clicked();

    void on_suprimer_pushButton_clicked();

    void on_afficher_pushButton_clicked();

    void on_modiffier_pushButton_clicked();

    void on_chercher_pushButton_clicked();

    void on_pdf_pushButton_clicked();

    void on_calendarWidget_clicked(const QDate &date);

    void on_pushButton_add_clicked_clicked();

    void on_stat_pushButton_clicked();
    void readfile();
    void on_tabWidget_currentChanged(int index);






    void on_update_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::aff *ui;
    affaires afff,V;
    QByteArray ID; // variable contenant les données reçues
    arduino A; // objet temporaire


QNetworkAccessManager *manager;



    QByteArray token = "";

    QByteArray user = "";

    QByteArray name = "";



    QJsonObject json;

    QJsonArray selected_day_json;

    QString select_date;



    QByteArray post(QString url, QByteArray data, const char *type);

    QByteArray get(QString url);

    QJsonObject format(QByteArray data);

    void updatetoken(QNetworkReply *reply);
};

#endif // AFF_H

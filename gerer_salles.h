#ifndef GERER_SALLES_H
#define GERER_SALLES_H

#include "arduino.h"
#include"salles.h"
#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class gerer_salles; }
QT_END_NAMESPACE

class gerer_salles : public QDialog
{
    Q_OBJECT

public:
    gerer_salles(QWidget *parent = nullptr);
    ~gerer_salles();

private slots:



    void on_pushButton_ajoute_ghatas_clicked();

    void on_pushButton_modifier_ghatas_clicked();

    void on_pushButton_supprimer_ghatas_clicked();

    void on_pushButton_pdf_ghatas_clicked();

    void on_lineEdit_recherche_ghatas_textChanged(const QString &arg1);

    void on_pushButton_trier_ghatas_clicked();

    void on_pushButton_stat_ghatas_clicked();

   // void on_pushButton_clicked();

    //void on_pushButton_sortie_ghatas_clicked();

    void write(QString);

    void read();

    void on_pushButton_entree_ghatas_clicked();

    void on_pushButton_sortie_ghatas_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_11_clicked();

    void on_pushButton_12_clicked();

private:
    Ui::gerer_salles *ui;
    salles s;

    QByteArray data,ba; // variable contenant les données reçues

    Arduino A; // objet temporaire
};
#endif // GERER_SALLES_H

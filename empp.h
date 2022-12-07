#ifndef EMPP_H
#define EMPP_H

#include <QMainWindow>

#include"arduino.h"
#include"enregistrement.h"
#include"employes.h"
namespace Ui {
class empp;
}

class empp : public QMainWindow
{
    Q_OBJECT

public:
    explicit empp(QWidget *parent = nullptr);
    ~empp();
private slots:
    void on_ajouter_clicked();

    void on_b_modifier_clicked();

    void on_b_supprimer_clicked();

    void on_tri_nom_clicked();

    void on_pdf_clicked();

    void on_recherche_2_clicked();

    void on_stat_clicked();



    void on_stat_2_clicked();

    void on_QR_clicked();

    void on_supp_clicked();

    void on_logout_clicked();

    void on_return_2_clicked();

    void on_return_3_clicked();

    void on_b_modifier_2_clicked();

    void on_afficher_clicked();

    void on_return_4_clicked();

    void on_return_5_clicked();

    void on_ajouter_2_clicked();

    void on_map_clicked();

    void on_return_6_clicked();
void rechEmploy();





void on_pointage_clicked();

void on_return_7_clicked();
void on_pushButton_9_clicked();

private:
    Ui::empp *ui;
    employes emp;
    QByteArray data; // variable contenant les données reçues
      enregistrement tmpEnreg;
    Arduino A;

};

#endif // EMPP_H

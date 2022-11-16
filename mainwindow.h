#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"employes.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_ajouter_clicked();

    void on_b_modifier_clicked();

    void on_b_supprimer_clicked();

    void on_tri_nom_clicked();

    void on_pdf_clicked();

    void on_recherche_2_clicked();

    void on_stat_clicked();


    void on_pushButton_clicked();

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

private:
    Ui::MainWindow *ui;
    employes emp;


};

#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include"salles.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_pushButton_ajoute_ghatas_clicked();

    void on_pushButton_modifier_ghatas_clicked();

    void on_pushButton_supprimer_ghatas_clicked();

    void on_pushButton_pdf_ghatas_clicked();

    void on_lineEdit_recherche_ghatas_textChanged(const QString &arg1);

    void on_pushButton_trier_ghatas_clicked();

    void on_pushButton_stat_ghatas_clicked();

    void on_pushButton_clicked();

    void on_pushButton_sortie_ghatas_clicked();

private:
    Ui::MainWindow *ui;
    salles s;
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "avocat.h"
#include "notepad.h"
#include "camera.h"
#include "stat_combo.h"
#include <QMainWindow>
#include <QInputDialog>
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
    void on_pb_ajouter_clicked();

    void on_pb_supprimer_clicked();

    void on_pb_modifier_clicked();

    void on_pb_PDF_clicked();

    void on_rb_tri1_clicked();

    void on_rb_tri2_clicked();

    void on_la_recherche_clicked();

    void on_pb_stat_clicked();

    void on_note_clicked();

    void on_cam_clicked();

private:
    Ui::MainWindow *ui;
    Avocat A;
    stat_combo *s;
    Notepad *n;
    camera *c;

    };

#endif // MAINWINDOW_H

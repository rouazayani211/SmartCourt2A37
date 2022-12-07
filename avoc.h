#ifndef AVOC_H
#define AVOC_H
#include "avocat.h"
#include "notepad.h"
#include "camera.h"
#include "stat_combo.h"
#include <QMainWindow>
#include <QInputDialog>
#include <QMainWindow>

namespace Ui {
class avoc;
}

class avoc : public QMainWindow
{
    Q_OBJECT

public:
    explicit avoc(QWidget *parent = nullptr);
    ~avoc();

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

    void on_pushButton_7_clicked();

   //void on_pushButton_8_clicked();

private:
    Ui::avoc *ui;
    Avocat A;
    stat_combo *s;
    notepad *n;
    camera *c;

};

#endif // AVOC_H

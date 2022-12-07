
#ifndef NOTEPAD_H
#define NOTEPAD_H

// Provides the main application window on which the user interface
// is built by adding widgets
#include <QMainWindow>

#include <QFile>
#include <QFileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>

// Use the standard UI namespace which is tied to the .ui file
namespace Ui {
class notepad;
}

class notepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit notepad(QWidget *parent = nullptr);
    ~notepad();

private slots:
    void on_pb_new_clicked();

    void on_pb_open_clicked();

    void on_pb_save_clicked();

    void on_pb_save_as_clicked();

    void on_pb_print_clicked();

    void on_pb_exit_clicked();

    void on_pb_copy_clicked();

    void on_pb_paste_clicked();

    void on_pb_cut_clicked();

    void on_pb_undo_clicked();

    void on_pb_redo_clicked();
    void on_pushButton_10_clicked();

private:
    Ui::notepad *ui;
    QString currentFile = "";

};

#endif // NOTEPAD_H

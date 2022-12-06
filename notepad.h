
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
class Notepad;
}

class Notepad : public QDialog
{
    // Declares our class as a QObject which is the base class
    // for all Qt objects
    // QObjects handle events
    // Each QObject executes on a thread
    Q_OBJECT

public:

    // Declare a constructor and by passing 0 we state this widget
    // has no parent
    explicit Notepad(QWidget *parent = 0);

    // Declare a destructor which will free resources
    ~Notepad();

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

private:

    // Point to the ui class
    Ui::Notepad *ui;

    // A Qt character string that will hold text entered by the user
    QString currentFile = "";
};

#endif // NOTEPAD_H

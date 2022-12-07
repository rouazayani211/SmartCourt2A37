#ifndef DIALOG_IN_H
#define DIALOG_IN_H
#include"employes.h"

#include <QMainWindow>

namespace Ui {
class dialog_in;
}

class dialog_in : public QMainWindow
{
    Q_OBJECT

public:
    explicit dialog_in(QWidget *parent = nullptr);
    ~dialog_in();

private slots:
    void on_pushButton_clicked();

private:
    Ui::dialog_in *ui;
};

#endif // DIALOG_IN_H

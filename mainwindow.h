#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "citoyen.h"
#include <QMediaPlayer>
#include <QSound>
#include "stat_combo.h"
#include <QMainWindow>
#include <QPainter>
#include <QPrinter>
#include <QPrintPreviewDialog>
#include <QTextEdit>
#include "smtp.h"
#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QString>
#include <QTextStream>
#include <QDebug>
#include <QtWidgets/QMessageBox>
#include <QByteArray>
#include <QFile>
#include <QFileInfo>

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

    void on_pushButton_ajouter_clicked();
    void on_pushButton_supprimer_clicked();
    void on_pushButton_modifier_clicked();
    void on_tri1_radioButton_clicked();
    void on_tri2_radioButton_clicked();
    void on_pushButton_chercher_clicked();
    void on_pdf_pushButton_clicked();
    void on_pushButton_stat_clicked();
    //void browse();
  //  void sendMail();
    void mailSent(QString status);
//    void on_qrcode_pushButton_clicked();

    void on_qrcodegen_2_clicked();

    void on_sendBtn_clicked();
void browse();
void sendMail();
    void on_browseBtn_clicked();
    void on_export_excel_clicked();
private:
    Ui::MainWindow *ui;
    Citoyen Etmp;
    QSound *sound;
    QMediaPlayer* player;
    stat_combo *s;
    QStringList files;

      QString mnomemp="localhost";
      quint16 mport=3333;
      QTcpSocket *mSocket;
}
;

#endif // MAINWINDOW_H

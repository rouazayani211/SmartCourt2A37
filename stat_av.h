#ifndef STAT_AV_H
#define STAT_AV_H


#include <QDialog>

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

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

QT_CHARTS_USE_NAMESPACE
namespace Ui {
class stat_av;
}

class stat_av : public QDialog
{
    Q_OBJECT

public:
    explicit stat_av(QWidget *parent = nullptr);
    ~stat_av();
    QChartView *chartView ;
    void choix_bar();
    void choix_pie();

private slots:
    void on_pushButton_10_clicked();

private:
    Ui::stat_av *ui;
};

#endif // STAT_AV_H

#include "stat_combo.h"
#include "citoyen.h"
#include "ui_stat_combo.h"

QT_CHARTS_USE_NAMESPACE
stat_combo::stat_combo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::stat_combo)
{
    ui->setupUi(this);
}

stat_combo::~stat_combo()
{
    delete ui;
}


//bar chart
void stat_combo::choix_bar()
{
QSqlQuery q1,q2,q3,q4;
qreal tot=0,c1=0,c2=0,c3=0;

q1.prepare("SELECT * FROM CITOYEN");
q1.exec();

q2.prepare("SELECT * FROM CITOYEN WHERE ETAT_C='Accuse'");
q2.exec();

q3.prepare("SELECT * FROM CITOYEN WHERE ETAT_C='Temoin'");
q3.exec();

q4.prepare("SELECT * FROM CITOYEN WHERE ETAT_C='Membre de public' ");
q4.exec();

while (q1.next()){tot++;}
while (q2.next()){c1++;}
while (q3.next()){c2++;}
while (q4.next()){c3++;}

c1=c1/tot;
c2=c2/tot;
c3=c3/tot;

QString c1S=QString::number(c1*100);
QString c2S=QString::number(c2*100);
QString c3S=QString::number(c3*100);

// Assign names to the set of bars used
        QBarSet *set0 = new QBarSet("Accuse "
                                    +c1S+"%");
        QBarSet *set1 = new QBarSet("Temoin "
                                    +c2S+"%");
        QBarSet *set2 = new QBarSet("Membre de public "
                                    +c3S+"%");

        // Assign values for each bar
        *set0 << c1;
        *set1 << c2;
        *set2 << c3;



        // Add all sets of data to the chart as a whole
        // 1. Bar Chart
        QBarSeries *series = new QBarSeries();

        // 2. Stacked bar chart
        series->append(set0);
        series->append(set1);
        series->append(set2);


        // Used to define the bar chart to display, title
        // legend,
        QChart *chart = new QChart();

        // Add the chart
        chart->addSeries(series);
        chart->setAnimationOptions(QChart::SeriesAnimations);


        // Adds categories to the axes
        QBarCategoryAxis *axis = new QBarCategoryAxis();



        // 1. Bar chart
        chart->createDefaultAxes();
        chart->setAxisX(axis, series);

        // Used to change the palette
        QPalette pal = qApp->palette();

        // Change the color around the chart widget and text
        pal.setColor(QPalette::Window, QRgb(0xffffff));
        pal.setColor(QPalette::WindowText, QRgb(0x404044));

        // Apply palette changes to the application
        qApp->setPalette(pal);


// Used to display the chart
chartView = new QChartView(chart,ui->label_stat_2);
chartView->setRenderHint(QPainter::Antialiasing);
chartView->setMinimumSize(550,550);

chartView->show();
}

//pie chart
    void stat_combo::choix_pie()
    {
    QSqlQuery q1,q2,q3,q4;
    qreal tot=0,c1=0,c2=0,c3=0;

    q1.prepare("SELECT * FROM CITOYEN");
    q1.exec();

    q2.prepare("SELECT * FROM CITOYEN WHERE ETAT_C='Accuse'");
    q2.exec();

    q3.prepare("SELECT * FROM CITOYEN WHERE ETAT_C='Temoin'");
    q3.exec();

    q4.prepare("SELECT * FROM CITOYEN WHERE ETAT_C='Membre de public' ");
    q4.exec();

    while (q1.next()){tot++;}
    while (q2.next()){c1++;}
    while (q3.next()){c2++;}
    while (q4.next()){c3++;}

    c1=c1/tot;
    c2=c2/tot;
    c3=c3/tot;

    // Define slices and percentage of whole they take up
    QPieSeries *series = new QPieSeries();
    /*series->append("Accuse",c1);
    series->append("Temoin",c2);
    series->append("Membre de public",c3);*/
    QString c1S=QString::number(c1*100);
    QString c2S=QString::number(c2*100);
    QString c3S=QString::number(c3*100);
    QPieSlice *slice1 =series->append("Accuse "+c1S+"%",c1);
    QPieSlice *slice2 =series->append("Temoin "+c2S+"%",c2);
    QPieSlice *slice3=series->append("Membre de public "+c3S+"%",c3);
    series->setHoleSize(0.25);
     slice1->setLabelVisible();
      slice1->setExploded();
     slice2->setLabelVisible();
slice3->setLabelVisible();


    // Create the chart widget
    QChart *chart = new QChart();

    // Add data to chart with title and show legend
    chart->setAnimationOptions(QChart::SeriesAnimations);

    chart->addSeries(series);
    chart->legend()->show();


    // Used to display the chart
    chartView = new QChartView(chart,ui->label_stat);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setMinimumSize(550,550);

    chartView->show();
    }



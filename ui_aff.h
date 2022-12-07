/********************************************************************************
** Form generated from reading UI file 'aff.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AFF_H
#define UI_AFF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_aff
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label_2;
    QLineEdit *le_num_proces_2;
    QLabel *label_3;
    QLineEdit *la_date_proces_2;
    QLabel *label_4;
    QPushButton *ajouter_pushButton;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLineEdit *num_proces_supp;
    QPushButton *suprimer_pushButton;
    QGroupBox *groupBox_3;
    QTableView *tableView;
    QPushButton *pdf_pushButton;
    QLabel *label_18;
    QLineEdit *le_nom_avocat_2;
    QLabel *label_19;
    QLineEdit *le_nom_juge_2;
    QPushButton *modiffier_pushButton;
    QLineEdit *lineEdit_chercher;
    QPushButton *chercher_pushButton;
    QPushButton *afficher_pushButton;
    QGroupBox *groupBox_4;
    QLabel *label_20;
    QComboBox *tri_par_2;
    QGroupBox *groupBox_5;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QCalendarWidget *calendarWidget;
    QWidget *tab_4;
    QTextBrowser *textHisto;
    QWidget *tab_5;
    QFrame *frame;
    QWidget *tab;
    QTableView *tab_pointage;
    QPushButton *pushButton_7;
    QLabel *label_21;
    QLineEdit *la_description_2;
    QLineEdit *le_type_proces_2;
    QPushButton *pushButton_add_clicked;
    QLabel *label_7;
    QLineEdit *le_etat_2;
    QLabel *label_8;
    QLineEdit *lineEdit_num;
    QPushButton *stat_pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *aff)
    {
        if (aff->objectName().isEmpty())
            aff->setObjectName(QStringLiteral("aff"));
        aff->resize(1482, 953);
        centralwidget = new QWidget(aff);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 20, 1481, 961));
        groupBox->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 70, 161, 31));
        label_2->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_num_proces_2 = new QLineEdit(groupBox);
        le_num_proces_2->setObjectName(QStringLiteral("le_num_proces_2"));
        le_num_proces_2->setGeometry(QRect(210, 70, 131, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 130, 151, 31));
        label_3->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
""));
        la_date_proces_2 = new QLineEdit(groupBox);
        la_date_proces_2->setObjectName(QStringLiteral("la_date_proces_2"));
        la_date_proces_2->setGeometry(QRect(210, 130, 131, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 190, 131, 31));
        label_4->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        ajouter_pushButton = new QPushButton(groupBox);
        ajouter_pushButton->setObjectName(QStringLiteral("ajouter_pushButton"));
        ajouter_pushButton->setGeometry(QRect(70, 450, 111, 41));
        ajouter_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"color: #000000;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 510, 371, 131));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 40, 141, 31));
        label_5->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        num_proces_supp = new QLineEdit(groupBox_2);
        num_proces_supp->setObjectName(QStringLiteral("num_proces_supp"));
        num_proces_supp->setGeometry(QRect(190, 40, 131, 31));
        suprimer_pushButton = new QPushButton(groupBox_2);
        suprimer_pushButton->setObjectName(QStringLiteral("suprimer_pushButton"));
        suprimer_pushButton->setGeometry(QRect(240, 80, 101, 41));
        suprimer_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"color: #000000;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(510, 110, 521, 211));
        groupBox_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        tableView = new QTableView(groupBox_3);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 20, 521, 191));
        pdf_pushButton = new QPushButton(groupBox);
        pdf_pushButton->setObjectName(QStringLiteral("pdf_pushButton"));
        pdf_pushButton->setGeometry(QRect(890, 330, 161, 41));
        pdf_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"color: #000000;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(40, 240, 131, 31));
        label_18->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_nom_avocat_2 = new QLineEdit(groupBox);
        le_nom_avocat_2->setObjectName(QStringLiteral("le_nom_avocat_2"));
        le_nom_avocat_2->setGeometry(QRect(210, 240, 131, 31));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(40, 290, 121, 31));
        label_19->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_nom_juge_2 = new QLineEdit(groupBox);
        le_nom_juge_2->setObjectName(QStringLiteral("le_nom_juge_2"));
        le_nom_juge_2->setGeometry(QRect(210, 290, 131, 31));
        modiffier_pushButton = new QPushButton(groupBox);
        modiffier_pushButton->setObjectName(QStringLiteral("modiffier_pushButton"));
        modiffier_pushButton->setGeometry(QRect(260, 450, 111, 41));
        modiffier_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"color: #000000;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        lineEdit_chercher = new QLineEdit(groupBox);
        lineEdit_chercher->setObjectName(QStringLiteral("lineEdit_chercher"));
        lineEdit_chercher->setGeometry(QRect(510, 60, 231, 31));
        chercher_pushButton = new QPushButton(groupBox);
        chercher_pushButton->setObjectName(QStringLiteral("chercher_pushButton"));
        chercher_pushButton->setGeometry(QRect(800, 50, 121, 41));
        chercher_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"color: #000000;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        afficher_pushButton = new QPushButton(groupBox);
        afficher_pushButton->setObjectName(QStringLiteral("afficher_pushButton"));
        afficher_pushButton->setGeometry(QRect(940, 50, 111, 41));
        afficher_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"\n"
"color: #000000;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(390, 380, 251, 261));
        label_20 = new QLabel(groupBox_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 30, 71, 31));
        label_20->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        tri_par_2 = new QComboBox(groupBox_4);
        tri_par_2->setObjectName(QStringLiteral("tri_par_2"));
        tri_par_2->setGeometry(QRect(100, 30, 141, 31));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(660, 390, 541, 301));
        tabWidget = new QTabWidget(groupBox_5);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 20, 531, 271));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        calendarWidget = new QCalendarWidget(tab_3);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(0, 0, 521, 241));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        textHisto = new QTextBrowser(tab_4);
        textHisto->setObjectName(QStringLiteral("textHisto"));
        textHisto->setGeometry(QRect(0, 0, 521, 251));
        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        frame = new QFrame(tab_5);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 0, 521, 251));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        tabWidget->addTab(tab_5, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tab_pointage = new QTableView(tab);
        tab_pointage->setObjectName(QStringLiteral("tab_pointage"));
        tab_pointage->setGeometry(QRect(0, 0, 511, 181));
        tabWidget->addTab(tab, QString());
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(1050, 710, 131, 41));
        pushButton_7->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: #778899c;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(40, 340, 131, 41));
        label_21->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        la_description_2 = new QLineEdit(groupBox);
        la_description_2->setObjectName(QStringLiteral("la_description_2"));
        la_description_2->setGeometry(QRect(210, 340, 131, 41));
        le_type_proces_2 = new QLineEdit(groupBox);
        le_type_proces_2->setObjectName(QStringLiteral("le_type_proces_2"));
        le_type_proces_2->setGeometry(QRect(210, 190, 131, 31));
        pushButton_add_clicked = new QPushButton(groupBox);
        pushButton_add_clicked->setObjectName(QStringLiteral("pushButton_add_clicked"));
        pushButton_add_clicked->setGeometry(QRect(800, 710, 111, 41));
        pushButton_add_clicked->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: #778899c;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 400, 121, 31));
        label_7->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_etat_2 = new QLineEdit(groupBox);
        le_etat_2->setObjectName(QStringLiteral("le_etat_2"));
        le_etat_2->setGeometry(QRect(210, 400, 131, 31));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(390, 710, 151, 41));
        label_8->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        lineEdit_num = new QLineEdit(groupBox);
        lineEdit_num->setObjectName(QStringLiteral("lineEdit_num"));
        lineEdit_num->setGeometry(QRect(590, 710, 151, 41));
        stat_pushButton = new QPushButton(groupBox);
        stat_pushButton->setObjectName(QStringLiteral("stat_pushButton"));
        stat_pushButton->setGeometry(QRect(932, 710, 111, 41));
        stat_pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: #778899c;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#ffffff;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        aff->setCentralWidget(centralwidget);
        menubar = new QMenuBar(aff);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1482, 26));
        aff->setMenuBar(menubar);
        statusbar = new QStatusBar(aff);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        aff->setStatusBar(statusbar);

        retranslateUi(aff);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(aff);
    } // setupUi

    void retranslateUi(QMainWindow *aff)
    {
        aff->setWindowTitle(QApplication::translate("aff", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("aff", "ajouter du  proc\303\250s", Q_NULLPTR));
        label_2->setText(QApplication::translate("aff", "num\303\251ro du proc\303\250s", Q_NULLPTR));
        label_3->setText(QApplication::translate("aff", "date du  proc\303\250s", Q_NULLPTR));
        label_4->setText(QApplication::translate("aff", "type de  proc\303\250s", Q_NULLPTR));
        ajouter_pushButton->setText(QApplication::translate("aff", "Ajouter", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("aff", "supression", Q_NULLPTR));
        label_5->setText(QApplication::translate("aff", "Num\303\251ro du proc\303\250s", Q_NULLPTR));
        suprimer_pushButton->setText(QApplication::translate("aff", "suprimer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("aff", "afficher", Q_NULLPTR));
        pdf_pushButton->setText(QApplication::translate("aff", "Generation  PDF", Q_NULLPTR));
        label_18->setText(QApplication::translate("aff", "  Nom Avocat ", Q_NULLPTR));
        label_19->setText(QApplication::translate("aff", "    Nom Juge ", Q_NULLPTR));
        modiffier_pushButton->setText(QApplication::translate("aff", "Modifier", Q_NULLPTR));
        chercher_pushButton->setText(QApplication::translate("aff", "Chercher", Q_NULLPTR));
        afficher_pushButton->setText(QApplication::translate("aff", "Afficher", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_20->setText(QApplication::translate("aff", "tri par:", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("aff", "planing des affiaires juridiques", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("aff", "suivi des affaires", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("aff", "Statistiques des affaires juridiques ", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("aff", "pointage", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("aff", "Fermer", Q_NULLPTR));
        label_21->setText(QApplication::translate("aff", "   Description:", Q_NULLPTR));
        pushButton_add_clicked->setText(QApplication::translate("aff", "add", Q_NULLPTR));
        label_7->setText(QApplication::translate("aff", "       Etat", Q_NULLPTR));
        label_8->setText(QApplication::translate("aff", "    Numero proces", Q_NULLPTR));
        stat_pushButton->setText(QApplication::translate("aff", "Stat", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aff: public Ui_aff {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AFF_H

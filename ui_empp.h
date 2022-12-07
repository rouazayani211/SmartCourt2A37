/********************************************************************************
** Form generated from reading UI file 'empp.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPP_H
#define UI_EMPP_H

#include <ActiveQt/QAxWidget>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>
#include <webaxwidget.h>

QT_BEGIN_NAMESPACE

class Ui_empp
{
public:
    QWidget *centralwidget;
    QStackedWidget *SW;
    QWidget *page;
    QWidget *page_2;
    WebAxWidget *WebBrowser;
    QPushButton *return_6;
    QWidget *page_4;
    QPushButton *supp;
    QPushButton *logout;
    QPushButton *b_modifier_2;
    QPushButton *afficher;
    QPushButton *ajouter_2;
    QPushButton *map;
    QPushButton *pointage;
    QPushButton *pushButton_9;
    QWidget *page_3;
    QPushButton *tri_nom;
    QLineEdit *recherche;
    QPushButton *pdf;
    QPushButton *recherche_2;
    QPushButton *QR;
    QFrame *st;
    QPushButton *stat;
    QPushButton *stat_2;
    QLabel *qrlabel;
    QPushButton *return_2;
    QTableView *tab_employes;
    QWidget *page_8;
    QTableView *tabEnreg_2;
    QPushButton *return_7;
    QWidget *page_7;
    QGroupBox *groupBox_3;
    QLineEdit *le_id_3;
    QLabel *label_29;
    QPushButton *b_supprimer;
    QPushButton *return_3;
    QWidget *page_6;
    QGroupBox *groupBox_2;
    QLabel *label_12;
    QLabel *label_9;
    QLineEdit *le_id_2;
    QLineEdit *le_grade_2;
    QLabel *label_8;
    QLabel *label_7;
    QLineEdit *le_prenom_2;
    QLineEdit *le_nom_2;
    QLineEdit *le_adresse_2;
    QLabel *label_11;
    QLineEdit *le_date_naissance_2;
    QLabel *label_10;
    QPushButton *b_modifier;
    QPushButton *return_4;
    QWidget *page_5;
    QGroupBox *groupBox;
    QLabel *label_6;
    QLabel *label_3;
    QLineEdit *le_id;
    QLineEdit *le_grade;
    QLabel *label_2;
    QLabel *label_1;
    QLineEdit *le_prenom;
    QLineEdit *le_nom;
    QLineEdit *le_adresse;
    QLabel *label_5;
    QLineEdit *le_date_naissance;
    QLabel *label_4;
    QPushButton *ajouter;
    QPushButton *return_5;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *empp)
    {
        if (empp->objectName().isEmpty())
            empp->setObjectName(QStringLiteral("empp"));
        empp->resize(1051, 948);
        centralwidget = new QWidget(empp);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        SW = new QStackedWidget(centralwidget);
        SW->setObjectName(QStringLiteral("SW"));
        SW->setGeometry(QRect(20, 0, 1051, 851));
        SW->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
""));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        SW->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        WebBrowser = new WebAxWidget(page_2);
        WebBrowser->setControl(QStringLiteral("{8856F961-340A-11D0-A96B-00C04FD705A2}"));
        WebBrowser->setObjectName(QStringLiteral("WebBrowser"));
        WebBrowser->setProperty("focusPolicy", QVariant::fromValue(Qt::StrongFocus));
        WebBrowser->setProperty("geometry", QVariant(QRect(50, 70, 961, 681)));
        return_6 = new QPushButton(page_2);
        return_6->setObjectName(QStringLiteral("return_6"));
        return_6->setGeometry(QRect(10, 20, 131, 41));
        return_6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SW->addWidget(page_2);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        supp = new QPushButton(page_4);
        supp->setObjectName(QStringLiteral("supp"));
        supp->setGeometry(QRect(80, 190, 351, 91));
        supp->setStyleSheet(QLatin1String("QPushButton {\n"
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
        logout = new QPushButton(page_4);
        logout->setObjectName(QStringLiteral("logout"));
        logout->setGeometry(QRect(360, 40, 341, 81));
        logout->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 75 10pt \"MS Shell Dlg 2\";\n"
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
        b_modifier_2 = new QPushButton(page_4);
        b_modifier_2->setObjectName(QStringLiteral("b_modifier_2"));
        b_modifier_2->setGeometry(QRect(670, 180, 341, 91));
        b_modifier_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        afficher = new QPushButton(page_4);
        afficher->setObjectName(QStringLiteral("afficher"));
        afficher->setGeometry(QRect(90, 390, 341, 81));
        afficher->setStyleSheet(QLatin1String("QPushButton {\n"
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
        ajouter_2 = new QPushButton(page_4);
        ajouter_2->setObjectName(QStringLiteral("ajouter_2"));
        ajouter_2->setGeometry(QRect(670, 390, 341, 81));
        ajouter_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        map = new QPushButton(page_4);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(90, 560, 341, 81));
        map->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pointage = new QPushButton(page_4);
        pointage->setObjectName(QStringLiteral("pointage"));
        pointage->setGeometry(QRect(670, 560, 341, 81));
        pointage->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_9 = new QPushButton(page_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(380, 680, 331, 91));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SW->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        tri_nom = new QPushButton(page_3);
        tri_nom->setObjectName(QStringLiteral("tri_nom"));
        tri_nom->setGeometry(QRect(90, 40, 131, 41));
        tri_nom->setStyleSheet(QLatin1String("QPushButton {\n"
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
        recherche = new QLineEdit(page_3);
        recherche->setObjectName(QStringLiteral("recherche"));
        recherche->setGeometry(QRect(510, 40, 181, 41));
        pdf = new QPushButton(page_3);
        pdf->setObjectName(QStringLiteral("pdf"));
        pdf->setGeometry(QRect(830, 40, 141, 41));
        pdf->setStyleSheet(QLatin1String("QPushButton {\n"
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
        recherche_2 = new QPushButton(page_3);
        recherche_2->setObjectName(QStringLiteral("recherche_2"));
        recherche_2->setGeometry(QRect(360, 40, 131, 41));
        recherche_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        QR = new QPushButton(page_3);
        QR->setObjectName(QStringLiteral("QR"));
        QR->setGeometry(QRect(710, 430, 131, 41));
        QR->setStyleSheet(QLatin1String("QPushButton {\n"
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
        st = new QFrame(page_3);
        st->setObjectName(QStringLiteral("st"));
        st->setGeometry(QRect(40, 490, 521, 301));
        st->setFrameShape(QFrame::StyledPanel);
        st->setFrameShadow(QFrame::Raised);
        stat = new QPushButton(page_3);
        stat->setObjectName(QStringLiteral("stat"));
        stat->setGeometry(QRect(190, 440, 131, 41));
        stat->setStyleSheet(QLatin1String("QPushButton {\n"
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
        stat_2 = new QPushButton(page_3);
        stat_2->setObjectName(QStringLiteral("stat_2"));
        stat_2->setGeometry(QRect(910, 780, 121, 41));
        stat_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        qrlabel = new QLabel(page_3);
        qrlabel->setObjectName(QStringLiteral("qrlabel"));
        qrlabel->setGeometry(QRect(650, 490, 291, 271));
        return_2 = new QPushButton(page_3);
        return_2->setObjectName(QStringLiteral("return_2"));
        return_2->setGeometry(QRect(750, 780, 131, 41));
        return_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tab_employes = new QTableView(page_3);
        tab_employes->setObjectName(QStringLiteral("tab_employes"));
        tab_employes->setGeometry(QRect(70, 130, 921, 271));
        tab_employes->setStyleSheet(QStringLiteral("color:rgb(200, 141, 40);"));
        SW->addWidget(page_3);
        page_8 = new QWidget();
        page_8->setObjectName(QStringLiteral("page_8"));
        tabEnreg_2 = new QTableView(page_8);
        tabEnreg_2->setObjectName(QStringLiteral("tabEnreg_2"));
        tabEnreg_2->setGeometry(QRect(180, 140, 541, 251));
        tabEnreg_2->setStyleSheet(QStringLiteral("color:rgb(200, 141, 40);"));
        return_7 = new QPushButton(page_8);
        return_7->setObjectName(QStringLiteral("return_7"));
        return_7->setGeometry(QRect(710, 630, 131, 41));
        return_7->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SW->addWidget(page_8);
        page_7 = new QWidget();
        page_7->setObjectName(QStringLiteral("page_7"));
        groupBox_3 = new QGroupBox(page_7);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(150, 60, 781, 391));
        groupBox_3->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        le_id_3 = new QLineEdit(groupBox_3);
        le_id_3->setObjectName(QStringLiteral("le_id_3"));
        le_id_3->setGeometry(QRect(270, 130, 201, 41));
        label_29 = new QLabel(groupBox_3);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(90, 130, 121, 41));
        label_29->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        b_supprimer = new QPushButton(groupBox_3);
        b_supprimer->setObjectName(QStringLiteral("b_supprimer"));
        b_supprimer->setGeometry(QRect(320, 290, 121, 41));
        b_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
"	font: 75 10pt \"MS Shell Dlg 2\";\n"
"\n"
"color: #000000;\n"
"background: #87CEEB;\n"
"border: none;\n"
"border: 1px solid  #172e4e;\n"
"border-radius: 8px;\n"
"\n"
"}\n"
"QPushButton:hover {\n"
"color:#000000;\n"
"\n"
"background:#778899;\n"
"border: none;\n"
"}"));
        return_3 = new QPushButton(groupBox_3);
        return_3->setObjectName(QStringLiteral("return_3"));
        return_3->setGeometry(QRect(470, 290, 121, 41));
        return_3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SW->addWidget(page_7);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        groupBox_2 = new QGroupBox(page_6);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(60, 40, 931, 731));
        groupBox_2->setStyleSheet(QLatin1String("font: 75 10pt \"MS Shell Dlg 2\";\n"
"color: rgb(255, 255, 255);"));
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(130, 460, 131, 31));
        label_12->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(130, 280, 131, 31));
        label_9->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_id_2 = new QLineEdit(groupBox_2);
        le_id_2->setObjectName(QStringLiteral("le_id_2"));
        le_id_2->setGeometry(QRect(360, 160, 181, 31));
        le_grade_2 = new QLineEdit(groupBox_2);
        le_grade_2->setObjectName(QStringLiteral("le_grade_2"));
        le_grade_2->setGeometry(QRect(360, 470, 181, 31));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(130, 220, 131, 31));
        label_8->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(130, 160, 131, 31));
        label_7->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_prenom_2 = new QLineEdit(groupBox_2);
        le_prenom_2->setObjectName(QStringLiteral("le_prenom_2"));
        le_prenom_2->setGeometry(QRect(360, 280, 181, 31));
        le_nom_2 = new QLineEdit(groupBox_2);
        le_nom_2->setObjectName(QStringLiteral("le_nom_2"));
        le_nom_2->setGeometry(QRect(360, 221, 181, 31));
        le_adresse_2 = new QLineEdit(groupBox_2);
        le_adresse_2->setObjectName(QStringLiteral("le_adresse_2"));
        le_adresse_2->setGeometry(QRect(360, 400, 181, 31));
        label_11 = new QLabel(groupBox_2);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(130, 400, 131, 31));
        label_11->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_date_naissance_2 = new QLineEdit(groupBox_2);
        le_date_naissance_2->setObjectName(QStringLiteral("le_date_naissance_2"));
        le_date_naissance_2->setGeometry(QRect(360, 341, 181, 31));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(130, 340, 131, 31));
        label_10->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        b_modifier = new QPushButton(groupBox_2);
        b_modifier->setObjectName(QStringLiteral("b_modifier"));
        b_modifier->setGeometry(QRect(640, 600, 141, 41));
        b_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
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
        return_4 = new QPushButton(groupBox_2);
        return_4->setObjectName(QStringLiteral("return_4"));
        return_4->setGeometry(QRect(470, 600, 131, 41));
        return_4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SW->addWidget(page_6);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        groupBox = new QGroupBox(page_5);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(60, 40, 941, 691));
        groupBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 398, 131, 31));
        label_6->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
""));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(130, 250, 131, 31));
        label_3->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_id = new QLineEdit(groupBox);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(280, 150, 191, 31));
        le_grade = new QLineEdit(groupBox);
        le_grade->setObjectName(QStringLiteral("le_grade"));
        le_grade->setGeometry(QRect(280, 398, 191, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 198, 131, 31));
        label_2->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_1 = new QLabel(groupBox);
        label_1->setObjectName(QStringLiteral("label_1"));
        label_1->setGeometry(QRect(130, 150, 131, 31));
        label_1->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(280, 250, 191, 31));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(280, 200, 191, 31));
        le_adresse = new QLineEdit(groupBox);
        le_adresse->setObjectName(QStringLiteral("le_adresse"));
        le_adresse->setGeometry(QRect(280, 350, 191, 31));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 348, 131, 31));
        label_5->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_date_naissance = new QLineEdit(groupBox);
        le_date_naissance->setObjectName(QStringLiteral("le_date_naissance"));
        le_date_naissance->setGeometry(QRect(280, 300, 191, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 300, 131, 31));
        label_4->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        ajouter = new QPushButton(groupBox);
        ajouter->setObjectName(QStringLiteral("ajouter"));
        ajouter->setGeometry(QRect(490, 500, 111, 41));
        ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
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
        return_5 = new QPushButton(groupBox);
        return_5->setObjectName(QStringLiteral("return_5"));
        return_5->setGeometry(QRect(620, 500, 131, 41));
        return_5->setStyleSheet(QLatin1String("QPushButton {\n"
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
        SW->addWidget(page_5);
        empp->setCentralWidget(centralwidget);
        menubar = new QMenuBar(empp);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1051, 26));
        empp->setMenuBar(menubar);
        statusbar = new QStatusBar(empp);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        empp->setStatusBar(statusbar);

        retranslateUi(empp);

        SW->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(empp);
    } // setupUi

    void retranslateUi(QMainWindow *empp)
    {
        empp->setWindowTitle(QApplication::translate("empp", "MainWindow", Q_NULLPTR));
        return_6->setText(QApplication::translate("empp", "Return", Q_NULLPTR));
        supp->setText(QApplication::translate("empp", "Supprimer", Q_NULLPTR));
        logout->setText(QApplication::translate("empp", "Log-out", Q_NULLPTR));
        b_modifier_2->setText(QApplication::translate("empp", "Modifier", Q_NULLPTR));
        afficher->setText(QApplication::translate("empp", "Affichage", Q_NULLPTR));
        ajouter_2->setText(QApplication::translate("empp", "Ajouter", Q_NULLPTR));
        map->setText(QApplication::translate("empp", "Map", Q_NULLPTR));
        pointage->setText(QApplication::translate("empp", "Pointage", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("empp", "Fermer", Q_NULLPTR));
        tri_nom->setText(QApplication::translate("empp", "Tri par nom", Q_NULLPTR));
        pdf->setText(QApplication::translate("empp", "PDF", Q_NULLPTR));
        recherche_2->setText(QApplication::translate("empp", "Recherche ", Q_NULLPTR));
        QR->setText(QApplication::translate("empp", "QRcode", Q_NULLPTR));
        stat->setText(QApplication::translate("empp", "Statistique", Q_NULLPTR));
        stat_2->setText(QApplication::translate("empp", "Logout", Q_NULLPTR));
        qrlabel->setText(QString());
        return_2->setText(QApplication::translate("empp", "Return", Q_NULLPTR));
        return_7->setText(QApplication::translate("empp", "Return", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("empp", "Supprimer un employes:", Q_NULLPTR));
        label_29->setText(QApplication::translate("empp", "Id", Q_NULLPTR));
        b_supprimer->setText(QApplication::translate("empp", "Supprimer", Q_NULLPTR));
        return_3->setText(QApplication::translate("empp", "Return", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("empp", "Modifier un employes:", Q_NULLPTR));
        label_12->setText(QApplication::translate("empp", "Grade", Q_NULLPTR));
        label_9->setText(QApplication::translate("empp", "Pr\303\251nom", Q_NULLPTR));
        label_8->setText(QApplication::translate("empp", "Nom", Q_NULLPTR));
        label_7->setText(QApplication::translate("empp", "Id", Q_NULLPTR));
        label_11->setText(QApplication::translate("empp", "Adresse", Q_NULLPTR));
        label_10->setText(QApplication::translate("empp", "Date_naissance", Q_NULLPTR));
        b_modifier->setText(QApplication::translate("empp", "Modifier", Q_NULLPTR));
        return_4->setText(QApplication::translate("empp", "Return", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("empp", "Ajouter un employes:", Q_NULLPTR));
        label_6->setText(QApplication::translate("empp", "Grade", Q_NULLPTR));
        label_3->setText(QApplication::translate("empp", "Pr\303\251nom", Q_NULLPTR));
        label_2->setText(QApplication::translate("empp", "Nom", Q_NULLPTR));
        label_1->setText(QApplication::translate("empp", "Id", Q_NULLPTR));
        label_5->setText(QApplication::translate("empp", "Adresse", Q_NULLPTR));
        label_4->setText(QApplication::translate("empp", "Date_naissance", Q_NULLPTR));
        ajouter->setText(QApplication::translate("empp", "Ajouter", Q_NULLPTR));
        return_5->setText(QApplication::translate("empp", "Return", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class empp: public Ui_empp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPP_H

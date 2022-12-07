/********************************************************************************
** Form generated from reading UI file 'cit.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIT_H
#define UI_CIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_cit
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_8;
    QLineEdit *le_nom_c;
    QLineEdit *le_prenom_c;
    QLineEdit *la_nationalite_c;
    QLineEdit *le_cin_c;
    QLineEdit *adresse_c;
    QLineEdit *le_num_c;
    QDateEdit *la_date_c;
    QPushButton *pushButton_ajouter;
    QLabel *label_17;
    QLabel *label_18;
    QLineEdit *lemail_c;
    QComboBox *etat_c;
    QPushButton *pushButton_7;
    QWidget *tab_5;
    QGroupBox *groupBox_3;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLineEdit *le_nom_c_2;
    QLineEdit *le_prenom_c_2;
    QLineEdit *la_nationalite_c_2;
    QLineEdit *le_cin_c_2;
    QLineEdit *adresse_c_2;
    QLineEdit *le_num_c_2;
    QDateEdit *la_date_c_2;
    QLabel *label_26;
    QLabel *label_27;
    QLineEdit *lemail_c_2;
    QComboBox *etat_c_2;
    QPushButton *pushButton_modifier;
    QPushButton *pushButton_8;
    QWidget *tab_4;
    QGroupBox *groupBox_4;
    QTableView *tab_c;
    QLabel *label_14;
    QLineEdit *cin_s;
    QPushButton *pushButton_supprimer;
    QRadioButton *tri1_radioButton;
    QRadioButton *tri2_radioButton;
    QPushButton *pushButton_stat;
    QLabel *label_16;
    QLineEdit *cin_chercher;
    QPushButton *pushButton_chercher;
    QPushButton *pdf_pushButton;
    QPushButton *export_excel;
    QPushButton *qrcodegen_2;
    QLabel *qrcodecommande_2;
    QPushButton *pushButton_9;
    QWidget *tab_2;
    QGroupBox *groupBox_5;
    QLineEdit *rcpt;
    QLineEdit *mail_pass;
    QLineEdit *subject;
    QTextEdit *msg;
    QPushButton *sendBtn;
    QPushButton *browseBtn;
    QLineEdit *file;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *cit)
    {
        if (cit->objectName().isEmpty())
            cit->setObjectName(QStringLiteral("cit"));
        cit->resize(1184, 719);
        cit->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background: ;\n"
"background-color: ;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(cit);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1181, 651));
        tabWidget->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"border-top: 5px solid white ;\n"
"}\n"
"/* Style the tab using the tab sub-control. Note that it reads QTabBar not QTabWidget */\n"
"QTabBar::tab {\n"
"background: #FFFFFF;\n"
"border: 2px solid #172e4e;\n"
"border-bottom-color: #172e4e; /* same as the pane color */\n"
"border-top-left-radius:8px;\n"
"border-top-right-radius: 8px;\n"
"min-width: 140px;\n"
"padding: 8px;\n"
"color: \n"
"#172e4e;\n"
"\n"
"\n"
"}\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"background:\n"
"rgb(51, 105, 175)}\n"
"QTabBar::tab:selected {\n"
"border-color: #87CEEB;\n"
"border-bottom-color: #87CEEB; /* same as pane color */\n"
"color: white;\n"
";\n"
"\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 2px; /* make non-selected tabs look smaller */\n"
"}\n"
"QLineEdit {\n"
"  width: 100%;\n"
"  padding: 12px 20px;\n"
"  margin: 8px 0;\n"
"  display: inline-block;\n"
"  border: 1px solid #ccc;\n"
"  border-radius: 4px;\n"
"  box-sizing: border-box;\n"
"}"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 721, 511));
        groupBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 190, 211, 41));
        label->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 30, 141, 41));
        label_2->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 80, 121, 41));
        label_3->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(80, 290, 161, 41));
        label_4->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 130, 151, 41));
        label_5->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
""));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 240, 171, 41));
        label_6->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(80, 340, 191, 41));
        label_8->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_nom_c = new QLineEdit(groupBox);
        le_nom_c->setObjectName(QStringLiteral("le_nom_c"));
        le_nom_c->setGeometry(QRect(310, 20, 151, 61));
        le_nom_c->setStyleSheet(QStringLiteral(""));
        le_prenom_c = new QLineEdit(groupBox);
        le_prenom_c->setObjectName(QStringLiteral("le_prenom_c"));
        le_prenom_c->setGeometry(QRect(310, 80, 161, 61));
        le_prenom_c->setStyleSheet(QStringLiteral(""));
        la_nationalite_c = new QLineEdit(groupBox);
        la_nationalite_c->setObjectName(QStringLiteral("la_nationalite_c"));
        la_nationalite_c->setGeometry(QRect(310, 140, 161, 61));
        la_nationalite_c->setStyleSheet(QStringLiteral(""));
        le_cin_c = new QLineEdit(groupBox);
        le_cin_c->setObjectName(QStringLiteral("le_cin_c"));
        le_cin_c->setGeometry(QRect(310, 190, 201, 61));
        le_cin_c->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        adresse_c = new QLineEdit(groupBox);
        adresse_c->setObjectName(QStringLiteral("adresse_c"));
        adresse_c->setGeometry(QRect(310, 280, 201, 61));
        adresse_c->setStyleSheet(QStringLiteral(""));
        le_num_c = new QLineEdit(groupBox);
        le_num_c->setObjectName(QStringLiteral("le_num_c"));
        le_num_c->setGeometry(QRect(310, 330, 201, 61));
        le_num_c->setStyleSheet(QStringLiteral(""));
        la_date_c = new QDateEdit(groupBox);
        la_date_c->setObjectName(QStringLiteral("la_date_c"));
        la_date_c->setGeometry(QRect(310, 250, 191, 31));
        la_date_c->setStyleSheet(QStringLiteral(""));
        pushButton_ajouter = new QPushButton(groupBox);
        pushButton_ajouter->setObjectName(QStringLiteral("pushButton_ajouter"));
        pushButton_ajouter->setGeometry(QRect(540, 440, 141, 41));
        pushButton_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setGeometry(QRect(80, 390, 171, 41));
        label_17->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(80, 460, 151, 31));
        label_18->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        lemail_c = new QLineEdit(groupBox);
        lemail_c->setObjectName(QStringLiteral("lemail_c"));
        lemail_c->setGeometry(QRect(310, 390, 201, 61));
        lemail_c->setStyleSheet(QStringLiteral(""));
        etat_c = new QComboBox(groupBox);
        etat_c->setObjectName(QStringLiteral("etat_c"));
        etat_c->setGeometry(QRect(310, 460, 171, 31));
        etat_c->setStyleSheet(QStringLiteral(""));
        pushButton_7 = new QPushButton(groupBox);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(560, 350, 131, 41));
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
        tabWidget->addTab(tab, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        groupBox_3 = new QGroupBox(tab_5);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 10, 721, 511));
        groupBox_3->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_19 = new QLabel(groupBox_3);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(80, 80, 231, 31));
        label_19->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_20 = new QLabel(groupBox_3);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(80, 120, 221, 31));
        label_20->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_21 = new QLabel(groupBox_3);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setGeometry(QRect(80, 160, 161, 31));
        label_21->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(80, 290, 161, 31));
        label_22->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setGeometry(QRect(80, 210, 161, 31));
        label_23->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_24 = new QLabel(groupBox_3);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(80, 250, 171, 31));
        label_24->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setGeometry(QRect(80, 340, 191, 31));
        label_25->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_nom_c_2 = new QLineEdit(groupBox_3);
        le_nom_c_2->setObjectName(QStringLiteral("le_nom_c_2"));
        le_nom_c_2->setGeometry(QRect(340, 110, 171, 51));
        le_nom_c_2->setStyleSheet(QStringLiteral(""));
        le_prenom_c_2 = new QLineEdit(groupBox_3);
        le_prenom_c_2->setObjectName(QStringLiteral("le_prenom_c_2"));
        le_prenom_c_2->setGeometry(QRect(340, 150, 171, 51));
        le_prenom_c_2->setStyleSheet(QStringLiteral(""));
        la_nationalite_c_2 = new QLineEdit(groupBox_3);
        la_nationalite_c_2->setObjectName(QStringLiteral("la_nationalite_c_2"));
        la_nationalite_c_2->setGeometry(QRect(340, 200, 171, 51));
        la_nationalite_c_2->setStyleSheet(QStringLiteral(""));
        le_cin_c_2 = new QLineEdit(groupBox_3);
        le_cin_c_2->setObjectName(QStringLiteral("le_cin_c_2"));
        le_cin_c_2->setGeometry(QRect(340, 70, 171, 51));
        le_cin_c_2->setStyleSheet(QStringLiteral(""));
        adresse_c_2 = new QLineEdit(groupBox_3);
        adresse_c_2->setObjectName(QStringLiteral("adresse_c_2"));
        adresse_c_2->setGeometry(QRect(340, 280, 171, 51));
        adresse_c_2->setStyleSheet(QStringLiteral(""));
        le_num_c_2 = new QLineEdit(groupBox_3);
        le_num_c_2->setObjectName(QStringLiteral("le_num_c_2"));
        le_num_c_2->setGeometry(QRect(340, 330, 171, 51));
        le_num_c_2->setStyleSheet(QStringLiteral(""));
        la_date_c_2 = new QDateEdit(groupBox_3);
        la_date_c_2->setObjectName(QStringLiteral("la_date_c_2"));
        la_date_c_2->setGeometry(QRect(340, 250, 171, 31));
        la_date_c_2->setStyleSheet(QStringLiteral(""));
        label_26 = new QLabel(groupBox_3);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(80, 380, 191, 31));
        label_26->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_27 = new QLabel(groupBox_3);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setGeometry(QRect(80, 420, 181, 31));
        label_27->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        lemail_c_2 = new QLineEdit(groupBox_3);
        lemail_c_2->setObjectName(QStringLiteral("lemail_c_2"));
        lemail_c_2->setGeometry(QRect(340, 370, 171, 51));
        lemail_c_2->setStyleSheet(QStringLiteral(""));
        etat_c_2 = new QComboBox(groupBox_3);
        etat_c_2->setObjectName(QStringLiteral("etat_c_2"));
        etat_c_2->setGeometry(QRect(340, 420, 171, 31));
        etat_c_2->setStyleSheet(QStringLiteral(""));
        pushButton_modifier = new QPushButton(groupBox_3);
        pushButton_modifier->setObjectName(QStringLiteral("pushButton_modifier"));
        pushButton_modifier->setGeometry(QRect(560, 460, 141, 41));
        pushButton_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        pushButton_8 = new QPushButton(groupBox_3);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(560, 380, 131, 41));
        pushButton_8->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(tab_5, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        groupBox_4 = new QGroupBox(tab_4);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 10, 1131, 551));
        groupBox_4->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        tab_c = new QTableView(groupBox_4);
        tab_c->setObjectName(QStringLiteral("tab_c"));
        tab_c->setGeometry(QRect(10, 100, 781, 331));
        tab_c->setStyleSheet(QStringLiteral(""));
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(10, 450, 251, 31));
        label_14->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
""));
        cin_s = new QLineEdit(groupBox_4);
        cin_s->setObjectName(QStringLiteral("cin_s"));
        cin_s->setGeometry(QRect(270, 440, 221, 51));
        cin_s->setStyleSheet(QStringLiteral(""));
        pushButton_supprimer = new QPushButton(groupBox_4);
        pushButton_supprimer->setObjectName(QStringLiteral("pushButton_supprimer"));
        pushButton_supprimer->setGeometry(QRect(540, 440, 151, 41));
        pushButton_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        tri1_radioButton = new QRadioButton(groupBox_4);
        tri1_radioButton->setObjectName(QStringLiteral("tri1_radioButton"));
        tri1_radioButton->setGeometry(QRect(880, 30, 141, 41));
        tri1_radioButton->setStyleSheet(QLatin1String("QRadioButton {\n"
"background:#87CEEB;\n"
"border: none;\n"
"font-size:15px;\n"
"text-align: left;\n"
"border: 1px solid #87CEEB;\n"
"border-radius: 8px;\n"
"}\n"
"QRadioButton:hover {\n"
"color:#fff;\n"
"background:#535353;\n"
"border: none;\n"
"text-align: left;\n"
"}"));
        tri2_radioButton = new QRadioButton(groupBox_4);
        tri2_radioButton->setObjectName(QStringLiteral("tri2_radioButton"));
        tri2_radioButton->setGeometry(QRect(880, 80, 141, 31));
        tri2_radioButton->setStyleSheet(QLatin1String("QRadioButton {\n"
"\n"
"background:#87CEEB;\n"
"border: none;\n"
"font-size:15px;\n"
"text-align: left;\n"
"border: 1px solid #87CEEB;\n"
"border-radius: 8px;\n"
"}\n"
"QRadioButton:hover {\n"
"color:#fff;\n"
"background:#535353;\n"
"border: none;\n"
"text-align: left;\n"
"}"));
        pushButton_stat = new QPushButton(groupBox_4);
        pushButton_stat->setObjectName(QStringLiteral("pushButton_stat"));
        pushButton_stat->setGeometry(QRect(880, 160, 141, 41));
        pushButton_stat->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        label_16 = new QLabel(groupBox_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 59, 231, 31));
        label_16->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        cin_chercher = new QLineEdit(groupBox_4);
        cin_chercher->setObjectName(QStringLiteral("cin_chercher"));
        cin_chercher->setGeometry(QRect(250, 50, 191, 51));
        cin_chercher->setStyleSheet(QStringLiteral(""));
        pushButton_chercher = new QPushButton(groupBox_4);
        pushButton_chercher->setObjectName(QStringLiteral("pushButton_chercher"));
        pushButton_chercher->setGeometry(QRect(450, 58, 181, 41));
        pushButton_chercher->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        pdf_pushButton = new QPushButton(groupBox_4);
        pdf_pushButton->setObjectName(QStringLiteral("pdf_pushButton"));
        pdf_pushButton->setGeometry(QRect(880, 120, 141, 31));
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
"}\n"
""));
        export_excel = new QPushButton(groupBox_4);
        export_excel->setObjectName(QStringLiteral("export_excel"));
        export_excel->setGeometry(QRect(880, 207, 141, 31));
        export_excel->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        qrcodegen_2 = new QPushButton(groupBox_4);
        qrcodegen_2->setObjectName(QStringLiteral("qrcodegen_2"));
        qrcodegen_2->setGeometry(QRect(880, 240, 141, 28));
        qrcodegen_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        qrcodecommande_2 = new QLabel(groupBox_4);
        qrcodecommande_2->setObjectName(QStringLiteral("qrcodecommande_2"));
        qrcodecommande_2->setGeometry(QRect(799, 270, 281, 251));
        QFont font;
        font.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font.setPointSize(10);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(9);
        qrcodecommande_2->setFont(font);
        qrcodecommande_2->setWordWrap(true);
        pushButton_9 = new QPushButton(groupBox_4);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(550, 500, 131, 41));
        pushButton_9->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        tabWidget->addTab(tab_4, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_5 = new QGroupBox(tab_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        groupBox_5->setGeometry(QRect(20, 20, 1071, 511));
        groupBox_5->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        rcpt = new QLineEdit(groupBox_5);
        rcpt->setObjectName(QStringLiteral("rcpt"));
        rcpt->setGeometry(QRect(20, 20, 471, 51));
        rcpt->setStyleSheet(QStringLiteral(""));
        mail_pass = new QLineEdit(groupBox_5);
        mail_pass->setObjectName(QStringLiteral("mail_pass"));
        mail_pass->setGeometry(QRect(500, 20, 201, 51));
        mail_pass->setStyleSheet(QStringLiteral(""));
        mail_pass->setEchoMode(QLineEdit::Password);
        subject = new QLineEdit(groupBox_5);
        subject->setObjectName(QStringLiteral("subject"));
        subject->setGeometry(QRect(20, 60, 551, 51));
        subject->setStyleSheet(QStringLiteral(""));
        msg = new QTextEdit(groupBox_5);
        msg->setObjectName(QStringLiteral("msg"));
        msg->setGeometry(QRect(20, 120, 651, 301));
        msg->setStyleSheet(QStringLiteral(""));
        sendBtn = new QPushButton(groupBox_5);
        sendBtn->setObjectName(QStringLiteral("sendBtn"));
        sendBtn->setGeometry(QRect(450, 452, 181, 41));
        sendBtn->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        browseBtn = new QPushButton(groupBox_5);
        browseBtn->setObjectName(QStringLiteral("browseBtn"));
        browseBtn->setGeometry(QRect(580, 70, 121, 31));
        browseBtn->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        file = new QLineEdit(groupBox_5);
        file->setObjectName(QStringLiteral("file"));
        file->setGeometry(QRect(710, 100, 351, 61));
        file->setStyleSheet(QStringLiteral(""));
        pushButton_10 = new QPushButton(groupBox_5);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(280, 450, 131, 41));
        pushButton_10->setStyleSheet(QLatin1String("QPushButton {\n"
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
"}\n"
""));
        tabWidget->addTab(tab_2, QString());
        cit->setCentralWidget(centralwidget);
        menubar = new QMenuBar(cit);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1184, 28));
        cit->setMenuBar(menubar);
        statusbar = new QStatusBar(cit);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        cit->setStatusBar(statusbar);

        retranslateUi(cit);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(cit);
    } // setupUi

    void retranslateUi(QMainWindow *cit)
    {
        cit->setWindowTitle(QApplication::translate("cit", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("cit", "CIN / Num\303\251ro de passport :", Q_NULLPTR));
        label_2->setText(QApplication::translate("cit", "Nom :", Q_NULLPTR));
        label_3->setText(QApplication::translate("cit", "Pr\303\251nom :", Q_NULLPTR));
        label_4->setText(QApplication::translate("cit", "          Adresse :", Q_NULLPTR));
        label_5->setText(QApplication::translate("cit", "Nationalit\303\251 :", Q_NULLPTR));
        label_6->setText(QApplication::translate("cit", "Date de naissance :", Q_NULLPTR));
        label_8->setText(QApplication::translate("cit", "Num\303\251ro de t\303\251l\303\251phone :", Q_NULLPTR));
        le_nom_c->setPlaceholderText(QApplication::translate("cit", "nom*", Q_NULLPTR));
        le_prenom_c->setPlaceholderText(QApplication::translate("cit", "prenom*", Q_NULLPTR));
        la_nationalite_c->setPlaceholderText(QApplication::translate("cit", "tunisienne*", Q_NULLPTR));
        le_cin_c->setPlaceholderText(QApplication::translate("cit", "00000000", Q_NULLPTR));
        adresse_c->setPlaceholderText(QApplication::translate("cit", "tunis*", Q_NULLPTR));
        le_num_c->setPlaceholderText(QApplication::translate("cit", "00 000 000", Q_NULLPTR));
        pushButton_ajouter->setText(QApplication::translate("cit", "Ajouter", Q_NULLPTR));
        label_17->setText(QApplication::translate("cit", "           Email:", Q_NULLPTR));
        label_18->setText(QApplication::translate("cit", "          Etat:", Q_NULLPTR));
        lemail_c->setPlaceholderText(QApplication::translate("cit", "user@gmail.com*", Q_NULLPTR));
        etat_c->clear();
        etat_c->insertItems(0, QStringList()
         << QApplication::translate("cit", "Accuse", Q_NULLPTR)
         << QApplication::translate("cit", "Temoin", Q_NULLPTR)
         << QApplication::translate("cit", "Membre de public", Q_NULLPTR)
        );
        pushButton_7->setText(QApplication::translate("cit", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("cit", "Ajouter", Q_NULLPTR));
        groupBox_3->setTitle(QString());
        label_19->setText(QApplication::translate("cit", "CIN / Num\303\251ro de passport :", Q_NULLPTR));
        label_20->setText(QApplication::translate("cit", "Nom :", Q_NULLPTR));
        label_21->setText(QApplication::translate("cit", "Pr\303\251nom :", Q_NULLPTR));
        label_22->setText(QApplication::translate("cit", "Adresse :", Q_NULLPTR));
        label_23->setText(QApplication::translate("cit", "Nationalit\303\251 :", Q_NULLPTR));
        label_24->setText(QApplication::translate("cit", "Date de naissance :", Q_NULLPTR));
        label_25->setText(QApplication::translate("cit", "Num\303\251ro de t\303\251l\303\251phone :", Q_NULLPTR));
        le_nom_c_2->setPlaceholderText(QApplication::translate("cit", "nom*", Q_NULLPTR));
        le_prenom_c_2->setPlaceholderText(QApplication::translate("cit", "prenom*", Q_NULLPTR));
        la_nationalite_c_2->setPlaceholderText(QApplication::translate("cit", "tunisienne*", Q_NULLPTR));
        le_cin_c_2->setPlaceholderText(QApplication::translate("cit", "00000000", Q_NULLPTR));
        adresse_c_2->setPlaceholderText(QApplication::translate("cit", "tunis*", Q_NULLPTR));
        le_num_c_2->setPlaceholderText(QApplication::translate("cit", "00 000 000", Q_NULLPTR));
        label_26->setText(QApplication::translate("cit", "Email:", Q_NULLPTR));
        label_27->setText(QApplication::translate("cit", "Etat:", Q_NULLPTR));
        lemail_c_2->setPlaceholderText(QApplication::translate("cit", "user@gmail.com*", Q_NULLPTR));
        etat_c_2->clear();
        etat_c_2->insertItems(0, QStringList()
         << QApplication::translate("cit", "Accuse", Q_NULLPTR)
         << QApplication::translate("cit", "Temoin", Q_NULLPTR)
         << QApplication::translate("cit", "Membre de public", Q_NULLPTR)
        );
        pushButton_modifier->setText(QApplication::translate("cit", "Modifier", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("cit", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("cit", "Modifier", Q_NULLPTR));
        groupBox_4->setTitle(QString());
        label_14->setText(QApplication::translate("cit", "CIN / Num\303\251ro de passport :", Q_NULLPTR));
        cin_s->setPlaceholderText(QApplication::translate("cit", "00000000", Q_NULLPTR));
        pushButton_supprimer->setText(QApplication::translate("cit", "Supprimer", Q_NULLPTR));
        tri1_radioButton->setText(QApplication::translate("cit", "Tri par nom", Q_NULLPTR));
        tri2_radioButton->setText(QApplication::translate("cit", "Tri par pr\303\251nom", Q_NULLPTR));
        pushButton_stat->setText(QApplication::translate("cit", "Statistiques", Q_NULLPTR));
        label_16->setText(QApplication::translate("cit", "CIN / Num\303\251ro de passport :", Q_NULLPTR));
        cin_chercher->setPlaceholderText(QApplication::translate("cit", "00000000", Q_NULLPTR));
        pushButton_chercher->setText(QApplication::translate("cit", "Chercher", Q_NULLPTR));
        pdf_pushButton->setText(QApplication::translate("cit", "Imprimer", Q_NULLPTR));
        export_excel->setText(QApplication::translate("cit", "Excel", Q_NULLPTR));
        qrcodegen_2->setText(QApplication::translate("cit", "QR Code", Q_NULLPTR));
        qrcodecommande_2->setText(QString());
        pushButton_9->setText(QApplication::translate("cit", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("cit", "Afficher", Q_NULLPTR));
        groupBox_5->setTitle(QString());
        rcpt->setPlaceholderText(QApplication::translate("cit", "recipient", Q_NULLPTR));
        mail_pass->setPlaceholderText(QApplication::translate("cit", "your mail password", Q_NULLPTR));
        subject->setPlaceholderText(QApplication::translate("cit", "subject", Q_NULLPTR));
        msg->setPlaceholderText(QApplication::translate("cit", "type your message here ...", Q_NULLPTR));
        sendBtn->setText(QApplication::translate("cit", "Envoyer", Q_NULLPTR));
        browseBtn->setText(QApplication::translate("cit", "Browse ...", Q_NULLPTR));
        file->setPlaceholderText(QApplication::translate("cit", "attachement here", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("cit", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("cit", "Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cit: public Ui_cit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIT_H

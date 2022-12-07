/********************************************************************************
** Form generated from reading UI file 'avoc.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AVOC_H
#define UI_AVOC_H

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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_avoc
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QLineEdit *le_cin;
    QLineEdit *le_nom;
    QLineEdit *le_prenom;
    QLineEdit *le_num;
    QLineEdit *l_adresse;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *le_grade;
    QDateEdit *la_date;
    QPushButton *pb_ajouter;
    QPushButton *pb_modifier;
    QTableView *tab_avocat;
    QLabel *label_20;
    QLabel *label_19;
    QGroupBox *groupBox_3;
    QPushButton *pb_supprimer;
    QLineEdit *le_cin_supp;
    QLabel *label_9;
    QPushButton *pb_PDF;
    QRadioButton *rb_tri1;
    QRadioButton *rb_tri2;
    QPushButton *la_recherche;
    QLineEdit *le_rech;
    QPushButton *pb_stat;
    QPushButton *pushButton_7;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QPushButton *note;
    QLabel *label_8;
    QGroupBox *groupBox_4;
    QPushButton *cam;
    QLabel *label_10;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *avoc)
    {
        if (avoc->objectName().isEmpty())
            avoc->setObjectName(QStringLiteral("avoc"));
        avoc->resize(1194, 651);
        avoc->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;"));
        centralwidget = new QWidget(avoc);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(50, 10, 1121, 571));
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
        groupBox->setGeometry(QRect(10, 70, 591, 271));
        groupBox->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        le_cin = new QLineEdit(groupBox);
        le_cin->setObjectName(QStringLiteral("le_cin"));
        le_cin->setGeometry(QRect(100, 31, 151, 41));
        le_cin->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        le_nom = new QLineEdit(groupBox);
        le_nom->setObjectName(QStringLiteral("le_nom"));
        le_nom->setGeometry(QRect(100, 80, 151, 41));
        le_nom->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        le_prenom = new QLineEdit(groupBox);
        le_prenom->setObjectName(QStringLiteral("le_prenom"));
        le_prenom->setGeometry(QRect(100, 130, 141, 41));
        le_prenom->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        le_num = new QLineEdit(groupBox);
        le_num->setObjectName(QStringLiteral("le_num"));
        le_num->setGeometry(QRect(440, 120, 151, 41));
        le_num->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        l_adresse = new QLineEdit(groupBox);
        l_adresse->setObjectName(QStringLiteral("l_adresse"));
        l_adresse->setGeometry(QRect(440, 180, 141, 41));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 81, 31));
        label->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 90, 81, 31));
        label_2->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 140, 81, 31));
        label_3->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(260, 19, 121, 31));
        label_4->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(260, 70, 81, 31));
        label_5->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(260, 119, 181, 31));
        label_6->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(260, 170, 81, 31));
        label_7->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        le_grade = new QComboBox(groupBox);
        le_grade->setObjectName(QStringLiteral("le_grade"));
        le_grade->setGeometry(QRect(440, 71, 151, 31));
        le_grade->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        la_date = new QDateEdit(groupBox);
        la_date->setObjectName(QStringLiteral("la_date"));
        la_date->setGeometry(QRect(440, 21, 151, 31));
        la_date->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pb_ajouter = new QPushButton(groupBox);
        pb_ajouter->setObjectName(QStringLiteral("pb_ajouter"));
        pb_ajouter->setGeometry(QRect(290, 227, 101, 31));
        pb_ajouter->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_modifier = new QPushButton(groupBox);
        pb_modifier->setObjectName(QStringLiteral("pb_modifier"));
        pb_modifier->setGeometry(QRect(170, 227, 101, 31));
        pb_modifier->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tab_avocat = new QTableView(tab);
        tab_avocat->setObjectName(QStringLiteral("tab_avocat"));
        tab_avocat->setGeometry(QRect(630, 110, 461, 411));
        label_20 = new QLabel(tab);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(10, 20, 591, 31));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_20->setFont(font);
        label_20->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        label_19 = new QLabel(tab);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setGeometry(QRect(170, 350, 301, 31));
        label_19->setFont(font);
        label_19->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(140, 400, 311, 121));
        groupBox_3->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        pb_supprimer = new QPushButton(groupBox_3);
        pb_supprimer->setObjectName(QStringLiteral("pb_supprimer"));
        pb_supprimer->setGeometry(QRect(110, 77, 101, 31));
        pb_supprimer->setStyleSheet(QLatin1String("QPushButton {\n"
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
        le_cin_supp = new QLineEdit(groupBox_3);
        le_cin_supp->setObjectName(QStringLiteral("le_cin_supp"));
        le_cin_supp->setGeometry(QRect(90, 20, 211, 51));
        le_cin_supp->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(10, 30, 71, 31));
        label_9->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        pb_PDF = new QPushButton(tab);
        pb_PDF->setObjectName(QStringLiteral("pb_PDF"));
        pb_PDF->setGeometry(QRect(630, 70, 81, 28));
        pb_PDF->setStyleSheet(QLatin1String("QPushButton {\n"
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
        rb_tri1 = new QRadioButton(tab);
        rb_tri1->setObjectName(QStringLiteral("rb_tri1"));
        rb_tri1->setGeometry(QRect(720, 10, 121, 31));
        rb_tri1->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        rb_tri2 = new QRadioButton(tab);
        rb_tri2->setObjectName(QStringLiteral("rb_tri2"));
        rb_tri2->setGeometry(QRect(720, 69, 121, 31));
        rb_tri2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        la_recherche = new QPushButton(tab);
        la_recherche->setObjectName(QStringLiteral("la_recherche"));
        la_recherche->setGeometry(QRect(1000, 20, 101, 41));
        la_recherche->setStyleSheet(QLatin1String("QPushButton {\n"
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
        le_rech = new QLineEdit(tab);
        le_rech->setObjectName(QStringLiteral("le_rech"));
        le_rech->setGeometry(QRect(852, 10, 141, 51));
        le_rech->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pb_stat = new QPushButton(tab);
        pb_stat->setObjectName(QStringLiteral("pb_stat"));
        pb_stat->setGeometry(QRect(630, 10, 81, 31));
        pb_stat->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_7 = new QPushButton(tab);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(460, 430, 131, 41));
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
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(190, 150, 341, 211));
        groupBox_2->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        note = new QPushButton(groupBox_2);
        note->setObjectName(QStringLiteral("note"));
        note->setGeometry(QRect(90, 130, 141, 41));
        note->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(10, 70, 311, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(9);
        label_8->setFont(font1);
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(590, 150, 341, 211));
        groupBox_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        cam = new QPushButton(groupBox_4);
        cam->setObjectName(QStringLiteral("cam"));
        cam->setGeometry(QRect(100, 130, 121, 41));
        cam->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label_10 = new QLabel(groupBox_4);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(30, 70, 281, 31));
        label_10->setFont(font1);
        pushButton_8 = new QPushButton(tab_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(450, 430, 131, 41));
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
        tabWidget->addTab(tab_2, QString());
        avoc->setCentralWidget(centralwidget);
        menubar = new QMenuBar(avoc);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1194, 28));
        avoc->setMenuBar(menubar);
        statusbar = new QStatusBar(avoc);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        avoc->setStatusBar(statusbar);

        retranslateUi(avoc);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(avoc);
    } // setupUi

    void retranslateUi(QMainWindow *avoc)
    {
        avoc->setWindowTitle(QApplication::translate("avoc", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("avoc", "Ajout", Q_NULLPTR));
        label->setText(QApplication::translate("avoc", "CIN", Q_NULLPTR));
        label_2->setText(QApplication::translate("avoc", "Nom", Q_NULLPTR));
        label_3->setText(QApplication::translate("avoc", "Prenom", Q_NULLPTR));
        label_4->setText(QApplication::translate("avoc", "Date de naissance", Q_NULLPTR));
        label_5->setText(QApplication::translate("avoc", "Grade", Q_NULLPTR));
        label_6->setText(QApplication::translate("avoc", "Num\303\251ro de t\303\251l\303\251phone", Q_NULLPTR));
        label_7->setText(QApplication::translate("avoc", "Adresse", Q_NULLPTR));
        le_grade->clear();
        le_grade->insertItems(0, QStringList()
         << QApplication::translate("avoc", "Penaliste", Q_NULLPTR)
         << QApplication::translate("avoc", "Avocat d'affaires", Q_NULLPTR)
         << QApplication::translate("avoc", "Avocat d'affaires civiles", Q_NULLPTR)
        );
        pb_ajouter->setText(QApplication::translate("avoc", "Ajouter", Q_NULLPTR));
        pb_modifier->setText(QApplication::translate("avoc", "Modifier", Q_NULLPTR));
        label_20->setText(QApplication::translate("avoc", "Saisir les donn\303\251es de l'avocat \303\240 ajouter/Saisir les modifications en conservant le CIN", Q_NULLPTR));
        label_19->setText(QApplication::translate("avoc", "Saisir le CIN de l'avocat \303\240 supprimer", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("avoc", "Suppression", Q_NULLPTR));
        pb_supprimer->setText(QApplication::translate("avoc", "Supprimer", Q_NULLPTR));
        label_9->setText(QApplication::translate("avoc", "le CIN", Q_NULLPTR));
        pb_PDF->setText(QApplication::translate("avoc", "PDF", Q_NULLPTR));
        rb_tri1->setText(QApplication::translate("avoc", "Tri par nom", Q_NULLPTR));
        rb_tri2->setText(QApplication::translate("avoc", "Tri par prenom", Q_NULLPTR));
        la_recherche->setText(QApplication::translate("avoc", "Rechercher", Q_NULLPTR));
        pb_stat->setText(QApplication::translate("avoc", "Stats", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("avoc", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("avoc", "CRUD", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("avoc", "NOTEPAD", Q_NULLPTR));
        note->setText(QApplication::translate("avoc", "NotePad", Q_NULLPTR));
        label_8->setText(QApplication::translate("avoc", "Cliquer ici pour acceder a votre notepad", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("avoc", "Camera", Q_NULLPTR));
        cam->setText(QApplication::translate("avoc", "Camera", Q_NULLPTR));
        label_10->setText(QApplication::translate("avoc", "Cliquer ici pour acceder a la camera", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("avoc", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("avoc", "NotePad/Camera", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class avoc: public Ui_avoc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AVOC_H

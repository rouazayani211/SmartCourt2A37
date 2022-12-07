/********************************************************************************
** Form generated from reading UI file 'gerer_salles.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GERER_SALLES_H
#define UI_GERER_SALLES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gerer_salles
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QTableView *tableView_salle_ghatas;
    QPushButton *pushButton_supprimer_ghatas;
    QPushButton *pushButton_trier_ghatas;
    QLineEdit *lineEdit_recherche_ghatas;
    QLabel *label_3;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_ajoute_ghatas;
    QPushButton *pushButton_modifier_ghatas;
    QLineEdit *Line_Edit_capacite_ghatas;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_nbp_ghatas;
    QComboBox *comboBox_departement_ghatas;
    QComboBox *ComboBox_numsallemodif_ghatas;
    QLabel *label_6;
    QLabel *label_7;
    QDateEdit *dateEdit_res_ghatas;
    QComboBox *comboBox_etat_ghatas;
    QPushButton *pushButton_pdf_ghatas;
    QPushButton *pushButton_entree_ghatas;
    QPushButton *pushButton_sortie_ghatas;
    QPushButton *pushButton_10;
    QWidget *tab_2;
    QPushButton *pushButton_stat_ghatas;
    QPushButton *pushButton_11;
    QWidget *tab_3;
    QTableView *tableView_historique_ghatas;
    QPushButton *pushButton_12;

    void setupUi(QDialog *gerer_salles)
    {
        if (gerer_salles->objectName().isEmpty())
            gerer_salles->setObjectName(QStringLiteral("gerer_salles"));
        gerer_salles->resize(1310, 719);
        gerer_salles->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;"));
        tabWidget = new QTabWidget(gerer_salles);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 1271, 701));
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
        tabWidget->setTabShape(QTabWidget::Triangular);
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 10, 1251, 661));
        QFont font;
        font.setPointSize(14);
        groupBox->setFont(font);
        groupBox->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        tableView_salle_ghatas = new QTableView(groupBox);
        tableView_salle_ghatas->setObjectName(QStringLiteral("tableView_salle_ghatas"));
        tableView_salle_ghatas->setGeometry(QRect(530, 90, 711, 301));
        tableView_salle_ghatas->setStyleSheet(QStringLiteral(""));
        tableView_salle_ghatas->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        pushButton_supprimer_ghatas = new QPushButton(groupBox);
        pushButton_supprimer_ghatas->setObjectName(QStringLiteral("pushButton_supprimer_ghatas"));
        pushButton_supprimer_ghatas->setGeometry(QRect(530, 400, 121, 41));
        QFont font1;
        font1.setPointSize(12);
        pushButton_supprimer_ghatas->setFont(font1);
        pushButton_supprimer_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_trier_ghatas = new QPushButton(groupBox);
        pushButton_trier_ghatas->setObjectName(QStringLiteral("pushButton_trier_ghatas"));
        pushButton_trier_ghatas->setGeometry(QRect(1100, 47, 121, 31));
        pushButton_trier_ghatas->setFont(font1);
        pushButton_trier_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        lineEdit_recherche_ghatas = new QLineEdit(groupBox);
        lineEdit_recherche_ghatas->setObjectName(QStringLiteral("lineEdit_recherche_ghatas"));
        lineEdit_recherche_ghatas->setGeometry(QRect(810, 31, 151, 41));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(680, 40, 121, 31));
        label_3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        groupBox_3->setGeometry(QRect(40, 80, 471, 511));
        groupBox_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        pushButton_ajoute_ghatas = new QPushButton(groupBox_3);
        pushButton_ajoute_ghatas->setObjectName(QStringLiteral("pushButton_ajoute_ghatas"));
        pushButton_ajoute_ghatas->setGeometry(QRect(190, 360, 121, 28));
        pushButton_ajoute_ghatas->setFont(font1);
        pushButton_ajoute_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_modifier_ghatas = new QPushButton(groupBox_3);
        pushButton_modifier_ghatas->setObjectName(QStringLiteral("pushButton_modifier_ghatas"));
        pushButton_modifier_ghatas->setGeometry(QRect(190, 480, 121, 28));
        pushButton_modifier_ghatas->setFont(font1);
        pushButton_modifier_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        Line_Edit_capacite_ghatas = new QLineEdit(groupBox_3);
        Line_Edit_capacite_ghatas->setObjectName(QStringLiteral("Line_Edit_capacite_ghatas"));
        Line_Edit_capacite_ghatas->setGeometry(QRect(240, 54, 159, 34));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 104, 133, 28));
        label_4->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 420, 135, 28));
        label_5->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        label = new QLabel(groupBox_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 54, 87, 28));
        label->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 144, 181, 51));
        label_2->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        lineEdit_nbp_ghatas = new QLineEdit(groupBox_3);
        lineEdit_nbp_ghatas->setObjectName(QStringLiteral("lineEdit_nbp_ghatas"));
        lineEdit_nbp_ghatas->setGeometry(QRect(240, 150, 159, 34));
        comboBox_departement_ghatas = new QComboBox(groupBox_3);
        comboBox_departement_ghatas->setObjectName(QStringLiteral("comboBox_departement_ghatas"));
        comboBox_departement_ghatas->setGeometry(QRect(240, 104, 161, 31));
        ComboBox_numsallemodif_ghatas = new QComboBox(groupBox_3);
        ComboBox_numsallemodif_ghatas->setObjectName(QStringLiteral("ComboBox_numsallemodif_ghatas"));
        ComboBox_numsallemodif_ghatas->setGeometry(QRect(250, 420, 141, 31));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(10, 220, 211, 31));
        label_6->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(90, 290, 81, 21));
        label_7->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);\n"
"\n"
""));
        dateEdit_res_ghatas = new QDateEdit(groupBox_3);
        dateEdit_res_ghatas->setObjectName(QStringLiteral("dateEdit_res_ghatas"));
        dateEdit_res_ghatas->setGeometry(QRect(240, 220, 161, 31));
        comboBox_etat_ghatas = new QComboBox(groupBox_3);
        comboBox_etat_ghatas->setObjectName(QStringLiteral("comboBox_etat_ghatas"));
        comboBox_etat_ghatas->setGeometry(QRect(240, 270, 161, 41));
        pushButton_pdf_ghatas = new QPushButton(groupBox);
        pushButton_pdf_ghatas->setObjectName(QStringLiteral("pushButton_pdf_ghatas"));
        pushButton_pdf_ghatas->setGeometry(QRect(1080, 400, 141, 41));
        pushButton_pdf_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_entree_ghatas = new QPushButton(groupBox);
        pushButton_entree_ghatas->setObjectName(QStringLiteral("pushButton_entree_ghatas"));
        pushButton_entree_ghatas->setGeometry(QRect(700, 420, 93, 28));
        pushButton_entree_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_sortie_ghatas = new QPushButton(groupBox);
        pushButton_sortie_ghatas->setObjectName(QStringLiteral("pushButton_sortie_ghatas"));
        pushButton_sortie_ghatas->setGeometry(QRect(800, 420, 93, 28));
        pushButton_sortie_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_10 = new QPushButton(groupBox);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(530, 550, 131, 41));
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
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        pushButton_stat_ghatas = new QPushButton(tab_2);
        pushButton_stat_ghatas->setObjectName(QStringLiteral("pushButton_stat_ghatas"));
        pushButton_stat_ghatas->setGeometry(QRect(50, 30, 93, 28));
        pushButton_stat_ghatas->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(40, 590, 131, 41));
        pushButton_11->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tableView_historique_ghatas = new QTableView(tab_3);
        tableView_historique_ghatas->setObjectName(QStringLiteral("tableView_historique_ghatas"));
        tableView_historique_ghatas->setGeometry(QRect(310, 130, 571, 421));
        tableView_historique_ghatas->setStyleSheet(QStringLiteral(""));
        tableView_historique_ghatas->setLineWidth(1);
        tableView_historique_ghatas->setWordWrap(true);
        tableView_historique_ghatas->horizontalHeader()->setDefaultSectionSize(300);
        pushButton_12 = new QPushButton(tab_3);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(80, 590, 131, 41));
        pushButton_12->setStyleSheet(QLatin1String("QPushButton {\n"
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
        tabWidget->addTab(tab_3, QString());

        retranslateUi(gerer_salles);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(gerer_salles);
    } // setupUi

    void retranslateUi(QDialog *gerer_salles)
    {
        gerer_salles->setWindowTitle(QApplication::translate("gerer_salles", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QString());
        pushButton_supprimer_ghatas->setText(QApplication::translate("gerer_salles", "Supprimer", Q_NULLPTR));
        pushButton_trier_ghatas->setText(QApplication::translate("gerer_salles", "Trier", Q_NULLPTR));
        label_3->setText(QApplication::translate("gerer_salles", "Recherche", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("gerer_salles", "Ajout et modification", Q_NULLPTR));
        pushButton_ajoute_ghatas->setText(QApplication::translate("gerer_salles", "Ajouter", Q_NULLPTR));
        pushButton_modifier_ghatas->setText(QApplication::translate("gerer_salles", "Modifier", Q_NULLPTR));
        label_4->setText(QApplication::translate("gerer_salles", "D\303\251partement", Q_NULLPTR));
        label_5->setText(QApplication::translate("gerer_salles", "Numero salle", Q_NULLPTR));
        label->setText(QApplication::translate("gerer_salles", "Capacit\303\251", Q_NULLPTR));
        label_2->setText(QApplication::translate("gerer_salles", "Nombre publique", Q_NULLPTR));
        comboBox_departement_ghatas->clear();
        comboBox_departement_ghatas->insertItems(0, QStringList()
         << QApplication::translate("gerer_salles", "Administratif", Q_NULLPTR)
         << QApplication::translate("gerer_salles", "Judiciaire", Q_NULLPTR)
         << QApplication::translate("gerer_salles", "Commercial", Q_NULLPTR)
        );
        label_6->setText(QApplication::translate("gerer_salles", "Date de reservation", Q_NULLPTR));
        label_7->setText(QApplication::translate("gerer_salles", "Etat ", Q_NULLPTR));
        comboBox_etat_ghatas->clear();
        comboBox_etat_ghatas->insertItems(0, QStringList()
         << QApplication::translate("gerer_salles", "Reservee", Q_NULLPTR)
         << QApplication::translate("gerer_salles", "Non reservee", Q_NULLPTR)
        );
        pushButton_pdf_ghatas->setText(QApplication::translate("gerer_salles", "Gen\303\251rer PDF", Q_NULLPTR));
        pushButton_entree_ghatas->setText(QApplication::translate("gerer_salles", "entree", Q_NULLPTR));
        pushButton_sortie_ghatas->setText(QApplication::translate("gerer_salles", "sortie", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("gerer_salles", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("gerer_salles", "Gestion des salles", Q_NULLPTR));
        pushButton_stat_ghatas->setText(QApplication::translate("gerer_salles", "G\303\251nerer", Q_NULLPTR));
        pushButton_11->setText(QApplication::translate("gerer_salles", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("gerer_salles", "Statistique", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("gerer_salles", "Fermer", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("gerer_salles", "Historique", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class gerer_salles: public Ui_gerer_salles {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GERER_SALLES_H

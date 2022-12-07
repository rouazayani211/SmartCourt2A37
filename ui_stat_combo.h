/********************************************************************************
** Form generated from reading UI file 'stat_combo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_COMBO_H
#define UI_STAT_COMBO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stat_combo
{
public:
    QLabel *label_stat_2;
    QLabel *label_stat;
    QPushButton *pushButton_10;

    void setupUi(QDialog *stat_combo)
    {
        if (stat_combo->objectName().isEmpty())
            stat_combo->setObjectName(QStringLiteral("stat_combo"));
        stat_combo->resize(1183, 734);
        stat_combo->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_stat_2 = new QLabel(stat_combo);
        label_stat_2->setObjectName(QStringLiteral("label_stat_2"));
        label_stat_2->setGeometry(QRect(590, 0, 631, 551));
        label_stat = new QLabel(stat_combo);
        label_stat->setObjectName(QStringLiteral("label_stat"));
        label_stat->setGeometry(QRect(0, 0, 571, 541));
        pushButton_10 = new QPushButton(stat_combo);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(500, 660, 131, 41));
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

        retranslateUi(stat_combo);

        QMetaObject::connectSlotsByName(stat_combo);
    } // setupUi

    void retranslateUi(QDialog *stat_combo)
    {
        stat_combo->setWindowTitle(QApplication::translate("stat_combo", "Dialog", Q_NULLPTR));
        label_stat_2->setText(QString());
        label_stat->setText(QString());
        pushButton_10->setText(QApplication::translate("stat_combo", "Fermer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stat_combo: public Ui_stat_combo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_COMBO_H

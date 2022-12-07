/********************************************************************************
** Form generated from reading UI file 'stat_av.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STAT_AV_H
#define UI_STAT_AV_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_stat_av
{
public:
    QLabel *label_stat;
    QLabel *label_stat_2;
    QPushButton *pushButton_10;

    void setupUi(QDialog *stat_av)
    {
        if (stat_av->objectName().isEmpty())
            stat_av->setObjectName(QStringLiteral("stat_av"));
        stat_av->resize(1151, 666);
        stat_av->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_stat = new QLabel(stat_av);
        label_stat->setObjectName(QStringLiteral("label_stat"));
        label_stat->setGeometry(QRect(10, 60, 501, 561));
        label_stat_2 = new QLabel(stat_av);
        label_stat_2->setObjectName(QStringLiteral("label_stat_2"));
        label_stat_2->setGeometry(QRect(530, 50, 401, 561));
        pushButton_10 = new QPushButton(stat_av);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(980, 510, 131, 41));
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

        retranslateUi(stat_av);

        QMetaObject::connectSlotsByName(stat_av);
    } // setupUi

    void retranslateUi(QDialog *stat_av)
    {
        stat_av->setWindowTitle(QApplication::translate("stat_av", "Dialog", Q_NULLPTR));
        label_stat->setText(QString());
        label_stat_2->setText(QString());
        pushButton_10->setText(QApplication::translate("stat_av", "Fermer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class stat_av: public Ui_stat_av {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STAT_AV_H

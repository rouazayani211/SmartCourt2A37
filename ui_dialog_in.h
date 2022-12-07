/********************************************************************************
** Form generated from reading UI file 'dialog_in.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_IN_H
#define UI_DIALOG_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog_in
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox_4;
    QLabel *label_13;
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *password;
    QLineEdit *login;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *dialog_in)
    {
        if (dialog_in->objectName().isEmpty())
            dialog_in->setObjectName(QStringLiteral("dialog_in"));
        dialog_in->resize(800, 600);
        dialog_in->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;"));
        centralwidget = new QWidget(dialog_in);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        groupBox_4 = new QGroupBox(centralwidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(40, 70, 691, 421));
        groupBox_4->setStyleSheet(QLatin1String("color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        label_13 = new QLabel(groupBox_4);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(140, 190, 101, 41));
        label_13->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        pushButton = new QPushButton(groupBox_4);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(200, 270, 101, 41));
        pushButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        label = new QLabel(groupBox_4);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(140, 120, 101, 41));
        label->setStyleSheet(QLatin1String("background: rgb(250, 235, 215);\n"
"color: rgb(0, 0, 0);"));
        password = new QLineEdit(groupBox_4);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(280, 190, 221, 41));
        login = new QLineEdit(groupBox_4);
        login->setObjectName(QStringLiteral("login"));
        login->setGeometry(QRect(280, 120, 221, 41));
        dialog_in->setCentralWidget(centralwidget);
        menubar = new QMenuBar(dialog_in);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        dialog_in->setMenuBar(menubar);
        statusbar = new QStatusBar(dialog_in);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        dialog_in->setStatusBar(statusbar);

        retranslateUi(dialog_in);

        QMetaObject::connectSlotsByName(dialog_in);
    } // setupUi

    void retranslateUi(QMainWindow *dialog_in)
    {
        dialog_in->setWindowTitle(QApplication::translate("dialog_in", "MainWindow", Q_NULLPTR));
        groupBox_4->setTitle(QApplication::translate("dialog_in", "Login", Q_NULLPTR));
        label_13->setText(QApplication::translate("dialog_in", "Password", Q_NULLPTR));
        pushButton->setText(QApplication::translate("dialog_in", "Login", Q_NULLPTR));
        label->setText(QApplication::translate("dialog_in", "Email", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dialog_in: public Ui_dialog_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_IN_H

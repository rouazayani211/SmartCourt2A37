/********************************************************************************
** Form generated from reading UI file 'notepad.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPAD_H
#define UI_NOTEPAD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_notepad
{
public:
    QWidget *centralwidget;
    QPushButton *pb_exit;
    QPushButton *pb_save_as;
    QPushButton *pb_save;
    QPushButton *pb_paste;
    QPushButton *pb_print;
    QPushButton *pb_copy;
    QPushButton *pb_open;
    QPushButton *pb_cut;
    QPushButton *pb_undo;
    QPushButton *pb_redo;
    QTextEdit *textEdit;
    QPushButton *pb_new;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *notepad)
    {
        if (notepad->objectName().isEmpty())
            notepad->setObjectName(QStringLiteral("notepad"));
        notepad->resize(800, 600);
        notepad->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        centralwidget = new QWidget(notepad);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pb_exit = new QPushButton(centralwidget);
        pb_exit->setObjectName(QStringLiteral("pb_exit"));
        pb_exit->setGeometry(QRect(570, 500, 61, 28));
        pb_exit->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_save_as = new QPushButton(centralwidget);
        pb_save_as->setObjectName(QStringLiteral("pb_save_as"));
        pb_save_as->setGeometry(QRect(480, 60, 71, 28));
        pb_save_as->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_save = new QPushButton(centralwidget);
        pb_save->setObjectName(QStringLiteral("pb_save"));
        pb_save->setGeometry(QRect(390, 60, 61, 28));
        pb_save->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_paste = new QPushButton(centralwidget);
        pb_paste->setObjectName(QStringLiteral("pb_paste"));
        pb_paste->setGeometry(QRect(300, 120, 61, 28));
        pb_paste->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_print = new QPushButton(centralwidget);
        pb_print->setObjectName(QStringLiteral("pb_print"));
        pb_print->setGeometry(QRect(570, 60, 61, 28));
        pb_print->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_copy = new QPushButton(centralwidget);
        pb_copy->setObjectName(QStringLiteral("pb_copy"));
        pb_copy->setGeometry(QRect(210, 120, 61, 28));
        pb_copy->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_open = new QPushButton(centralwidget);
        pb_open->setObjectName(QStringLiteral("pb_open"));
        pb_open->setGeometry(QRect(300, 60, 61, 28));
        pb_open->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_cut = new QPushButton(centralwidget);
        pb_cut->setObjectName(QStringLiteral("pb_cut"));
        pb_cut->setGeometry(QRect(390, 120, 61, 28));
        pb_cut->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_undo = new QPushButton(centralwidget);
        pb_undo->setObjectName(QStringLiteral("pb_undo"));
        pb_undo->setGeometry(QRect(480, 120, 61, 28));
        pb_undo->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pb_redo = new QPushButton(centralwidget);
        pb_redo->setObjectName(QStringLiteral("pb_redo"));
        pb_redo->setGeometry(QRect(570, 120, 61, 28));
        pb_redo->setStyleSheet(QLatin1String("QPushButton {\n"
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
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 170, 481, 301));
        pb_new = new QPushButton(centralwidget);
        pb_new->setObjectName(QStringLiteral("pb_new"));
        pb_new->setGeometry(QRect(210, 60, 61, 28));
        pb_new->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(210, 490, 131, 41));
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
        notepad->setCentralWidget(centralwidget);
        menubar = new QMenuBar(notepad);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        notepad->setMenuBar(menubar);
        statusbar = new QStatusBar(notepad);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        notepad->setStatusBar(statusbar);

        retranslateUi(notepad);

        QMetaObject::connectSlotsByName(notepad);
    } // setupUi

    void retranslateUi(QMainWindow *notepad)
    {
        notepad->setWindowTitle(QApplication::translate("notepad", "MainWindow", Q_NULLPTR));
        pb_exit->setText(QApplication::translate("notepad", "Exit", Q_NULLPTR));
        pb_save_as->setText(QApplication::translate("notepad", "Save as", Q_NULLPTR));
        pb_save->setText(QApplication::translate("notepad", "Save", Q_NULLPTR));
        pb_paste->setText(QApplication::translate("notepad", "Paste", Q_NULLPTR));
        pb_print->setText(QApplication::translate("notepad", "Print", Q_NULLPTR));
        pb_copy->setText(QApplication::translate("notepad", "Copy", Q_NULLPTR));
        pb_open->setText(QApplication::translate("notepad", "Open", Q_NULLPTR));
        pb_cut->setText(QApplication::translate("notepad", "Cut", Q_NULLPTR));
        pb_undo->setText(QApplication::translate("notepad", "Undo", Q_NULLPTR));
        pb_redo->setText(QApplication::translate("notepad", "Redo", Q_NULLPTR));
        pb_new->setText(QApplication::translate("notepad", "New", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("notepad", "Fermer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class notepad: public Ui_notepad {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPAD_H

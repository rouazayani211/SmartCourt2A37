/********************************************************************************
** Form generated from reading UI file 'camera.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMERA_H
#define UI_CAMERA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include "qcameraviewfinder.h"

QT_BEGIN_NAMESPACE

class Ui_camera
{
public:
    QWidget *centralwidget;
    QPushButton *takeImageButton;
    QCameraViewfinder *viewfinder;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *camera)
    {
        if (camera->objectName().isEmpty())
            camera->setObjectName(QStringLiteral("camera"));
        camera->resize(800, 600);
        camera->setStyleSheet(QLatin1String("border: 1.3px solid rgb(200, 141, 40);\n"
"border-radius: 40px;\n"
"background-color: rgb(23, 46, 78);\n"
"border-radius: 9px;\n"
"padding: 0 2px;\n"
"color: rgb(255, 255, 255);\n"
"font: 75 10pt \"MS Shell Dlg 2\";"));
        centralwidget = new QWidget(camera);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        takeImageButton = new QPushButton(centralwidget);
        takeImageButton->setObjectName(QStringLiteral("takeImageButton"));
        takeImageButton->setGeometry(QRect(140, 450, 451, 41));
        takeImageButton->setStyleSheet(QLatin1String("QPushButton {\n"
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
        viewfinder = new QCameraViewfinder(centralwidget);
        viewfinder->setObjectName(QStringLiteral("viewfinder"));
        viewfinder->setGeometry(QRect(20, 50, 761, 371));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(620, 450, 131, 41));
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
        camera->setCentralWidget(centralwidget);
        menubar = new QMenuBar(camera);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 29));
        camera->setMenuBar(menubar);
        statusbar = new QStatusBar(camera);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        camera->setStatusBar(statusbar);

        retranslateUi(camera);

        QMetaObject::connectSlotsByName(camera);
    } // setupUi

    void retranslateUi(QMainWindow *camera)
    {
        camera->setWindowTitle(QApplication::translate("camera", "MainWindow", Q_NULLPTR));
        takeImageButton->setText(QApplication::translate("camera", "Capture Photo", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("camera", "Fermer", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class camera: public Ui_camera {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMERA_H

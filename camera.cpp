#include "camera.h"
#include "ui_camera.h"
#include <QMessageBox>

camera::camera(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::camera)
{
    ui->setupUi(this);

    //Camera devices:
    setCamera(QCameraInfo::defaultCamera());
}

camera::~camera()
{
    delete ui;
}

void camera::setCamera(const QCameraInfo &cameraInfo)
{
    Camera = new QCamera(cameraInfo);
    imageCapture = new QCameraImageCapture(Camera);
    Camera->setViewfinder(ui->viewfinder);
    connect(imageCapture, &QCameraImageCapture::readyForCaptureChanged, this, &camera::readyForCapture);
    Camera->start();
}


void camera::readyForCapture(bool ready)
{
    ui->takeImageButton->setEnabled(ready);
}

void camera::on_takeImageButton_clicked()
{
    isCapturingImage = true;
    imageCapture->capture();

        QMessageBox::information(nullptr, QObject::tr("check your images !"),
                    QObject::tr("photo has been taken !\n"
                                "Click Cancel to exit."), QMessageBox::Cancel);

}

void camera::on_pushButton_7_clicked()
{
    hide();
}

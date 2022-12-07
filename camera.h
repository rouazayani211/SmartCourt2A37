#ifndef CAMERA_H
#define CAMERA_H

#include <QMainWindow>
#include <QCamera>
#include <QCameraImageCapture>
#include <QMediaRecorder>

#include <QMediaService>
#include <QMediaRecorder>
#include <QCameraViewfinder>
#include <QCameraInfo>
#include <QMediaMetaData>

#include <QPalette>


namespace Ui {
class camera;
}

class camera : public QMainWindow
{
    Q_OBJECT

public:
    explicit camera(QWidget *parent = nullptr);
    ~camera();

private slots:
    void setCamera(const QCameraInfo &cameraInfo);
    void readyForCapture(bool ready);

    void on_takeImageButton_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::camera *ui;
    QCamera *Camera = nullptr;
    QCameraImageCapture *imageCapture = nullptr;
    QMediaRecorder* mediaRecorder = nullptr;

    QImageEncoderSettings imageSettings;
    QAudioEncoderSettings audioSettings;
    QVideoEncoderSettings videoSettings;
    QString videoContainerFormat;
    bool isCapturingImage = false;
    bool applicationExiting = false;
};

#endif // CAMERA_H

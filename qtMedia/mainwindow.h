#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMainWindow>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QVideoWidget>
#include <QCameraInfo>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QFileDialog>
#include <QMessageBox>
#include <QComboBox>
#include <QToolBar>
#include <QMenuBar>
#include <QMenu>
#include <QAction>
#include<iostream>
using namespace std;
#include "qmyvideowidget.h"
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnFile_clicked();

    void on_btnRemove_clicked();

    void on_btnAdd_clicked();

    void on_listWidgetFiles_clicked(const QModelIndex &index);

    void onstateChanged(QMediaPlayer::State state);
    void onDurationChanged(qint64 duration);
    void onPositionChanged(qint64 position);

    void on_btnPlay_clicked();

    void on_btnStop_clicked();

    void on_btnPause_clicked();

    void on_btnSound_clicked();

    void on_sliderVolumn_valueChanged(int value);

    void on_sliderPosition_valueChanged(int value);

    void on_listWidgetFiles_doubleClicked(const QModelIndex &index);

    void on_btnPush_clicked();

    void on_btnPre_clicked();

    void on_btnSuf_clicked();
    void comboxFileChangeIndex();
    void changeMode(int v);
private:
    Ui::MainWindow *ui;
    int curFileListIndex;
    QString curFile;
    QList<QString> listItems;
    QMediaPlayer    *player;//视频播放器
    QString  durationTime;
    QString  positionTime;
    QComboBox *fileToolComboBox;
    //文字处理、绘图、图像、音频视频
    enum Opt{Draw,Word,Video};
    void createToolBar();
};

#endif // MAINWINDOW_H

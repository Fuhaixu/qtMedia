#ifndef IMAGEDLG_H
#define IMAGEDLG_H

#include <QDialog>
#include <QProcess>
#include <QGraphicsPixmapItem>
#include <QFileDialog>
#include <QMessageBox>
#include <QInputDialog>
#include <QLabel>
#include <QDebug>
#include <QStandardPaths>
#include <QTranslator>
#include <QFileDialog>
#include "../utils/tools.h"
namespace Ui {
class imageDlg;
}

class imageDlg : public QDialog
{
    Q_OBJECT

public:
    explicit imageDlg(QWidget *parent = 0);
    ~imageDlg();

private slots:
    void on_commandLinkButton_clicked();

    void on_bntShowImg_clicked();

    void on_bntGray_clicked();

    void on_horizontalSlider_valueChanged(int value);

    void on_bntBlack_clicked();

    void on_btnReset_clicked();

    void on_pushButton_clicked();

    void on_btnDetect_clicked();

private:
    Ui::imageDlg *ui;
    QPixmap *pPixmap;
    QPixmap *curPixmap;
    void resetPixmap();

};

#endif // IMAGEDLG_H

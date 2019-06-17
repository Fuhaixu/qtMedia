#include "center.h"
#include "ui_center.h"
#include"drawdlg.h"
#include"vediodlg.h"
#include"fileeidtdlg.h"
#include"clockdlg.h"
#include"imagedlg.h"
Center::Center(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Center)
{
    ui->setupUi(this);
    this->setWindowTitle("控制面板");
}

Center::~Center()
{
    delete ui;
}

void Center::on_btnDraw_clicked()
{
    this->close();
    DrawDlg dw;
    dw.exec();
}

void Center::on_btnVideo_clicked()
{

    this->close();
    VedioDlg v;
    v.exec();
}

void Center::on_btnEdit_clicked()
{
    this->close();
    FileEidtDlg few;
    few.exec();
}

void Center::on_btnClock_clicked()
{
    this->close();
    ClockDlg d;
    d.exec();
}

void Center::on_btnImgProcessing_clicked()
{
    this->close();
    imageDlg d;
    d.exec();
}

#include "clockdlg.h"
#include "ui_clockdlg.h"
#include"center.h"
ClockDlg::ClockDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClockDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("时钟动画");
}

ClockDlg::~ClockDlg()
{
    delete ui;
}

void ClockDlg::on_commandLinkButton_clicked()
{
    this->close();
    Center center;
    center.exec();
}

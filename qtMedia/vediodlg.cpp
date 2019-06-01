#include "vediodlg.h"
#include "ui_vediodlg.h"

VedioDlg::VedioDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VedioDlg)
{
    ui->setupUi(this);
}

VedioDlg::~VedioDlg()
{
    delete ui;
}

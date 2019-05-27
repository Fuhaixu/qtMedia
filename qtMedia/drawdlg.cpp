#include "drawdlg.h"
#include "ui_drawdlg.h"

DrawDlg::DrawDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrawDlg)
{
    ui->setupUi(this);
}

DrawDlg::~DrawDlg()
{
    delete ui;
}

#include "fileeidtdlg.h"
#include "ui_fileeidtdlg.h"

FileEidtDlg::FileEidtDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileEidtDlg)
{
    ui->setupUi(this);
}

FileEidtDlg::~FileEidtDlg()
{
    delete ui;
}

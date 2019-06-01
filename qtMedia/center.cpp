#include "center.h"
#include "ui_center.h"

Center::Center(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Center)
{
    ui->setupUi(this);
}

Center::~Center()
{
    delete ui;
}

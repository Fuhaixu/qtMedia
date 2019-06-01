#ifndef VEDIODLG_H
#define VEDIODLG_H

#include <QDialog>

namespace Ui {
class VedioDlg;
}

class VedioDlg : public QDialog
{
    Q_OBJECT

public:
    explicit VedioDlg(QWidget *parent = 0);
    ~VedioDlg();

private:
    Ui::VedioDlg *ui;
};

#endif // VEDIODLG_H

#ifndef CLOCKDLG_H
#define CLOCKDLG_H

#include <QDialog>

namespace Ui {
class ClockDlg;
}

class ClockDlg : public QDialog
{
    Q_OBJECT

public:
    explicit ClockDlg(QWidget *parent = 0);
    ~ClockDlg();

private slots:
    void on_commandLinkButton_clicked();

private:
    Ui::ClockDlg *ui;
};

#endif // CLOCKDLG_H

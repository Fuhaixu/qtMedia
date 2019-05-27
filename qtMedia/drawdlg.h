#ifndef DRAWDLG_H
#define DRAWDLG_H

#include <QDialog>

namespace Ui {
class DrawDlg;
}

class DrawDlg : public QDialog
{
    Q_OBJECT

public:
    explicit DrawDlg(QWidget *parent = 0);
    ~DrawDlg();

private:
    Ui::DrawDlg *ui;
};

#endif // DRAWDLG_H

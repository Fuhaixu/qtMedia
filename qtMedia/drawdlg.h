#ifndef DRAWDLG_H
#define DRAWDLG_H

#include <QDialog>
#include <QColorDialog>
#include"drawwidget.h"
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
public slots:
    void SlotStyle();
    void SlotColor();
    void SlotShape(int);
private slots:
    void on_commandLinkButton_clicked();
};

#endif // DRAWDLG_H

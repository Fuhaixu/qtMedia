#ifndef CENTER_H
#define CENTER_H

#include <QDialog>

namespace Ui {
class Center;
}

class Center : public QDialog
{
    Q_OBJECT

public:
    explicit Center(QWidget *parent = 0);
    ~Center();

private slots:
    void on_btnDraw_clicked();

    void on_btnVideo_clicked();

    void on_btnEdit_clicked();

    void on_btnDraw_2_clicked();

private:
    Ui::Center *ui;
};

#endif // CENTER_H

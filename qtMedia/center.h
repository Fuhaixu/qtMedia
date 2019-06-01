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

private:
    Ui::Center *ui;
};

#endif // CENTER_H

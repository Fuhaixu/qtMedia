#ifndef CLOCKWIDGET_H
#define CLOCKWIDGET_H

#include <QWidget>
#include <QRectF>
#include<QLineEdit>
class ClockWidget : public QWidget
{
    Q_OBJECT
public:
    explicit ClockWidget(QWidget *parent = 0);
    QRectF textRectF(double radius,int pointSize,double angle);
    void paintEvent(QPaintEvent *event);
signals:
private:
 QLineEdit *timeEdit;
public slots:
};

#endif // CLOCKWIDGET_H

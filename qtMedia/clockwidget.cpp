#include "clockwidget.h"
#include<QTimer>
#include<QTime>
#include<QPoint>
#include<QtAlgorithms>
#include<QPainter>
#include<QFont>
#include <QtCore/qmath.h>
ClockWidget::ClockWidget(QWidget *parent) : QWidget(parent)
{
    QTimer *timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(update()));
    timer->start(1000);
}

QRectF ClockWidget::textRectF(double radius, int pointSize, double angle){
    QRectF rectF;
    rectF.setX(radius*qCos(angle*M_PI/180.0) - pointSize*2+3);
    rectF.setY(radius*qSin(angle*M_PI/180.0) - pointSize/2.0-3);
    rectF.setWidth(pointSize*4);
    rectF.setHeight(pointSize*1.5);
    return rectF;
}
void ClockWidget::paintEvent(QPaintEvent *event){
    Q_UNUSED(event);

    static const QPoint hourHand[3]={
      QPoint(7,8),QPoint(-7,8),QPoint(0,-30)
    };

    static const QPoint minHand[3]={
        QPoint(7, 8),QPoint(-7, 8),QPoint(0, -65)
    };
    static const QPoint secHand[3]={
        QPoint(7, 8),QPoint(-7, 8),QPoint(0, -80)
    };

    // 时针、分针、秒针颜色
    QColor hourColor(200, 100, 0, 200);
    QColor minuteColor(0, 127, 127, 150);
    QColor secondColor(0, 160, 230, 150);

    int side = qMin(width(), height());
    QTime time = QTime::currentTime();

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.translate(width()/2,height()/2);
    painter.scale(side/200,side/200);

    painter.setPen(Qt::NoPen);
    painter.setBrush(hourColor);
    painter.save();

    painter.rotate(30.0 * ((time.hour() + time.minute() / 60.0)));
    painter.drawConvexPolygon(hourHand, 3);
    painter.restore();

    painter.setPen(hourColor);
    for (int i = 0; i < 12; ++i) {
        painter.drawLine(88, 0, 96, 0);
        painter.rotate(30.0);
    }

    int radius = 100;
    QFont font = painter.font();
    font.setBold(true);
    painter.setFont(font);
    int pointSize = font.pointSize();

    // 绘制小时文本
    int nHour = 0;
    for (int i = 0; i < 12; ++i) {
       nHour = i + 3;
       if (nHour > 12)
           nHour -= 12;
       painter.drawText(textRectF(radius*0.8, pointSize, i * 30),
                        Qt::AlignCenter, QString::number(nHour));
    }
    // 绘制分针
    painter.setPen(Qt::NoPen);
    painter.setBrush(minuteColor);

    painter.save();
    // 每圈360° = 60m 即：旋转角度 = 分钟数 * 6°
    painter.rotate(6.0 * (time.minute() + time.second() / 60.0));
    painter.drawConvexPolygon(minHand, 3);
    painter.restore();

    painter.setPen(minuteColor);

    // 绘制分钟线 （360度 / 60 = 6度）
    for (int j = 0; j < 60; ++j) {
      if ((j % 5) != 0)
          painter.drawLine(92, 0, 96, 0);
      painter.rotate(6.0);
    }
    // 绘制秒针
    painter.setPen(Qt::NoPen);
    painter.setBrush(secondColor);

    painter.save();
    // 每圈360° = 60s 即：旋转角度 = 秒数 * 6°
    painter.rotate(6.0 * time.second());
    painter.drawConvexPolygon(secHand, 3);
    painter.restore();
}

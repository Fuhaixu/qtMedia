#ifndef DRAWWIDGET_H
#define DRAWWIDGET_H

#include <QWidget>
#include <QtGui>
#include <QMouseEvent>
#include <QPaintEvent>
#include <QResizeEvent>
#include <QColor>
#include <QPixmap>
#include <QPoint>
#include <QPainter>
#include <QPalette>
#include <QStack>
#include <QFile>
class DrawWidget : public QWidget
{
    Q_OBJECT
public:
    enum Shape{Doodle,Line,Rectangle,RoundRect,Ellipse,Polygon,Polyline,Points,Arc,Path,Text,Pixmap};
    enum Opt{Open,Close};
    explicit DrawWidget(QWidget *parent = 0);
    void mousePressEvent(QMouseEvent *);
    void mouseMoveEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent* );
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);
signals:

public slots:
    void setStyle(int);
    void setWidth(int);
    void setColor(QColor);
    void clear();
    void setShape(Shape);
    void undo();
private:
    QPixmap *pix;
    QPoint startPos;
    QPoint endPos;
    int style;
    int weight;
    Shape shape;
    QColor color;//前景色
    QStack<QString> pixStack;
    void copySrc();
};

#endif // DRAWWIDGET_H

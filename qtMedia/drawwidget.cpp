#include "drawwidget.h"
#include <QtGui>
#include <QPen>
#include<QRect>
#include<iostream>
#include<QFileDialog>
#include<cstdlib>
using namespace std;
DrawWidget::DrawWidget(QWidget *parent) : QWidget(parent)
{
    setAutoFillBackground(true);    	//对窗体背景色的设置
    setPalette(QPalette(Qt::white));
    pix =new QPixmap(size());           //此QPixmap对象用来准备随时接收绘制的内容
    pix->fill(Qt::white);            	//填充背景色为白色
    setMinimumSize(600,400);            //设置绘制区窗体的最小尺寸
    this->setShape(Doodle);
    this->setWidth(1);
}
void DrawWidget::setStyle(int s)
{
    style = s;
}
void DrawWidget::setWidth(int w)
{
    weight = w;
}
void DrawWidget::setColor(QColor c)
{
    color = c;
}
void DrawWidget::mousePressEvent(QMouseEvent *e)
{
    this->copySrc();
    startPos = e->pos();
}
void DrawWidget::mouseMoveEvent(QMouseEvent *e)
{
    if(shape==Doodle){
        QPainter *painter = new QPainter;
        QPen pen;								//新建一个QPen对象
        pen.setStyle((Qt::PenStyle)style);
        pen.setWidth(weight);					//设置画笔的线宽值
        pen.setColor(color);					//设置画笔的颜色
        painter->begin(pix);
        painter->setPen(pen);					//将QPen对象应用到绘制对象中
        painter->drawLine(startPos,e->pos());
        //绘制从startPos到鼠标当前位置的直线
        startPos =e->pos();
        painter->end();
    }		//更新鼠标的当前位置，为下次绘制做准备
    update();						//重绘绘制区窗体
}

void DrawWidget::mouseReleaseEvent(QMouseEvent *e){
    endPos=e->pos();
    if(shape!=Doodle){
        QPainter *painter = new QPainter;
        QPen pen;								//新建一个QPen对象
        pen.setStyle((Qt::PenStyle)style);
        pen.setWidth(weight);					//设置画笔的线宽值
        pen.setColor(color);					//设置画笔的颜色
        painter->begin(pix);
        painter->setPen(pen);					//将QPen对象应用到绘制对象中
        QRect rect(startPos,endPos);
        switch(shape){
            case Line:painter->drawLine(startPos,endPos);break;
            case Rectangle:painter->drawRect(rect);break;
            case Ellipse:painter->drawEllipse(rect);break;
            case RoundRect:painter->drawRoundRect(rect);break;
        default:break;
        }
        painter->end();
    }
    update();
}


void DrawWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(QPoint(0,0),*pix);
}

void DrawWidget::resizeEvent(QResizeEvent *event)
{
    if(height()>pix->height()||width()>pix->width())
    {
        QPixmap *newPix = new QPixmap(size());	//创建一个新的QPixmap对象
        newPix->fill(Qt::white);                //填充新QPixmap对象newPix的颜色为白色背景色
        QPainter p(newPix);
        p.drawPixmap(QPoint(0,0),*pix);         //在newPix中绘制原pix中的内容
        pix = newPix;                           //将newPix赋值给pix作为新的绘制图形接收对象
    }
    QWidget::resizeEvent(event);                //完成其余的工作
}

void DrawWidget::clear()
{
    this->copySrc();
    QPixmap *clearPix =new QPixmap(size());
    clearPix->fill(Qt::white);
    pix = clearPix;
    update();
}

void DrawWidget::setShape(Shape s){
    this->shape=s;
}

void DrawWidget::copySrc(){
    QString i=QString::number(pixStack.size()+1);
    pix->save("undoStack\\"+i+".png");
    pixStack.push_back("undoStack\\"+i+".png");
}

//撤回
void DrawWidget::undo(){
    if(pixStack.size()!=0){
        QString fileStr=pixStack.at(pixStack.size()-1);
        pixStack.pop_back();
        pix->load(fileStr);
        QFile file(fileStr);
        file.remove();
        update();
    }
}

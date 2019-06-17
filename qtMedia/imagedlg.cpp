#include "imagedlg.h"
#include "ui_imagedlg.h"
#include"center.h"
imageDlg::imageDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::imageDlg)
{
    ui->setupUi(this);
    setWindowTitle("图像处理");

}

imageDlg::~imageDlg()
{
    delete ui;
}



void imageDlg::on_commandLinkButton_clicked()
{
    this->close();
    Center center;
    center.exec();
}



void imageDlg::on_bntShowImg_clicked()
{

    QString filter="所有文件(*.*);;视频文件(*.jpg,.*.png,*.bmp)"; //文件过滤器
    QString file=QFileDialog::getOpenFileName(
                                         this,tr("选择文件"),QDir::currentPath(),filter);
       pPixmap=new QPixmap(file);
       curPixmap=new QPixmap(file);
       ui->label->setPixmap(*pPixmap);

}

void imageDlg::on_bntGray_clicked()
{
  QImage image=pPixmap->toImage();
  QColor oldColor;
  int width=image.width();
  int height=image.height();
  for(int y=0;y<height;y++)
  {
         for(int x=0;x<width;x++)
         {
             oldColor = QColor(image.pixel(x,y));
             int ave = (oldColor.red()+oldColor.green()+oldColor.blue())/3;
             image.setPixel(x,y,qRgb(ave,ave,ave));
         }
  }
  QPixmap ConvertPixmap=QPixmap::fromImage(image);
  ui->label->setPixmap(ConvertPixmap);

 }

void imageDlg::on_horizontalSlider_valueChanged(int value)
{
    resetPixmap();
    QImage  image=pPixmap->toImage();
        unsigned char *pData=image.bits();

        int width=image.width();
        int height=image.height();

        for(int i=0;i<height;i++)
        {
               for(int j=0;j<width;j++)
               {
                    *(pData+(i*width+j)*4)=(*(pData+(i*width+j)*4)*value/100);
                    *(pData+(i*width+j)*4+1)=(*(pData+(i*width+j)*4+1)*value/100);
                    *(pData+(i*width+j)*4+2)=(*(pData+(i*width+j)*4+2)*value/100);
               }
        }
        QPixmap ConvertPixmap=QPixmap::fromImage(image);
        ui->label->setPixmap(ConvertPixmap);

}

void imageDlg::on_bntBlack_clicked()
{
    resetPixmap();
    QImage  image=pPixmap->toImage();
    unsigned char *pData=image.bits();

    int width=image.width();
    int height=image.height();
    //全部像素置黑
    for(int i=0;i<height;i++)
    {
           for(int j=0;j<width;j++)
           {
                *(pData+(i*width+j)*4)=0;      //B
                *(pData+(i*width+j)*4+1)=0;    //G
                *(pData+(i*width+j)*4+2)=0;    //R
           }
    }
    QPixmap ConvertPixmap=QPixmap::fromImage(image);
    ui->label->setPixmap(ConvertPixmap);
}


void imageDlg::on_btnReset_clicked()
{
    resetPixmap();
}


void imageDlg::resetPixmap(){
    pPixmap->convertFromImage(curPixmap->toImage());
    ui->label->setPixmap(*pPixmap);
}

void imageDlg::on_pushButton_clicked()
{
    resetPixmap();
    GaussianBlur *blur = new GaussianBlur(5, 5);

    QImage image = pPixmap->toImage();

    QImage newImage = blur->BlurImage(image);
    pPixmap->convertFromImage(newImage);
    ui->label->setPixmap(*pPixmap);
}


void imageDlg::on_btnDetect_clicked()
{
    resetPixmap();
     QImage image = pPixmap->toImage();
    QImage newImage = Tools::PrewittEdge(image);
    pPixmap->convertFromImage(newImage);
    ui->label->setPixmap(*pPixmap);
}


#include "drawdlg.h"
#include "ui_drawdlg.h"
#include"center.h"

DrawDlg::DrawDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DrawDlg)
{
    ui->setupUi(this);
    this->setWindowTitle("绘图");
    setMinimumSize(650,400);
    ui->comBoxStyle->addItem(tr("SolidLine"),
                               static_cast<int>(Qt::SolidLine));
    ui->comBoxStyle->addItem(tr("DashLine"),
                           static_cast<int>(Qt::DashLine));
    ui->comBoxStyle->addItem(tr("DotLine"),
                           static_cast<int>(Qt::DotLine));
    ui->comBoxStyle->addItem(tr("DashDotLine"),
                           static_cast<int>(Qt::DashDotLine));
    ui->comBoxStyle->addItem(tr("DashDotDotLine"),
                           static_cast<int>(Qt::DashDotDotLine));
    connect(ui->comBoxStyle,SIGNAL(activated(int)),this,SLOT(SlotStyle()));

    ui->spinBoxPenWidth->setValue(1);
    connect(ui->spinBoxPenWidth,SIGNAL(valueChanged(int)),ui->drawWidget,SLOT (setWidth(int)));
    ui->drawWidget->setWidth(ui->spinBoxPenWidth->value());
    SlotStyle();

    connect(ui->btnClear,SIGNAL(clicked()),ui->drawWidget,SLOT(clear()));

    ui->comBoxShape->addItem(tr("涂鸦"),DrawWidget::Doodle);
    ui->comBoxShape->addItem(tr("直线"),DrawWidget::Line);
    ui->comBoxShape->addItem(tr("矩形"),DrawWidget::Rectangle);
    ui->comBoxShape->addItem(tr("圆角矩形"),DrawWidget::RoundRect);
    ui->comBoxShape->addItem(tr("椭圆"),DrawWidget::Ellipse);
    connect(ui->comBoxShape,SIGNAL(activated(int)),this,SLOT(SlotShape(int)));

    QPixmap pixmap(20,20);
    pixmap.fill(Qt::black);
    ui->toolButtonColor->setMinimumSize(24,24);
    ui->toolButtonColor->setIcon(pixmap);
    connect(ui->toolButtonColor,SIGNAL(clicked()),this,SLOT(SlotColor()));
    connect(ui->btnUndo,SIGNAL(clicked()),ui->drawWidget,SLOT (undo()));
}

DrawDlg::~DrawDlg()
{
    delete ui;
}

void DrawDlg::SlotStyle(){
    ui->drawWidget->setStyle(ui->comBoxStyle->itemData(
                                 ui->comBoxStyle->currentIndex(),Qt::UserRole).toInt());
}

void DrawDlg::SlotShape(int value){
    DrawWidget::Shape shape=DrawWidget::Shape(ui->comBoxShape->itemData(
                                                  value,Qt::UserRole).toInt());
    ui->drawWidget->setShape(shape);
}

void DrawDlg::SlotColor(){
    QColor color = QColorDialog::getColor(static_cast<int> (Qt::black), this);
    //使用标准颜色对话框QColorDialog获得一个颜色值
    if(color.isValid())
    {
        //将新选择的颜色传给绘制区，用于改变画笔的颜色值
        ui->drawWidget->setColor(color);
        QPixmap p(20,20);
        p.fill(color);
        ui->toolButtonColor->setIcon(QIcon(p));		//更新颜色选择按钮上的颜色显示
    }
}

void DrawDlg::on_commandLinkButton_clicked()
{
    this->close();
    Center center;
    center.exec();
}

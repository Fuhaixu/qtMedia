/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <qmyvideowidget.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QListWidget *listWidgetFiles;
    QmyVideoWidget *videoWidget;
    QWidget *widget;
    QPushButton *btnPlay;
    QPushButton *btnStop;
    QPushButton *btnPause;
    QPushButton *btnPush;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QPushButton *btnPre;
    QPushButton *btnSuf;
    QWidget *widget_2;
    QSlider *sliderPosition;
    QLabel *labRatio;
    QComboBox *comboBoxFile;
    QLabel *labelFile;
    QToolButton *btnFile;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(880, 507);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(0, 50, 881, 441));
        listWidgetFiles = new QListWidget(groupBox);
        listWidgetFiles->setObjectName(QStringLiteral("listWidgetFiles"));
        listWidgetFiles->setGeometry(QRect(10, 40, 211, 391));
        videoWidget = new QmyVideoWidget(groupBox);
        videoWidget->setObjectName(QStringLiteral("videoWidget"));
        videoWidget->setGeometry(QRect(0, 0, 100, 30));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(230, 360, 641, 31));
        btnPlay = new QPushButton(widget);
        btnPlay->setObjectName(QStringLiteral("btnPlay"));
        btnPlay->setGeometry(QRect(0, 0, 31, 28));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/620.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon);
        btnStop = new QPushButton(widget);
        btnStop->setObjectName(QStringLiteral("btnStop"));
        btnStop->setGeometry(QRect(40, 0, 31, 28));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/624.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon1);
        btnPause = new QPushButton(widget);
        btnPause->setObjectName(QStringLiteral("btnPause"));
        btnPause->setGeometry(QRect(80, 0, 31, 28));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/622.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon2);
        btnPush = new QPushButton(widget);
        btnPush->setObjectName(QStringLiteral("btnPush"));
        btnPush->setGeometry(QRect(540, 0, 93, 28));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/237.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        btnPush->setIcon(icon3);
        btnSound = new QPushButton(widget);
        btnSound->setObjectName(QStringLiteral("btnSound"));
        btnSound->setGeometry(QRect(120, 0, 31, 28));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/volumn.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSound->setIcon(icon4);
        sliderVolumn = new QSlider(widget);
        sliderVolumn->setObjectName(QStringLiteral("sliderVolumn"));
        sliderVolumn->setGeometry(QRect(160, 0, 160, 31));
        sliderVolumn->setOrientation(Qt::Horizontal);
        btnPre = new QPushButton(widget);
        btnPre->setObjectName(QStringLiteral("btnPre"));
        btnPre->setGeometry(QRect(350, 0, 31, 28));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/610.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPre->setIcon(icon5);
        btnSuf = new QPushButton(widget);
        btnSuf->setObjectName(QStringLiteral("btnSuf"));
        btnSuf->setGeometry(QRect(390, 0, 31, 28));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/612.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSuf->setIcon(icon6);
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(230, 400, 641, 31));
        sliderPosition = new QSlider(widget_2);
        sliderPosition->setObjectName(QStringLiteral("sliderPosition"));
        sliderPosition->setGeometry(QRect(90, 1, 441, 31));
        sliderPosition->setOrientation(Qt::Horizontal);
        labRatio = new QLabel(widget_2);
        labRatio->setObjectName(QStringLiteral("labRatio"));
        labRatio->setGeometry(QRect(540, 0, 101, 31));
        comboBoxFile = new QComboBox(groupBox);
        comboBoxFile->setObjectName(QStringLiteral("comboBoxFile"));
        comboBoxFile->setGeometry(QRect(390, 10, 401, 22));
        labelFile = new QLabel(groupBox);
        labelFile->setObjectName(QStringLiteral("labelFile"));
        labelFile->setGeometry(QRect(310, 10, 72, 21));
        btnFile = new QToolButton(groupBox);
        btnFile->setObjectName(QStringLiteral("btnFile"));
        btnFile->setGeometry(QRect(800, 10, 61, 21));
        btnAdd = new QPushButton(groupBox);
        btnAdd->setObjectName(QStringLiteral("btnAdd"));
        btnAdd->setGeometry(QRect(60, 10, 31, 28));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon7);
        btnRemove = new QPushButton(groupBox);
        btnRemove->setObjectName(QStringLiteral("btnRemove"));
        btnRemove->setGeometry(QRect(100, 10, 31, 28));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/images/318.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemove->setIcon(icon8);
        commandLinkButton = new QCommandLinkButton(centralWidget);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(20, 0, 187, 41));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(commandLinkButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\350\247\206\351\242\221", Q_NULLPTR));
        btnPlay->setText(QString());
        btnStop->setText(QString());
        btnPause->setText(QString());
        btnPush->setText(QApplication::translate("MainWindow", "\345\205\250\345\261\217", Q_NULLPTR));
        btnSound->setText(QString());
        btnPre->setText(QString());
        btnSuf->setText(QString());
        labRatio->setText(QApplication::translate("MainWindow", "\350\277\233\345\272\246", Q_NULLPTR));
        labelFile->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\350\267\257\345\276\204:", Q_NULLPTR));
        btnFile->setText(QApplication::translate("MainWindow", "...", Q_NULLPTR));
        btnAdd->setText(QString());
        btnRemove->setText(QString());
        commandLinkButton->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

/********************************************************************************
** Form generated from reading UI file 'imagedlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_IMAGEDLG_H
#define UI_IMAGEDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_imageDlg
{
public:
    QLabel *label;
    QLabel *label_2;
    QFrame *line;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QPushButton *btnReset;
    QPushButton *bntBlack;
    QPushButton *btnDetect;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *bntGray;
    QPushButton *bntShowImg;
    QSlider *horizontalSlider;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *imageDlg)
    {
        if (imageDlg->objectName().isEmpty())
            imageDlg->setObjectName(QStringLiteral("imageDlg"));
        imageDlg->resize(790, 475);
        label = new QLabel(imageDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 70, 470, 270));
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(imageDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 370, 111, 16));
        line = new QFrame(imageDlg);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(630, 70, 21, 341));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        gridLayoutWidget_2 = new QWidget(imageDlg);
        gridLayoutWidget_2->setObjectName(QStringLiteral("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(650, 70, 101, 341));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btnReset = new QPushButton(gridLayoutWidget_2);
        btnReset->setObjectName(QStringLiteral("btnReset"));

        gridLayout_2->addWidget(btnReset, 0, 0, 1, 1);

        bntBlack = new QPushButton(gridLayoutWidget_2);
        bntBlack->setObjectName(QStringLiteral("bntBlack"));

        gridLayout_2->addWidget(bntBlack, 2, 0, 1, 1);

        btnDetect = new QPushButton(gridLayoutWidget_2);
        btnDetect->setObjectName(QStringLiteral("btnDetect"));

        gridLayout_2->addWidget(btnDetect, 1, 0, 1, 1);

        gridLayoutWidget = new QWidget(imageDlg);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(520, 70, 111, 341));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(gridLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 1, 0, 1, 1);

        bntGray = new QPushButton(gridLayoutWidget);
        bntGray->setObjectName(QStringLiteral("bntGray"));

        gridLayout->addWidget(bntGray, 2, 0, 1, 1);

        bntShowImg = new QPushButton(gridLayoutWidget);
        bntShowImg->setObjectName(QStringLiteral("bntShowImg"));

        gridLayout->addWidget(bntShowImg, 0, 0, 1, 1);

        horizontalSlider = new QSlider(imageDlg);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 400, 251, 22));
        horizontalSlider->setOrientation(Qt::Horizontal);
        commandLinkButton = new QCommandLinkButton(imageDlg);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(20, 10, 187, 41));

        retranslateUi(imageDlg);

        QMetaObject::connectSlotsByName(imageDlg);
    } // setupUi

    void retranslateUi(QDialog *imageDlg)
    {
        imageDlg->setWindowTitle(QApplication::translate("imageDlg", "Dialog", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("imageDlg", "\345\233\276\347\211\207\344\272\256\345\272\246\350\260\203\350\212\202", Q_NULLPTR));
        btnReset->setText(QApplication::translate("imageDlg", "\351\207\215\347\275\256\345\233\276\347\211\207", Q_NULLPTR));
        bntBlack->setText(QApplication::translate("imageDlg", "\347\275\256\351\273\221", Q_NULLPTR));
        btnDetect->setText(QApplication::translate("imageDlg", "\350\276\271\347\274\230\346\243\200\346\265\213", Q_NULLPTR));
        pushButton->setText(QApplication::translate("imageDlg", "\351\253\230\346\226\257\346\250\241\347\263\212", Q_NULLPTR));
        bntGray->setText(QApplication::translate("imageDlg", "\347\201\260\345\272\246\345\214\226", Q_NULLPTR));
        bntShowImg->setText(QApplication::translate("imageDlg", "\346\211\223\345\274\200\345\233\276\347\211\207", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("imageDlg", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class imageDlg: public Ui_imageDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_IMAGEDLG_H

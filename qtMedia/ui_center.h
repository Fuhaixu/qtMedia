/********************************************************************************
** Form generated from reading UI file 'center.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTER_H
#define UI_CENTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Center
{
public:
    QLabel *label;
    QLabel *label_2;
    QGroupBox *groupBox;
    QPushButton *btnVideo;
    QPushButton *btnDraw;
    QPushButton *btnClock;
    QPushButton *btnEdit;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *btnImgProcessing;

    void setupUi(QDialog *Center)
    {
        if (Center->objectName().isEmpty())
            Center->setObjectName(QStringLiteral("Center"));
        Center->setWindowModality(Qt::NonModal);
        Center->resize(469, 389);
        Center->setSizeGripEnabled(false);
        Center->setModal(false);
        label = new QLabel(Center);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(180, 20, 71, 41));
        label_2 = new QLabel(Center);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 60, 51, 16));
        groupBox = new QGroupBox(Center);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(30, 80, 401, 281));
        groupBox->setLayoutDirection(Qt::RightToLeft);
        groupBox->setAutoFillBackground(true);
        groupBox->setFlat(false);
        btnVideo = new QPushButton(groupBox);
        btnVideo->setObjectName(QStringLiteral("btnVideo"));
        btnVideo->setGeometry(QRect(240, 50, 101, 31));
        btnDraw = new QPushButton(groupBox);
        btnDraw->setObjectName(QStringLiteral("btnDraw"));
        btnDraw->setGeometry(QRect(40, 50, 101, 31));
        btnClock = new QPushButton(groupBox);
        btnClock->setObjectName(QStringLiteral("btnClock"));
        btnClock->setGeometry(QRect(240, 110, 101, 31));
        btnEdit = new QPushButton(groupBox);
        btnEdit->setObjectName(QStringLiteral("btnEdit"));
        btnEdit->setGeometry(QRect(40, 110, 101, 31));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(170, 200, 101, 31));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(90, 230, 211, 16));
        btnImgProcessing = new QPushButton(groupBox);
        btnImgProcessing->setObjectName(QStringLiteral("btnImgProcessing"));
        btnImgProcessing->setGeometry(QRect(140, 160, 93, 28));

        retranslateUi(Center);

        QMetaObject::connectSlotsByName(Center);
    } // setupUi

    void retranslateUi(QDialog *Center)
    {
        Center->setWindowTitle(QApplication::translate("Center", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Center", "\346\216\247\345\210\266\351\235\242\346\235\277", Q_NULLPTR));
        label_2->setText(QApplication::translate("Center", "Center", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("Center", "BY \344\274\217\346\265\267\346\227\255", Q_NULLPTR));
        btnVideo->setText(QApplication::translate("Center", "\350\247\206\351\242\221", Q_NULLPTR));
        btnDraw->setText(QApplication::translate("Center", "\347\273\230\345\233\276", Q_NULLPTR));
        btnClock->setText(QApplication::translate("Center", "\346\227\266\351\222\237\345\212\250\347\224\273", Q_NULLPTR));
        btnEdit->setText(QApplication::translate("Center", "\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("Center", "\346\202\250\345\245\275", Q_NULLPTR));
        label_4->setText(QApplication::translate("Center", "Stay hungry,Stay foolish", Q_NULLPTR));
        btnImgProcessing->setText(QApplication::translate("Center", "\345\233\276\345\203\217\345\244\204\347\220\206", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Center: public Ui_Center {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTER_H

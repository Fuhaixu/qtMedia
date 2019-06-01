/********************************************************************************
** Form generated from reading UI file 'drawdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DRAWDLG_H
#define UI_DRAWDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <drawwidget.h>

QT_BEGIN_NAMESPACE

class Ui_DrawDlg
{
public:
    QGroupBox *groupBox;
    DrawWidget *drawWidget;
    QWidget *widget_2;
    QComboBox *comBoxStyle;
    QLabel *label;
    QSpinBox *spinBoxPenWidth;
    QLabel *label_2;
    QPushButton *btnClear;
    QComboBox *comBoxShape;
    QToolButton *toolButtonColor;
    QPushButton *btnUndo;
    QLabel *label_3;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *DrawDlg)
    {
        if (DrawDlg->objectName().isEmpty())
            DrawDlg->setObjectName(QStringLiteral("DrawDlg"));
        DrawDlg->resize(705, 438);
        groupBox = new QGroupBox(DrawDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 40, 681, 391));
        drawWidget = new DrawWidget(groupBox);
        drawWidget->setObjectName(QStringLiteral("drawWidget"));
        drawWidget->setGeometry(QRect(10, 70, 661, 311));
        widget_2 = new QWidget(groupBox);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 20, 661, 41));
        comBoxStyle = new QComboBox(widget_2);
        comBoxStyle->setObjectName(QStringLiteral("comBoxStyle"));
        comBoxStyle->setGeometry(QRect(70, 0, 131, 31));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 10, 72, 15));
        spinBoxPenWidth = new QSpinBox(widget_2);
        spinBoxPenWidth->setObjectName(QStringLiteral("spinBoxPenWidth"));
        spinBoxPenWidth->setGeometry(QRect(250, 1, 46, 31));
        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 10, 72, 15));
        btnClear = new QPushButton(widget_2);
        btnClear->setObjectName(QStringLiteral("btnClear"));
        btnClear->setGeometry(QRect(550, 0, 51, 31));
        comBoxShape = new QComboBox(widget_2);
        comBoxShape->setObjectName(QStringLiteral("comBoxShape"));
        comBoxShape->setGeometry(QRect(410, 0, 131, 31));
        toolButtonColor = new QToolButton(widget_2);
        toolButtonColor->setObjectName(QStringLiteral("toolButtonColor"));
        toolButtonColor->setGeometry(QRect(310, 0, 47, 31));
        btnUndo = new QPushButton(widget_2);
        btnUndo->setObjectName(QStringLiteral("btnUndo"));
        btnUndo->setGeometry(QRect(610, 0, 51, 31));
        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(360, 5, 41, 21));
        commandLinkButton = new QCommandLinkButton(DrawDlg);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 0, 187, 41));

        retranslateUi(DrawDlg);

        QMetaObject::connectSlotsByName(DrawDlg);
    } // setupUi

    void retranslateUi(QDialog *DrawDlg)
    {
        DrawDlg->setWindowTitle(QApplication::translate("DrawDlg", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("DrawDlg", "\347\273\230\345\233\276", Q_NULLPTR));
        label->setText(QApplication::translate("DrawDlg", "\347\272\277\346\235\241\346\240\267\345\274\217", Q_NULLPTR));
        label_2->setText(QApplication::translate("DrawDlg", "\347\272\277\345\256\275", Q_NULLPTR));
        btnClear->setText(QApplication::translate("DrawDlg", "\346\270\205\351\231\244", Q_NULLPTR));
        toolButtonColor->setText(QApplication::translate("DrawDlg", "...", Q_NULLPTR));
        btnUndo->setText(QApplication::translate("DrawDlg", "\346\222\244\345\233\236", Q_NULLPTR));
        label_3->setText(QApplication::translate("DrawDlg", "\345\275\242\347\212\266", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("DrawDlg", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class DrawDlg: public Ui_DrawDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DRAWDLG_H

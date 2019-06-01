/********************************************************************************
** Form generated from reading UI file 'clockdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOCKDLG_H
#define UI_CLOCKDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <clockwidget.h>

QT_BEGIN_NAMESPACE

class Ui_ClockDlg
{
public:
    QCommandLinkButton *commandLinkButton;
    ClockWidget *widget;

    void setupUi(QDialog *ClockDlg)
    {
        if (ClockDlg->objectName().isEmpty())
            ClockDlg->setObjectName(QStringLiteral("ClockDlg"));
        ClockDlg->resize(598, 396);
        commandLinkButton = new QCommandLinkButton(ClockDlg);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 0, 187, 41));
        widget = new ClockWidget(ClockDlg);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 40, 581, 351));

        retranslateUi(ClockDlg);

        QMetaObject::connectSlotsByName(ClockDlg);
    } // setupUi

    void retranslateUi(QDialog *ClockDlg)
    {
        ClockDlg->setWindowTitle(QApplication::translate("ClockDlg", "Dialog", Q_NULLPTR));
        commandLinkButton->setText(QApplication::translate("ClockDlg", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ClockDlg: public Ui_ClockDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOCKDLG_H

/********************************************************************************
** Form generated from reading UI file 'fileeidtdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEEIDTDLG_H
#define UI_FILEEIDTDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FileEidtDlg
{
public:
    QGroupBox *groupBox;
    QWidget *widget;
    QPushButton *btnNew;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QPushButton *btnPrint;
    QFrame *line;
    QPushButton *btnUndo;
    QPushButton *btnRedo;
    QPushButton *btnCut;
    QPushButton *btnPaste;
    QPushButton *btnFind;
    QFrame *line_2;
    QPushButton *btnCopy;
    QPlainTextEdit *mainEditor;
    QCommandLinkButton *btnBack;

    void setupUi(QDialog *FileEidtDlg)
    {
        if (FileEidtDlg->objectName().isEmpty())
            FileEidtDlg->setObjectName(QStringLiteral("FileEidtDlg"));
        FileEidtDlg->resize(692, 501);
        groupBox = new QGroupBox(FileEidtDlg);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 70, 671, 401));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 651, 31));
        btnNew = new QPushButton(widget);
        btnNew->setObjectName(QStringLiteral("btnNew"));
        btnNew->setGeometry(QRect(0, 0, 33, 29));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/images/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnNew->setIcon(icon);
        btnOpen = new QPushButton(widget);
        btnOpen->setObjectName(QStringLiteral("btnOpen"));
        btnOpen->setGeometry(QRect(40, 0, 33, 29));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/images/images/001.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        btnOpen->setIcon(icon1);
        btnSave = new QPushButton(widget);
        btnSave->setObjectName(QStringLiteral("btnSave"));
        btnSave->setGeometry(QRect(80, 0, 33, 29));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/images/images/rotate90.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnSave->setIcon(icon2);
        btnPrint = new QPushButton(widget);
        btnPrint->setObjectName(QStringLiteral("btnPrint"));
        btnPrint->setGeometry(QRect(120, 0, 33, 29));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/images/images/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrint->setIcon(icon3);
        line = new QFrame(widget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(150, 0, 31, 31));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        btnUndo = new QPushButton(widget);
        btnUndo->setObjectName(QStringLiteral("btnUndo"));
        btnUndo->setGeometry(QRect(180, 0, 33, 29));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/images/images/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnUndo->setIcon(icon4);
        btnRedo = new QPushButton(widget);
        btnRedo->setObjectName(QStringLiteral("btnRedo"));
        btnRedo->setGeometry(QRect(220, 0, 33, 29));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/images/images/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRedo->setIcon(icon5);
        btnCut = new QPushButton(widget);
        btnCut->setObjectName(QStringLiteral("btnCut"));
        btnCut->setGeometry(QRect(260, 0, 33, 29));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/images/images/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCut->setIcon(icon6);
        btnPaste = new QPushButton(widget);
        btnPaste->setObjectName(QStringLiteral("btnPaste"));
        btnPaste->setGeometry(QRect(340, 0, 33, 29));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/images/images/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnPaste->setIcon(icon7);
        btnFind = new QPushButton(widget);
        btnFind->setObjectName(QStringLiteral("btnFind"));
        btnFind->setEnabled(true);
        btnFind->setGeometry(QRect(380, 0, 33, 29));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/images/images/find.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnFind->setIcon(icon8);
        line_2 = new QFrame(widget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(430, 0, 3, 61));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        btnCopy = new QPushButton(widget);
        btnCopy->setObjectName(QStringLiteral("btnCopy"));
        btnCopy->setGeometry(QRect(300, 0, 33, 29));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/images/images/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCopy->setIcon(icon9);
        mainEditor = new QPlainTextEdit(groupBox);
        mainEditor->setObjectName(QStringLiteral("mainEditor"));
        mainEditor->setGeometry(QRect(10, 60, 651, 331));
        btnBack = new QCommandLinkButton(FileEidtDlg);
        btnBack->setObjectName(QStringLiteral("btnBack"));
        btnBack->setGeometry(QRect(10, 10, 187, 41));

        retranslateUi(FileEidtDlg);

        QMetaObject::connectSlotsByName(FileEidtDlg);
    } // setupUi

    void retranslateUi(QDialog *FileEidtDlg)
    {
        FileEidtDlg->setWindowTitle(QApplication::translate("FileEidtDlg", "Dialog", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("FileEidtDlg", "\346\226\207\346\234\254\347\274\226\350\276\221\345\231\250", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnNew->setToolTip(QApplication::translate("FileEidtDlg", "\346\226\260\345\273\272", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnNew->setText(QString());
        btnNew->setShortcut(QApplication::translate("FileEidtDlg", "Ctrl+N", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        btnOpen->setToolTip(QApplication::translate("FileEidtDlg", "\346\211\223\345\274\200", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnOpen->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnSave->setToolTip(QApplication::translate("FileEidtDlg", "\344\277\235\345\255\230", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnSave->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnPrint->setToolTip(QApplication::translate("FileEidtDlg", "\346\211\223\345\215\260", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPrint->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnUndo->setToolTip(QApplication::translate("FileEidtDlg", "\346\222\244\345\233\236(undo)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnUndo->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnRedo->setToolTip(QApplication::translate("FileEidtDlg", "\346\201\242\345\244\215(redo)", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnRedo->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCut->setToolTip(QApplication::translate("FileEidtDlg", "\345\211\252\345\210\207", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnCut->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnPaste->setToolTip(QApplication::translate("FileEidtDlg", "\347\262\230\350\264\264", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnPaste->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnFind->setToolTip(QApplication::translate("FileEidtDlg", "\346\237\245\346\211\276", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnFind->setText(QString());
#ifndef QT_NO_TOOLTIP
        btnCopy->setToolTip(QApplication::translate("FileEidtDlg", "\345\244\215\345\210\266", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        btnCopy->setText(QString());
        btnBack->setText(QApplication::translate("FileEidtDlg", "\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileEidtDlg: public Ui_FileEidtDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEEIDTDLG_H

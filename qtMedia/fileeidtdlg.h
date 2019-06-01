#ifndef FILEEIDTDLG_H
#define FILEEIDTDLG_H

#include <QDialog>
#include"center.h"
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QString>
#include <QPlainTextEdit>
#include <QPrinter>
#include <QPrintDialog>
#include<QLineEdit>
namespace Ui {
class FileEidtDlg;
}

class FileEidtDlg : public QDialog
{
    Q_OBJECT

public:
    explicit FileEidtDlg(QWidget *parent = 0);
    ~FileEidtDlg();

private slots:
    void on_btnBack_clicked();
    void onFileOpen();
    void onFileNew();
    void onFileSave();
    void onTextChanged();
    void onFileSaveAs();
    QString saveCurrentData(QString path);
    void on_btnPrint_clicked();
    void show_findText();
    void showFindText();
private:
    Ui::FileEidtDlg *ui;
    QString m_filePath;
    bool m_isTextChanged;
    QString undoText;
    QString redoText;
    QLineEdit *findLineEdit;
    QDialog *findDlg;
    QString showFileDialog(QFileDialog::AcceptMode mode, QString title);
    void preEditorChange();
    void showErrorMessage(QString message);
    int showQueryMessage(QString message);

};

#endif // FILEEIDTDLG_H

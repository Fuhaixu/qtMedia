#ifndef FILEEIDTDLG_H
#define FILEEIDTDLG_H

#include <QDialog>

namespace Ui {
class FileEidtDlg;
}

class FileEidtDlg : public QDialog
{
    Q_OBJECT

public:
    explicit FileEidtDlg(QWidget *parent = 0);
    ~FileEidtDlg();

private:
    Ui::FileEidtDlg *ui;
};

#endif // FILEEIDTDLG_H

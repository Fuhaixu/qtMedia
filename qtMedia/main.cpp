#include"drawdlg.h"
#include"center.h"
#include"fileeidtdlg.h"
#include <QApplication>
#include<QPushButton>
#include<QDialog>
#include"clockdlg.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Center center;
    center.show();
    return a.exec();
}

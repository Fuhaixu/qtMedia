#include "fileeidtdlg.h"
#include "ui_fileeidtdlg.h"
#include<QLayout>
#include<QTextCodec>
FileEidtDlg::FileEidtDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileEidtDlg)
{
    ui->setupUi(this);
     this->setWindowTitle("文本编辑器");
    connect(ui->btnNew,SIGNAL(clicked()),this,SLOT(onFileNew()));
    connect(ui->btnOpen,SIGNAL(clicked()),this,SLOT(onFileOpen()));
    connect(ui->btnSave,SIGNAL(clicked()),this,SLOT(onFileSaveAs()));
    connect(ui->btnRedo,SIGNAL(clicked()),ui->mainEditor,SLOT(redo()));
    connect(ui->btnUndo,SIGNAL(clicked()),ui->mainEditor,SLOT(undo()));
    connect(ui->btnPaste,SIGNAL(clicked()),ui->mainEditor,SLOT(paste()));
    connect(ui->btnCopy,SIGNAL(clicked()),ui->mainEditor,SLOT(copy()));
    connect(ui->btnCut,SIGNAL(clicked()),ui->mainEditor,SLOT(cut()));
    connect(ui->btnFind,SIGNAL(clicked()),this,SLOT(show_findText()));

    findDlg = new QDialog(this);
    findDlg->setWindowTitle(tr("查找"));
    findLineEdit = new QLineEdit(findDlg);
    this->m_isTextChanged=false;
    QPushButton *btn= new QPushButton(tr("查找下一个"), findDlg);
    QVBoxLayout *layout= new QVBoxLayout(findDlg);
    layout->addWidget(findLineEdit);
    layout->addWidget(btn);
    connect(btn, SIGNAL(clicked()), this, SLOT(showFindText()));
}

FileEidtDlg::~FileEidtDlg()
{
    delete ui;
}

void FileEidtDlg::on_btnBack_clicked()
{
    this->close();
    Center center;
    center.exec();
}

void FileEidtDlg::onFileOpen(){
    preEditorChange();
    QTextCodec *codec=QTextCodec::codecForName("GBK");
   if( !m_isTextChanged )
   {
       QString path = showFileDialog(QFileDialog::AcceptOpen, "Open");
       if( path != "" )
       {
           QFile file(path);
           if( file.open(QIODevice::ReadOnly | QIODevice::Text) )
           {
               ui->mainEditor->setPlainText(QString(codec->toUnicode(file.readAll())));
               file.close();
               m_filePath = path;
               m_isTextChanged = false;
               setWindowTitle("NotePad - [ " + m_filePath + " ]");
           }
           else
           {
               showErrorMessage(QString("Open file error! \n\n") + "\"" + path + "\"");
           }
       }
   }
}
void FileEidtDlg::showErrorMessage(QString message)
{
    QMessageBox msg(this);

    msg.setWindowTitle("Error");
    msg.setText(message);
    msg.setIcon(QMessageBox::Critical);
    msg.setStandardButtons(QMessageBox::Ok);

    msg.exec();
}
int FileEidtDlg::showQueryMessage(QString message)
{
    QMessageBox msg(this);
    msg.setWindowTitle("Query");
    msg.setText(message);
    msg.setIcon(QMessageBox::Question);
    msg.setStandardButtons(QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
    return msg.exec();
}

void FileEidtDlg::preEditorChange()
{
    if( m_isTextChanged )
    {
        int r = showQueryMessage("Do you want to save the changes to file?");
        switch(r)
        {
        case QMessageBox::Yes:
            saveCurrentData(m_filePath);
            break;
        case QMessageBox::No:
            m_isTextChanged = false;
            break;
        case QMessageBox::Cancel:
            break;
        }
    }
}

QString FileEidtDlg::showFileDialog(QFileDialog::AcceptMode mode, QString title)
{
    QString ret = "";
    QFileDialog fd(this);
    fd.setWindowTitle(title);
    fd.setAcceptMode(mode);
    if( mode == QFileDialog::AcceptOpen )
    {
        fd.setFileMode(QFileDialog::ExistingFile);
    }

    if( fd.exec() == QFileDialog::Accepted )
    {
        ret = fd.selectedFiles()[0];
    }

    return ret;
}



void FileEidtDlg::onFileNew()
{
    preEditorChange();

    if( !m_isTextChanged )
    {
        ui->mainEditor->clear();
        setWindowTitle("NotePad - [ New ]");
        m_filePath = "";
        m_isTextChanged = false;
    }
}

QString FileEidtDlg::saveCurrentData(QString path)
{
    QString ret = path;

    if( ret == "" )
    {
        ret = showFileDialog(QFileDialog::AcceptSave, "Save");
    }

    if( ret != "" )
    {
        QFile file(ret);
        if( file.open(QIODevice::WriteOnly | QIODevice::Text) )
        {
            QTextStream out(&file);
            out << ui->mainEditor->toPlainText();
            file.close();
            setWindowTitle("NotePad - [ " + ret + " ]");
            m_isTextChanged = false;
        }
        else
        {
            showErrorMessage(QString("Save file error! \n\n") + "\"" + ret + "\"");

            ret = "";
        }
    }

    return ret;
}

void FileEidtDlg::onFileSave()
{
    QString path = saveCurrentData(m_filePath);
    if( path != "" )
    {
        m_filePath = path;
    }
}

void FileEidtDlg::onFileSaveAs()
{
    QString path = saveCurrentData("");
    if( path != "" )
    {
        m_filePath = path;
    }
}

void FileEidtDlg::onTextChanged()
{
    if( !m_isTextChanged )
    {
        setWindowTitle("*" + windowTitle());
    }
    m_isTextChanged = true;
}



void FileEidtDlg::on_btnPrint_clicked()
{
    QPrinter printer;				               // 新建一个QPrinter对象
    QPrintDialog printDialog(&printer,this);
    if(printDialog.exec())                                         // 判断是否点击打印按钮
    {
        //获得QTextEdit对象的文档
        QTextDocument *doc =ui->mainEditor->document();
        doc->print(&printer);                                 // 打印
    }
}

void FileEidtDlg::show_findText(){
    this->findDlg->exec();
}
void FileEidtDlg::showFindText()
{
    QString str = findLineEdit->text();
    if(ui->mainEditor->find(str,QTextDocument::FindBackward))//查找后一个
    {
        // 查找到后高亮显示
        QPalette palette = ui->mainEditor->palette();
        palette.setColor(QPalette::Highlight,palette.color(QPalette::Active,QPalette::Highlight));
        ui->mainEditor->setPalette(palette);
    }
    else
    {
        QMessageBox::information(this,tr("注意"),tr("没有找到内容"),QMessageBox::Ok);
    }
}



#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    curFileListIndex=-1;
    createToolBar();
    player = new QMediaPlayer(this);//创建视频播放器
    player->setNotifyInterval(1000);//信息更新周期
    player->setVideoOutput(ui->videoWidget);//视频显示组件
    ui->videoWidget->setMediaPlayer(player);//设置显示组件的关联播放器
    ui->sliderVolumn->setValue(100);
    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),
            this, SLOT(onstateChanged(QMediaPlayer::State)));
    connect(player,SIGNAL(positionChanged(qint64)),
            this, SLOT(onPositionChanged(qint64)));
    connect(player,SIGNAL(durationChanged(qint64)),
            this, SLOT(onDurationChanged(qint64)));
    connect(ui->comboBoxFile,SIGNAL(currentIndexChanged(int)),
               this,SLOT(comboxFileChangeIndex()));
}
void MainWindow::createToolBar()
{
    QToolBar *toolBar = addToolBar("Tool");  	//为主窗口新建一个工具栏对象
    toolBar->setMovable(false);
    fileToolComboBox=new QComboBox;
    fileToolComboBox->addItem(tr("绘图"),Draw);
    fileToolComboBox->addItem(tr("文字处理"),Word);
    connect(fileToolComboBox,SIGNAL(activated(int)),this,SLOT(changeMode()));
    toolBar->addWidget(fileToolComboBox);
}

void MainWindow::changeMode(int v){
    Opt opt=Opt(fileToolComboBox->itemData(v,Qt::UserRole).toInt());
    if(opt==Word){

    }else if(opt==Draw){

    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onstateChanged(QMediaPlayer::State state)
{//播放器状态变化
    ui->btnPlay->setEnabled(!(state==QMediaPlayer::PlayingState));
    ui->btnPause->setEnabled(state==QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state==QMediaPlayer::PlayingState);
}

void MainWindow::onDurationChanged(qint64 duration)
{//文件时长变化
    ui->sliderPosition->setMaximum(duration);

    int   secs=duration/1000;//秒
    int   mins=secs/60; //分钟
    secs=secs % 60;//余数秒
    durationTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

void MainWindow::onPositionChanged(qint64 position)
{//文件播放位置变化
    if (ui->sliderPosition->isSliderDown())
        return; //如果正在拖动滑条，退出

    ui->sliderPosition->setSliderPosition(position);//

    int   secs=position/1000;//秒
    int   mins=secs/60; //分钟
    secs=secs % 60;//余数秒
    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

void MainWindow::on_btnFile_clicked()
{
    QString filter="所有文件(*.*);;视频文件(*.wmv,*.mp4,*.avi,*.AVI,*MP4)"; //文件过滤器
    QString file=QFileDialog::getOpenFileName(
                                         this,tr("选择文件"),QDir::currentPath(),filter);
    disconnect(ui->comboBoxFile,SIGNAL(currentIndexChanged(int)),
               this,SLOT(comboxFileChangeIndex()));
    if(!file.isEmpty()){
        if(ui->comboBoxFile->findText(file)==-1){
            ui->comboBoxFile->addItem(file);
            QFileInfo fileInfo(file);
            listItems.push_back(file);
            curFileListIndex=listItems.indexOf(file);
            ui->listWidgetFiles->setCurrentRow(curFileListIndex);
            QStringList fileStr=file.split("/");
            ui->listWidgetFiles->insertItem(ui->listWidgetFiles->count(),fileStr.at(fileStr.length()-1));
        }
        ui->comboBoxFile->setCurrentIndex(ui->comboBoxFile->findText(file));

        //播放视频
        curFile=file;
        player->setMedia(QUrl::fromLocalFile(file));
        player->play();
    }
    connect(ui->comboBoxFile,SIGNAL(currentIndexChanged(int)),
               this,SLOT(comboxFileChangeIndex()));
}

void MainWindow::on_btnRemove_clicked()
{
    if(curFileListIndex!=-1){
        QListWidgetItem *pItem = ui->listWidgetFiles->item(curFileListIndex);
        ui->listWidgetFiles->removeItemWidget(pItem);
        listItems.removeAt(curFileListIndex);
        delete pItem;
    }

}

void MainWindow::on_btnAdd_clicked()
{
    QString filter="所有文件(*.*);;视频文件(*.wmv,*.mp4,*.avi,*.AVI,*MP4)"; //文件过滤器
    QString file=QFileDialog::getOpenFileName(
                                         this,tr("选择文件"),QDir::currentPath(),filter);
    disconnect(ui->comboBoxFile,SIGNAL(currentIndexChanged(int)),
               this,SLOT(comboxFileChangeIndex()));
    if(!file.isEmpty()){
        if(ui->comboBoxFile->findText(file)==-1){

            ui->comboBoxFile->addItem(file);
            listItems.push_back(file);
            curFileListIndex=listItems.indexOf(file);
            ui->listWidgetFiles->setCurrentRow(curFileListIndex);
            QStringList fileStr=file.split("/");
            ui->listWidgetFiles->insertItem(ui->listWidgetFiles->count(),fileStr.at(fileStr.length()-1));

        }
        ui->comboBoxFile->setCurrentIndex(ui->comboBoxFile->findText(file));
        //播放视频
        curFile=file;
        player->setMedia(QUrl::fromLocalFile(file));
        player->play();
    }
    connect(ui->comboBoxFile,SIGNAL(currentIndexChanged(int)),
               this,SLOT(comboxFileChangeIndex()));
}

void MainWindow::on_btnPlay_clicked()
{
    if(listItems.size()==0){
        QMessageBox::information(NULL,"提示","没有引入视频，不能播放",QMessageBox::Yes|QMessageBox::No, QMessageBox::Yes);
        return;
    }
    if(curFileListIndex!=-1&&listItems.indexOf(curFile)!=curFileListIndex){
         player->setMedia(QUrl::fromLocalFile(listItems[curFileListIndex]));
    }
    player->play();
}

void MainWindow::on_btnStop_clicked()
{
    player->stop();
}

void MainWindow::on_btnPause_clicked()
{
     player->pause();
}

void MainWindow::on_btnSound_clicked()
{
    bool mute=player->isMuted();
    player->setMuted(!mute);
    if (mute)
        ui->btnSound->setIcon(QIcon(":/images/images/volumn.bmp"));
    else
        ui->btnSound->setIcon(QIcon(":/images/images/mute.bmp"));
}

void MainWindow::on_sliderVolumn_valueChanged(int value)
{
    player->setVolume(value);
}

void MainWindow::on_sliderPosition_valueChanged(int value)
{
    player->setPosition(value);
}

void MainWindow::on_listWidgetFiles_clicked(const QModelIndex &index)
{
    curFileListIndex=index.row();
}
void MainWindow::on_listWidgetFiles_doubleClicked(const QModelIndex &index)
{
    curFileListIndex=index.row();
    player->setMedia(QUrl::fromLocalFile(listItems[index.row()]));
    player->play();
}

void MainWindow::on_btnPush_clicked()
{
    ui->videoWidget->setWindowFlags(Qt::Window|Qt::Dialog);
    ui->videoWidget->setFullScreen(true);
}

void MainWindow::on_btnPre_clicked()
{
    curFileListIndex-=1;
    if(curFileListIndex<0)curFileListIndex=listItems.size()-1;
    ui->listWidgetFiles->setCurrentRow(curFileListIndex);
    player->setMedia(QUrl::fromLocalFile(listItems[curFileListIndex]));
    player->play();
}

void MainWindow::on_btnSuf_clicked()
{
    curFileListIndex+=1;
    curFileListIndex%=listItems.size();
    ui->listWidgetFiles->setCurrentRow(curFileListIndex);
    player->setMedia(QUrl::fromLocalFile(listItems[curFileListIndex]));
    player->play();
}

void MainWindow::comboxFileChangeIndex()
{
    QString file=ui->comboBoxFile->currentText();
    if(listItems.indexOf(file)==-1){
       listItems.push_back(file);
       curFileListIndex=listItems.indexOf(file);
       QStringList fileStr=file.split("/");
       ui->listWidgetFiles->insertItem(curFileListIndex,fileStr.at(fileStr.length()-1));
    }else{
        curFileListIndex=listItems.indexOf(file);
    }
    ui->listWidgetFiles->setCurrentRow(curFileListIndex);
    player->setMedia(QUrl::fromLocalFile(listItems[curFileListIndex]));
    player->play();
}

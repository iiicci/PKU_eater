#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cuisine.h"
#include "qimage.h"

#include <QVector>
#include "msg.h"
#include "clientsocket.h"
#include <qthread.h>
#include "cuisinedetails.h"
#include "upload.h"


/////////////
///  可能出问题的位置：
///     1.我还没加pause
///     2.推荐button何时隐藏 以及 setQlabelImage();何时调用。（目前逻辑请看slot）
///     3.[]的index错误：
///             1.(vector)cuisines：在初始化时，我把他长度设为10；
///                 之后的修改我是很粗暴的用cuisines[i]=cuisine;
///             2.namelist 出问题概率不大。
///     加油xd，爱你
///
///
/// ////////////////////


void MainWindow::paintEvent(QPaintEvent *event)
{
    QMainWindow::paintEvent(event);  // 调用基类的paintEvent()函数
    this->setWindowTitle("PKU eater");
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  // 设置反锯齿

    // 设置分界线高度参数
    int dividerHeight = 150;
    QColor PKURed(155, 4, 4);
    QColor PKUwhite(232, 230, 232);

    // 绘制红色背景
    painter.setBrush(PKURed);
    painter.drawRect(0, 0, width(), dividerHeight);

    // 绘制白色背景
    painter.setBrush(PKUwhite);
    painter.drawRect(0, dividerHeight, width(), height() - dividerHeight);

    // 或者绘制其他自定义的背景形状或图案
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButtonChange->hide();
    //mypaintEvent();
    connect(&socket,&ClientSocket::msg_ready,this,&MainWindow::msg_ready_slot);
    ui->imgButton_1->setGeometry(ui->imglabel_1->geometry());
    ui->imgButton_2->setGeometry(ui->imglabel_2->geometry());
    ui->imgButton_3->setGeometry(ui->imglabel_3->geometry());
    ui->imgButton_4->setGeometry(ui->imglabel_4->geometry());
    ui->imgButton_5->setGeometry(ui->imglabel_5->geometry());
    ui->imgButton_6->setGeometry(ui->imglabel_6->geometry());
    ui->imglabel_1->setContentsMargins(0, 0, 0, 0);
    ui->imglabel_1->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->imglabel_1->hide();
    ui->imgButton_1->setEnabled(false);
    ui->imglabel_2->setContentsMargins(0, 0, 0, 0);
    ui->imglabel_2->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->imglabel_2->hide();
    ui->imgButton_2->setEnabled(false);
    ui->imglabel_3->setContentsMargins(0, 0, 0, 0);
    ui->imglabel_3->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->imglabel_3->hide();
    ui->imgButton_3->setEnabled(false);
    ui->imglabel_4->setContentsMargins(0, 0, 0, 0);
    ui->imglabel_4->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->imglabel_4->hide();
    ui->imgButton_4->setEnabled(false);
    ui->imglabel_5->setContentsMargins(0, 0, 0, 0);
    ui->imglabel_5->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->imglabel_5->hide();
    ui->imgButton_5->setEnabled(false);
    ui->imglabel_6->setContentsMargins(0, 0, 0, 0);
    ui->imglabel_6->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    ui->imglabel_6->hide();
    ui->imgButton_6->setEnabled(false);
}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::setQlabelImage() {//只设置图片，，因为推荐按钮隐藏《==》显示label
    QImage image;
    QSize labelSize=ui->imglabel_1->size();
    QVector<QPixmap> pixmaps;
    for(int i = 0;i<6;i++){
        QImage image= cuisines[i].get_img();
        image= image.scaled(labelSize,Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
        pixmaps.push_back(QPixmap::fromImage(image));
    }
    ui->imglabel_1->setPixmap(pixmaps[0]);
    ui->imglabel_2->setPixmap(pixmaps[1]);
    ui->imglabel_3->setPixmap(pixmaps[2]);
    ui->imglabel_4->setPixmap(pixmaps[3]);
    ui->imglabel_5->setPixmap(pixmaps[4]);
    ui->imglabel_6->setPixmap(pixmaps[5]);
    ui->imgButton_1->setEnabled(true);
    ui->imgButton_2->setEnabled(true);
    ui->imgButton_3->setEnabled(true);
    ui->imgButton_4->setEnabled(true);
    ui->imgButton_5->setEnabled(true);
    ui->imgButton_6->setEnabled(true);

}
void MainWindow::SetVector(QVector<Cuisine> _cuisines){
    cuisines = _cuisines;
}//没用

void MainWindow::on_imgButton_1_clicked()
{
    this->hide();
    CuisineDetails cuisinedetails(this,cuisines[0]);
    cuisinedetails.setModal(true);
    cuisinedetails.exec();
}
void MainWindow::on_imgButton_2_clicked()
{
    this->hide();
    CuisineDetails cuisinedetails(this,cuisines[1]);
    cuisinedetails.setModal(true);
    cuisinedetails.exec();

}void MainWindow::on_imgButton_3_clicked()
{
    this->hide();
    CuisineDetails cuisinedetails(this,cuisines[2]);
    cuisinedetails.setModal(true);
    cuisinedetails.exec();
}void MainWindow::on_imgButton_4_clicked()
{
    this->hide();
    CuisineDetails cuisinedetails(this,cuisines[3]);
    cuisinedetails.setModal(true);
    cuisinedetails.exec();
}void MainWindow::on_imgButton_5_clicked()
{
    this->hide();
    CuisineDetails cuisinedetails(this,cuisines[4]);
    cuisinedetails.setModal(true);
    cuisinedetails.exec();
}void MainWindow::on_imgButton_6_clicked()
{
    this->hide();
    CuisineDetails cuisinedetails(this,cuisines[5]);
    cuisinedetails.setModal(true);
    cuisinedetails.exec();
}//很原始


void MainWindow::testConstruct(int i){
    Cuisine tmp; tmp.test_construc("a");
    for(int i=0;i<cuisines_num;i++){
        cuisines[i] = tmp;
    }

}//for test 需要搭配这个文件夹里的改编版cuisine::test_construc(int);


void MainWindow::on_RandomButton_clicked()//随机推荐按钮
{
    //testConstruct(1);
    //setQlabelImage();
    ui->RandomButton->hide();
    ui->label->hide();
    ClientMsg Cmsg;
    Cmsg.msg_type=1;
    Cmsg.search_type=1111;
    Cmsg.k=cuisines_num;
    Cmsg.cuisine_name = "鱼香肉丝";//写着玩
    ui->pushButtonChange->show();
    ui->imglabel_1->show();
    ui->imglabel_2->show();
    ui->imglabel_3->show();
    ui->imglabel_4->show();
    ui->imglabel_5->show();
    ui->imglabel_6->show();
    socket.request(Cmsg);
}


void MainWindow::on_pushButtonChange_clicked()//换一批按钮
{
    //change the vector;
    ClientMsg Cmsg;
    Cmsg.msg_type=1;
    Cmsg.search_type=1111;
    Cmsg.k=cuisines_num;
    Cmsg.cuisine_name = "鱼香肉丝";//写着玩
    ui->imglabel_1->clear();
    ui->imglabel_2->clear();
    ui->imglabel_3->clear();
    ui->imglabel_4->clear();
    ui->imglabel_5->clear();
    ui->imglabel_6->clear();
    ui->imgButton_1->setEnabled(false);
    ui->imgButton_2->setEnabled(false);
    ui->imgButton_3->setEnabled(false);
    ui->imgButton_4->setEnabled(false);
    ui->imgButton_5->setEnabled(false);
    ui->imgButton_6->setEnabled(false);
    ui->imglabel_1->setText("loading");
    ui->imglabel_2->setText("loading");
    ui->imglabel_3->setText("loading");
    ui->imglabel_4->setText("loading");
    ui->imglabel_5->setText("loading");
    ui->imglabel_6->setText("loading");
    ui->imglabel_1->show();
    ui->imglabel_2->show();
    ui->imglabel_3->show();
    ui->imglabel_4->show();
    ui->imglabel_5->show();
    ui->imglabel_6->show();
    socket.request(Cmsg);
    //以上为copy
    //testConstruct(2);
    //setQlabelImage();
    //ui->imglabel_1->show();
    //ui->imglabel_2->show();
    //ui->imglabel_3->show();
    //ui->imglabel_4->show();
    //ui->imglabel_5->show();
    //ui->imglabel_6->show();
}


void MainWindow::on_pushButtonSearch_clicked()//搜索按钮
{
    QString currentText = ui->lineEditSearch->text();
    int currentindex_1 = ui->comboBox->currentIndex()+1;
    int currentindex_2 = ui->comboBox_2->currentIndex()+1;
    int currentindex_3 = ui->comboBox_3->currentIndex()+1;

    /// 我们不对cuisine添加固定标签做不到根据combobox标签搜索
    /// 只有所有菜都有 bool hot；1 for hot 则int currentindex_1才有用

    //qDebug()<<currentText<<currentindex_1<<currentindex_2<<currentindex_3;

    //change the vector;
    ClientMsg Cmsg;
    Cmsg.msg_type=1;
    Cmsg.search_type=2000;
    Cmsg.search_type+= currentindex_1*100;
    Cmsg.search_type+= currentindex_2*10;
    Cmsg.search_type+= currentindex_3;
    Cmsg.k=cuisines_num;
    Cmsg.cuisine_name = currentText;
    ui->RandomButton->hide();
    ui->label->hide();
    ui->imglabel_1->clear();
    ui->imglabel_2->clear();
    ui->imglabel_3->clear();
    ui->imglabel_4->clear();
    ui->imglabel_5->clear();
    ui->imglabel_6->clear();
    ui->imglabel_1->setText("loading");
    ui->imglabel_2->setText("loading");
    ui->imglabel_3->setText("loading");
    ui->imglabel_4->setText("loading");
    ui->imglabel_5->setText("loading");
    ui->imglabel_6->setText("loading");
    ui->imgButton_1->setEnabled(false);
    ui->imgButton_2->setEnabled(false);
    ui->imgButton_3->setEnabled(false);
    ui->imgButton_4->setEnabled(false);
    ui->imgButton_5->setEnabled(false);
    ui->imgButton_6->setEnabled(false);
    ui->imglabel_1->show();
    ui->imglabel_2->show();
    ui->imglabel_3->show();
    ui->imglabel_4->show();
    ui->imglabel_5->show();
    ui->imglabel_6->show();
    ui->pushButtonChange->show();
    socket.request(Cmsg);

    //setQlabelImage();
    //什么时候更新图片？？
    //ui->imglabel_1->show();
    //ui->imglabel_2->show();
    //ui->imglabel_3->show();
    //ui->imglabel_4->show();
    //ui->imglabel_5->show();
    //ui->imglabel_6->show();
}

void MainWindow::msg_ready_slot(ServerMsg Smsg){//slot（all in one）
    if(Smsg.msg_type==1){
        namelist = Smsg.cuisine_names;
        ClientMsg Cmsg;
        Cmsg.msg_type=0;
        Cmsg.search_type=2111;
        Cmsg.k=1;
        for(int i=0;i<cuisines_num;i++){
            Cmsg.cuisine_name = namelist[i];
            QThread::msleep(300);
            qDebug()<<i<<"requested";
            socket.request(Cmsg);
        }//获取list，然后挨个定向
    }
    else if(Smsg.msg_type==0){
        //根据list，将定向结果定位到vector[i]
        Cuisine tmp = Smsg.result;
        qDebug()<<tmp.get_name();
        int index = namelist.indexOf(tmp.get_name());
        cuisines[index]=tmp;
        ui->RandomButton->hide();//隐藏推荐按钮。这会导致用户可能连点两次，我感觉S连点两次会出bug。 T-T
        ui->label->hide();
        if(index==5){
            ui->imglabel_1->show();
             ui->imglabel_2->show();
            ui->imglabel_3->show();
            ui->imglabel_4->show();
            ui->imglabel_5->show();
            ui->imglabel_6->show();
            setQlabelImage();//定位至最后一个时，更新图片。
            ui->imgButton_1->setEnabled(true);
            ui->imgButton_2->setEnabled(true);
            ui->imgButton_3->setEnabled(true);
            ui->imgButton_4->setEnabled(true);
            ui->imgButton_5->setEnabled(true);
            ui->imgButton_6->setEnabled(true);
            //很草的逻辑，后期出问题再改
        }
    }
    else if(Smsg.msg_type==2){
        return;
    }
    else qDebug()<<"error msg type";
    return;
}



void MainWindow::on_pushButton_clicked()
{
    UpLoad* upload = new UpLoad(this);
    this->hide();
    upload->show();
}


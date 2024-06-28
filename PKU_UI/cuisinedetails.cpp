#include "cuisinedetails.h"
#include "ui_cuisinedetails.h"
#include "cuisine.h"
#include "msg.h"
#include "clientsocket.h"
#include "utilities.h"
#include "commentdetails.h"

void CuisineDetails::on_backToMain_clicked()
{

    ClientMsg msg;
    msg.cuisine_name=cuisine.get_name();
    msg.msg_type=2;
    if(flag1==1)
    {
        msg.k=1;
        socket.request(msg);
    }
    if(flag2==1)
    {
        msg.k=0;
        socket.request(msg);
    }
    parentWidget()->show();
    this->close();
}

CuisineDetails::CuisineDetails(QWidget *parent, Cuisine &c)
    : QDialog(parent)
    , ui(new Ui::CuisineDetails)
    , cuisine(c)
    , flag1(0)
    , flag2(0)
{
    this->setWindowTitle("PKU eater");
    ui->setupUi(this);
    connect(ui->newComment, &QLineEdit::returnPressed, ui->enterComment, &QPushButton::click);
    // Ensure QLabel has no extra margin or spacing
    ui->detailPicture->setContentsMargins(0, 0, 0, 0);
    ui->detailPicture->setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);

    // Get the QImage from the Cuisine object
    QImage cuisineImage = c.get_img();

    // Scale the QImage to fit within 300x450 while preserving the aspect ratio
    QImage scaledImage = cuisineImage.scaled(300, 450, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    // Convert the QImage to QPixmap
    QPixmap pix = QPixmap::fromImage(scaledImage);

    // Set the QPixmap on the label
    ui->detailPicture->setPixmap(pix);

    ui->cuisineName->setText(c.get_name());

    ui->vote->setText(QString::number(c.get_upvote()-c.get_downvote()));

    QString str;
    str="a";
    Compare0 cmp;
    QVector<QString> result;
    result = commentSearch_Base(3, cmp, str, cuisine.getVector()); // Use commentSearch_Base

    if(result.size()>0)
    {
        ui->comment1->setText(result.first());

        if(result.size()>1)
        {
            ui->comment2->setText(result.at(1));

            if(result.size()>2)
            {
                ui->comment3->setText(result.at(2));;
            }
        }
    }
}

CuisineDetails::~CuisineDetails()
{
    parentWidget()->show();
    delete ui;
}


void CuisineDetails::on_upvote_clicked()
{
    qDebug()<<flag1;
    if(flag1==0&&flag2==0)
    {
        cuisine.upvote();
        ui->vote->setText(QString::number(cuisine.get_upvote()-cuisine.get_downvote()));
        flag1=1;
        ui->upvote->setText("👍🏿");
    }
    else if(flag1==0&&flag2==1)
    {
        cuisine.upvote();
        cuisine.cancelDownvote();
        ui->vote->setText(QString::number(cuisine.get_upvote()-cuisine.get_downvote()));
        this->update();
        flag1=1;
        flag2=0;
        ui->upvote->setText("👍🏿");
        ui->downvote->setText("👎🏻");
    }
    else if(flag1==1)
    {
        cuisine.cancelUpvote();
        ui->vote->setText(QString::number(cuisine.get_upvote()-cuisine.get_downvote()));
        this->update();
        flag1=0;
        ui->upvote->setText("👍🏻");
    }
}
void CuisineDetails::paintEvent(QPaintEvent *event)
{
    QDialog::paintEvent(event);  // Call the base class paintEvent() function

    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);  // Enable anti-aliasing

    // Set the heights for each section
    int topRedSectionHeight = 50;    // Height of the top red section
    int bottomRedSectionHeight = 70; // Height of the bottom red section
    int whiteSectionHeight = height() - topRedSectionHeight - bottomRedSectionHeight; // Calculate the middle section height

    QColor PKURed(155, 4, 4);
    QColor PKUwhite(232, 230, 232);

    // Draw the first red section at the top
    painter.setBrush(PKURed);
    painter.drawRect(0, 0, width(), topRedSectionHeight);

    // Draw the white section in the middle
    painter.setBrush(PKUwhite);
    painter.drawRect(0, topRedSectionHeight, width(), whiteSectionHeight);

    // Draw the second red section at the bottom
    painter.setBrush(PKURed);
    painter.drawRect(0, topRedSectionHeight + whiteSectionHeight, width(), bottomRedSectionHeight);

    // You can also draw other custom shapes or patterns here if needed
}

void CuisineDetails::on_enterComment_clicked()
{
    QString text = ui->newComment->text();
    ui->newComment->clear();
    qDebug()<<text;
    cuisine.lo_cmt.append(text);
    cuisine.num_lo_cmt++;
    ClientMsg msg;
    msg.msg_type=3;
    msg.cuisine_name=cuisine.get_name();
    msg.cuisine_name.append("$");
    msg.cuisine_name.append(text);
    qDebug()<<msg.cuisine_name;
    socket.request(msg);
    if(cuisine.num_lo_cmt>0)
    {
        ui->comment1->setText(cuisine.lo_cmt.first());

        if(cuisine.num_lo_cmt>1)
        {
            ui->comment2->setText(cuisine.lo_cmt.at(1));

            if(cuisine.num_lo_cmt>2)
            {
                ui->comment3->setText(cuisine.lo_cmt.at(2));;
            }
        }
    }

}


void CuisineDetails::on_downvote_clicked()
{
    qDebug()<<flag1;
    if(flag1==0&&flag2==0)
    {
        cuisine.downvote();
        ui->vote->setText(QString::number(cuisine.get_upvote()-cuisine.get_downvote()));
        this->update();
        flag2=1;
        ui->downvote->setText("👎🏿");
    }
    else if(flag1==1&&flag2==0)
    {
        cuisine.cancelUpvote();
        cuisine.downvote();
        ui->vote->setText(QString::number(cuisine.get_upvote()-cuisine.get_downvote()));
        this->update();
        flag2=1;
        flag1=0;
        ui->downvote->setText("👎🏿");
        ui->upvote->setText("👍🏻");
    }
    else if(flag2==1)
    {
        cuisine.cancelDownvote();
        ui->vote->setText(QString::number(cuisine.get_upvote()-cuisine.get_downvote()));
        this->update();
        flag2=0;
        ui->downvote->setText("👎🏻");
    }
}


void CuisineDetails::on_changeSelectedComments_clicked()
{
    QString str;
    str="a";
    Compare0 cmp;
    QVector<QString> result;
    result = commentSearch_Base(3, cmp, str, cuisine.getVector()); // Use commentSearch_Base

    if(result.size()>0)
    {
        ui->comment1->setText(result.first());

        if(result.size()>1)
        {
            ui->comment2->setText(result.at(1));

            if(result.size()>2)
            {
                ui->comment3->setText(result.at(2));;
            }
        }
    }
}





void CuisineDetails::on_showAllComment_clicked()
{
    CommentDetails commentdetails (this,cuisine);

    commentdetails.setModal(true);
    commentdetails.exec();
}


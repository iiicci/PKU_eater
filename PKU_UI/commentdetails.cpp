#include "commentdetails.h"
#include "ui_commentdetails.h"
#include <QPainter>

CommentDetails::CommentDetails(QWidget *parent, Cuisine &c)
    : QDialog(parent)
    , ui(new Ui::CommentDetails)
    , cuisine(c)
    , page(1)
    , maxpage(c.lo_cmt.size()/10+1)
{
    this->setWindowTitle("PKU eater");
    ui->setupUi(this);

    if(cuisine.lo_cmt.size()>0)
    {
        ui->comment1->setText(cuisine.lo_cmt.at(0));
        if(cuisine.lo_cmt.size()>1){
            ui->comment2->setText(cuisine.lo_cmt.at(1));
            if(cuisine.lo_cmt.size()>2){
                ui->comment3->setText(cuisine.lo_cmt.at(2));
                if(cuisine.lo_cmt.size()>3){
                    ui->comment4->setText(cuisine.lo_cmt.at(3));
                    if(cuisine.lo_cmt.size()>4){
                        ui->comment5->setText(cuisine.lo_cmt.at(4));
                        if(cuisine.lo_cmt.size()>5){
                            ui->comment6->setText(cuisine.lo_cmt.at(5));
                            if(cuisine.lo_cmt.size()>6){
                                ui->comment7->setText(cuisine.lo_cmt.at(6));
                                if(cuisine.lo_cmt.size()>7){
                                    ui->comment8->setText(cuisine.lo_cmt.at(7));
                                    if(cuisine.lo_cmt.size()>8){
                                        ui->comment9->setText(cuisine.lo_cmt.at(8));
                                        if(cuisine.lo_cmt.size()>9){
                                            ui->comment10->setText(cuisine.lo_cmt.at(9));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

CommentDetails::~CommentDetails()
{
    delete ui;
}


void CommentDetails::on_backToCuisine_clicked()
{
    parentWidget()->show();
    this->close();
}


void CommentDetails::on_pageup_clicked()
{
    if(page<maxpage){
        ui->comment1->clear();
        ui->comment2->clear();
        ui->comment3->clear();
        ui->comment4->clear();
        ui->comment5->clear();
        ui->comment6->clear();
        ui->comment7->clear();
        ui->comment8->clear();
        ui->comment9->clear();
        ui->comment10->clear();

        if(cuisine.lo_cmt.size()>0+page*10)
        {
            ui->comment1->setText(cuisine.lo_cmt.at(0+page*10));
            if(cuisine.lo_cmt.size()>1+page*10){
                ui->comment2->setText(cuisine.lo_cmt.at(1+page*10));
                if(cuisine.lo_cmt.size()>2+page*10){
                    ui->comment3->setText(cuisine.lo_cmt.at(2+page*10));
                    if(cuisine.lo_cmt.size()>3+page*10){
                        ui->comment4->setText(cuisine.lo_cmt.at(3+page*10));
                        if(cuisine.lo_cmt.size()>4+page*10){
                            ui->comment5->setText(cuisine.lo_cmt.at(4+page*10));
                            if(cuisine.lo_cmt.size()>5+page*10){
                                ui->comment6->setText(cuisine.lo_cmt.at(5+page*10));
                                if(cuisine.lo_cmt.size()>6+page*10){
                                    ui->comment7->setText(cuisine.lo_cmt.at(6+page*10));
                                    if(cuisine.lo_cmt.size()>7+page*10){
                                        ui->comment8->setText(cuisine.lo_cmt.at(7+page*10));
                                        if(cuisine.lo_cmt.size()>8+page*10){
                                            ui->comment9->setText(cuisine.lo_cmt.at(8+page*10));
                                            if(cuisine.lo_cmt.size()>9+page*10){
                                                ui->comment10->setText(cuisine.lo_cmt.at(9+page*10));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if(page<maxpage)
        {page++;}
        qDebug()<<"a";
        ui->pagenumber->setText(QString::number(page));
    }
}


void CommentDetails::on_pagedown_clicked()
{
    if(page>1){
        ui->comment1->clear();
        ui->comment2->clear();
        ui->comment3->clear();
        ui->comment4->clear();
        ui->comment5->clear();
        ui->comment6->clear();
        ui->comment7->clear();
        ui->comment8->clear();
        ui->comment9->clear();
        ui->comment10->clear();

        if(cuisine.lo_cmt.size()>0+(page-2)*10)
        {
            ui->comment1->setText(cuisine.lo_cmt.at(0+(page-2)*10));
            if(cuisine.lo_cmt.size()>1+(page-2)*10){
                ui->comment2->setText(cuisine.lo_cmt.at(1+(page-2)*10));
                if(cuisine.lo_cmt.size()>2+(page-2)*10){
                    ui->comment3->setText(cuisine.lo_cmt.at(2+(page-2)*10));
                    if(cuisine.lo_cmt.size()>3+(page-2)*10){
                        ui->comment4->setText(cuisine.lo_cmt.at(3+(page-2)*10));
                        if(cuisine.lo_cmt.size()>4+(page-2)*10){
                            ui->comment5->setText(cuisine.lo_cmt.at(4+(page-2)*10));
                            if(cuisine.lo_cmt.size()>5+(page-2)*10){
                                ui->comment6->setText(cuisine.lo_cmt.at(5+(page-2)*10));
                                if(cuisine.lo_cmt.size()>6+(page-2)*10){
                                    ui->comment7->setText(cuisine.lo_cmt.at(6+(page-2)*10));
                                    if(cuisine.lo_cmt.size()>7+(page-2)*10){
                                        ui->comment8->setText(cuisine.lo_cmt.at(7+(page-2)*10));
                                        if(cuisine.lo_cmt.size()>8+(page-2)*10){
                                            ui->comment9->setText(cuisine.lo_cmt.at(8+(page-2)*10));
                                            if(cuisine.lo_cmt.size()>9+(page-2)*10){
                                                ui->comment10->setText(cuisine.lo_cmt.at(9+(page-2)*10));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        page--;
        ui->pagenumber->setText(QString::number(page));
        qDebug()<<"a";
    }
}
void CommentDetails::paintEvent(QPaintEvent *event)
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


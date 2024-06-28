#include "upload.h"
#include "json_cuisine.h"
#include "ui_upload.h"
#include <QPainter>

UpLoad::UpLoad(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::UpLoad)
{
    this->setWindowTitle("PKU eater");
    ui->setupUi(this);
    setAcceptDrops(true);
}

UpLoad::~UpLoad()
{
    parentWidget()->show();
    this->close();
    delete ui;
}

void UpLoad::on_buttonBox_accepted()
{
    if (ui->lineEdit->text() == ""){
        on_buttonBox_rejected();
    }
    UpLoadMsg msg;
    msg.msg_type = 4;
    msg.cuisine_name = ui->lineEdit->text();
    msg.label_1 = ui->comboBox_2->currentIndex();
    msg.label_2 = ui->comboBox_3->currentIndex();
    msg.label_3 = ui->comboBox_4->currentIndex();
    msg.img = img;
    Cuisine tmp;
    tmp.set_name(msg.cuisine_name);
    tmp.set_img(img);
    QString st="C://Users//wsshz//Desktop//newcuisines//";
    st+=msg.cuisine_name + ".json";
    saveCuisineToJson(tmp, st);
    parentWidget()->show();
    this->close();
}

void UpLoad::on_buttonBox_rejected()
{
    parentWidget()->show();
    this->close();
}


void UpLoad::dragEnterEvent(QDragEnterEvent *event) {
    if(!event->mimeData()->urls()[0].fileName().right(3).compare("jpg")
        ||!event->mimeData()->urls()[0].fileName().right(3).compare("png"))
        event->acceptProposedAction();
    else
        event->ignore();
}

void UpLoad::dropEvent(QDropEvent *event) {
    const QMimeData* qm=event->mimeData();//获取MIMEData
    QPixmap qp(qm->urls()[0].toLocalFile());
    //ui->label->resize(qpP.width(),qp.height());
    qp = qp.scaled(ui->label_2->size());
    ui->label_2->setPixmap(qp);//显示图片
    QImage imgg=qp.toImage();
    img = imgg;
}
void UpLoad::paintEvent(QPaintEvent *event)
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

#include "cuisine.h"
#include<qlabel.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <Qstring>
#include <QJsonValue>
#include<QBuffer>
#include<QJsonArray>
//#include "dialog.h"

//set
void Cuisine::set_name(const QString _name){
    name=_name;
    return;
}
void Cuisine::set_price(double _price){
    price=_price;
    return;
}
void Cuisine::set_place(QString _place){
    place=_place;
    return;
}
void Cuisine::set_ingred(QString _ingred){
    ingred=_ingred;
    return;
}
void Cuisine::set_avaitime(QString _avai_time){
    avai_time=_avai_time;
    return;
}
void Cuisine::set_img(QImage _img){
    img=_img;
    return;
}
int  Cuisine::set_tag(QString _tag){
    tag=_tag;
    return 1;
}

//get
const QString Cuisine::get_name() const{
    return name;
}
double Cuisine::get_price(){
    return price;
}

QString Cuisine::get_ingred(){
    return ingred;
}
QString Cuisine::get_avai_time(){
    return avai_time;
}
QString Cuisine::get_tag(){
    return tag;
}
QImage Cuisine::get_img(){
    return img;
}
double Cuisine::get_score(){
    return totalscore;
}

//score and vote
double Cuisine::rating(){
    totalscore = double(std::accumulate(sh_cmt.begin(),sh_cmt.end(),0.0))/sh_cmt.size();
    totalscore = totalscore*3 + 2;
    return totalscore;
}
void Cuisine::score(int up){
    sh_cmt.push_back(up);
    rating();
    return;
}
void Cuisine::upvote(){
    totalupvote++;
}
void Cuisine::downvote(){
    totaldownvote++;
}
void Cuisine::cancelUpvote(){
    totalupvote--;
}
void Cuisine::cancelDownvote(){
    totaldownvote--;
}
//QJsonObject<=>Cuisine
void Cuisine::fromJson(const QJsonObject &jsonObj) {
    name = jsonObj["name"].toString();
    price = jsonObj["price"].toDouble();
    place = jsonObj["place"].toString();
    ingred = jsonObj["ingred"].toString();
    avai_time = jsonObj["avai_time"].toString();
    tag = jsonObj["tag"].toString();
    totalscore = jsonObj["totalscore"].toDouble();
    num_lo_cmt = jsonObj["num_lo_cmt"].toInt();
    totalupvote = jsonObj["totalupvote"].toInt();
    totaldownvote = jsonObj["totaldownvote"].toInt();
    spicy = jsonObj["spicy"].toInt();
    hot = jsonObj["hot"].toInt();
    //读取QVector<int> lo_cmt
    QJsonArray shCmtArray = jsonObj["sh_cmt"].toArray();
    sh_cmt.clear();
    for (const QJsonValue &value : shCmtArray) {
        sh_cmt.append(value.toInt());
    }
    //读取QVector<QString> lo_cmt
    QJsonArray loCmtArray = jsonObj["lo_cmt"].toArray();
    lo_cmt.clear();
    for (const QJsonValue &value : loCmtArray) {
        lo_cmt.append(value.toString());
    }
    // 从Base64字符串解码图像
    QByteArray imgData = QByteArray::fromBase64(jsonObj["img"].toString().toLatin1());
    img.loadFromData(imgData, "PNG");
}
QJsonObject Cuisine::toJson() const {
    QJsonObject jsonObj;
    jsonObj["name"] = name;
    jsonObj["price"] = price;
    jsonObj["place"] = place;
    jsonObj["ingred"] = ingred;
    jsonObj["avai_time"] = avai_time;
    jsonObj["tag"]= tag;
    jsonObj["totalscore"] = totalscore;
    jsonObj["num_lo_cmt"] = num_lo_cmt;
    jsonObj["totalupvote"] = totalupvote;
    jsonObj["totaldownvote"] = totaldownvote;
    jsonObj["spicy"] = spicy;
    jsonObj["hot"] = hot;
    //保存QVector<int> sh_cmt
    QJsonArray shCmtArray;
    for (int value : sh_cmt) {
        shCmtArray.append(value);
    }
    jsonObj["sh_cmt"] = shCmtArray;
    //保存QVector<QString> lo_cmt
    QJsonArray loCmtArray;
    for (const QString &value : lo_cmt) {
        loCmtArray.append(value);
    }
    jsonObj["lo_cmt"] = loCmtArray;
    // 将图像转换为Base64字符串存储
    QByteArray byteArray;
    QBuffer buffer(&byteArray);
    buffer.open(QIODevice::WriteOnly);
    img.save(&buffer, "PNG");
    QString imgBase64 = QString::fromLatin1(byteArray.toBase64().data());
    jsonObj["img"] = imgBase64;
    return jsonObj;
}

//test(useless)
void Cuisine::test_construc(QString str){
    name = str;
    qDebug()<<name;
    img.load("C://Users//wsshz//Desktop//test4.jpg");
    upvote();
    downvote();
    downvote();
    upvote();
    upvote();
    upvote();
    upvote();
}
void Cuisine::test_prin(){
    //父类为当前类的窗口this
    QLabel *lb = new QLabel();
    lb->setPixmap(QPixmap::fromImage(img));
    //设置lable相对于父类的位置
    lb->setGeometry(img.rect());
    //lb->show();
    //Dialog a(*this);
    //a.show();
}


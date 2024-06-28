#include "mysocket.h"
#include "json_cuisine.h"
#include "utilities.h"

MySocket::MySocket(QObject *parent)
    : QTcpSocket{parent}
{
    connect(this, &MySocket::readyRead, this, &MySocket::receivedata);
    connect(this, &MySocket::disconnected, this, &MySocket::slotclientdisconnected);
}

void MySocket::receivedata(){
    ClientMsg tmp;
    QByteArray array = readAll();
    QDataStream qds(array);
    qds.setVersion(QDataStream::Qt_6_0);//使用6.0版本
    qds >> tmp.msg_type >> tmp.search_type >> tmp.k >> tmp.cuisine_name;
    qDebug() << "New msg received!" << "\n"
             << "msg_type: " << tmp.msg_type << "\n"
             << "search_type" << tmp.search_type << "\n"
             << "k: " << tmp.k << "\n"
             << "cuisine_name: " << tmp.cuisine_name;
    emit sendmsg(tmp, this->socketDescriptor());
}

void MySocket::slotclientdisconnected(){
    emit clientdisconnected(this->socketDescriptor());
}
//socket间的通信规则：
//（int）类型，0为json，1为Qstirng << （int）大小 << 二进制流
void MySocket::send_json(QString file_path){
    QByteArray jsonbyte = JsonToByte(file_path);
    QByteArray outbyte;
    QDataStream out(&outbyte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);
    out << qint64(0) << qint64(jsonbyte.size());
    out.writeRawData(jsonbyte, jsonbyte.size());
    this->write(outbyte);
    this->flush();
    qDebug() << "发送信息成功" << "\n"
             << "msg_type: " << 0 << "\n"
             << "totalbytes: " << jsonbyte.size() << "\n";
}

void MySocket::send_string(int search_type, int k, QString cuisine_name, QVector<Cuisine>& cuisine_lis, int label){
    QVector<QString> name_list;
    random_shuffle(cuisine_lis.begin(), cuisine_lis.end());
    switch (search_type) {
    case 1:
        name_list = search_Base<Compare1>(k, Compare1(), cuisine_name, label, cuisine_lis);
        break;
    case 2:
        name_list = search_Base<Compare3>(k, Compare3(), cuisine_name, label, cuisine_lis);
        break;
    default:
        break;
    }
    QByteArray names;
    for (auto it = name_list.begin(); it != name_list.end(); it++){
        names.append(it->toUtf8());
        names.append(QString(" ").toUtf8());
    }
    QByteArray outbyte;
    QDataStream out(&outbyte, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);
    out << qint64(1) << qint64(names.size());
    out.writeRawData(names, names.size());
    this->write(outbyte);
    this->flush();
    qDebug() << "发送信息成功" << "\n"
             << "msg_type: " << 1 << "\n"
             << "totalbytes: " << names.size() << "\n";
    return;
}

#include "clientsocket.h"

ClientSocket::ClientSocket(QObject *parent, int port)
    : QObject{parent}
{
    socket = new QTcpSocket();
    socket->connectToHost("127.0.0.1", port);

    connect(socket, &QTcpSocket::connected, this, &ClientSocket::handle_socket_connected);
    connect(socket, &QTcpSocket::disconnected, this, &ClientSocket::handle_socket_disconnected);
    connect(socket, &QTcpSocket::readyRead, this, &ClientSocket::read_server_msg);
}

void ClientSocket::handle_socket_connected(){
    qDebug() << "Successful connected!";
}

void ClientSocket::handle_socket_disconnected(){
    qDebug() << "Socket disconnected!";
}

void ClientSocket::read_data(){
    if (received_data.size() >= totalbytes){
        is_receiving = false;
        QByteArray tmp_data = received_data.left(totalbytes);
        if (cur_type == 0){
            QJsonDocument jsonDoc = QJsonDocument::fromJson(tmp_data);
            if (jsonDoc.isObject()){
                tmp.result.fromJson(jsonDoc.object());
                qDebug() << "cuisine msg ready!";
                emit msg_ready(tmp);
            }
            else{
                qDebug() << "json读取失败";
                qDebug() << received_data.size();
            }
        }
        else{
            QString tmp_str(tmp_data);
            tmp.cuisine_names = tmp_str.split(" ");
            emit msg_ready(tmp);
            qDebug() << "string msg ready!" << "\n"
                     << tmp_str;
        }
        received_data.remove(0, totalbytes);
    }
}

void ClientSocket::read_server_msg(){
    if (socket->bytesAvailable() > 0){
        received_data.append(socket->readAll());
    }
    //qDebug()<< received_data.size();

    if (is_receiving){
        read_data();
    }
    else{
        if (received_data.size() < sizeof(qint64) * 2){
            return;
        }
        is_receiving = true;
        QDataStream in(&received_data, QIODevice::ReadOnly);
        in.setVersion(QDataStream::Qt_6_0);

        in >> cur_type >> totalbytes;
        tmp.msg_type = cur_type;
        qDebug() << "读取信息头成功" << "\n"
                 << "msg_type: " << tmp.msg_type << "\n"
                 << "totalbytes: " << totalbytes << "\n";
        received_data.remove(0, sizeof(qint64) * 2);

        read_data();
    }
}

void ClientSocket::request(ClientMsg& msg){
    QByteArray outbytes;
    QDataStream out(&outbytes, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);

    out << msg.msg_type << msg.search_type << msg.k << msg.cuisine_name;
    socket->write(outbytes);
    socket->flush();
}

void ClientSocket::request(UpLoadMsg& msg){
    QByteArray outbytes;
    QDataStream out(&outbytes, QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_0);
    out << msg.msg_type << msg.label_1 << msg.label_2 << msg.label_3
        << msg.cuisine_name << qint64(msg.img.sizeInBytes()) << msg.img;
    socket->write(outbytes);
    socket->flush();
}

ClientSocket::~ClientSocket(){
    //socket->waitForBytesWritten();
    //socket->waitForDisconnected();
    delete socket;
}

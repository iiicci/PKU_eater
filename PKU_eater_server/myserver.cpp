#include "myserver.h"
#include "json_cuisine.h"

MyServer::MyServer(QObject* parent, int port, QString file_path) :
    QTcpServer(parent), library_path(file_path){
    listen(QHostAddress::Any, port);
    load_cuisines(file_path);
}

void MyServer::incomingConnection(qintptr socketDescriptor){
    //创建新的套接字并加入列表
    MySocket* client_socket = new MySocket(this);
    client_socket->setSocketDescriptor(socketDescriptor);
    socket_list.append(client_socket);
    //连接信号
    connect(client_socket, &MySocket::clientdisconnected, this, &MyServer::handle_client_disconnected);
    connect(client_socket, &MySocket::sendmsg, this, &MyServer::process_client_msg);
    qDebug() << "New connection, socketDescriptor:" << socketDescriptor;
}

void MyServer::load_cuisines(QString file_path){
    //从file_path文件夹读取所有的cuisine
    QDir dir(file_path);
    dir.setFilter(QDir::Files | QDir::NoDotAndDotDot);
    QFileInfoList fileInfos = dir.entryInfoList();
    foreach(const QFileInfo &fileInfo, fileInfos) {
        QString file_name = fileInfo.fileName();
        qDebug() << file_name;
        Cuisine tmp = readCuisineFromJson(file_path + "\\" + file_name);
        cuisine_list.append(tmp);
    }
    qDebug() << cuisine_list.size() << "cuisines successfully loaded";
}

void MyServer::handle_client_disconnected(int descriptor){
    for (int i = 0; i < socket_list.count(); i++){
        MySocket* item = socket_list.at(i);
        if (item->socketDescriptor() == descriptor){
            socket_list.removeAt(i);
            qDebug() << "A socket disconnect! socketDescriptor:" << descriptor;
            return;
        }
    }
    qDebug() << "A socket disconnect! No match socketDescriptor";
    return;
}

void MyServer::process_client_msg(ClientMsg msg, int descriptor){
    //找到发送消息的客户端
    MySocket* client;
    bool flag = true;
    for (int i = 0; i < socket_list.count(); i++){
        client = socket_list.at(i);
        if (client->socketDescriptor() == descriptor){
            flag = false;
            break;
        }
    }
    if (flag){
        qDebug() << "A msg received! No match socketDescriptor";
        return;
    }
    //解析消息并传回文件/string

    switch(msg.msg_type){
    case 0:
        client->send_json(library_path+"\\" + msg.cuisine_name + ".json");
        break;
    case 1:
        client->send_string(msg.search_type / 1000, msg.k, msg.cuisine_name, cuisine_list, msg.search_type % 1000);
        break;
    case 2:
        for (auto it = cuisine_list.begin(); it != cuisine_list.end(); it++){
            if (it->get_name() == msg.cuisine_name){
                if (msg.k == 0){
                    it->downvote();
                }
                else{
                    it->upvote();
                }
                saveCuisineToJson(*it, library_path+"\\" + msg.cuisine_name + ".json");
                qDebug() << "vote success";
                qDebug() << it->get_upvote() - it->get_downvote();
                break;
            }
        }
        break;
    case 3:{
        auto strlis = msg.cuisine_name.split("$");
        for (auto it = cuisine_list.begin(); it != cuisine_list.end(); it++){
            if (it->get_name() == strlis.at(0)){
                it->lo_cmt.append(strlis.at(1));
                saveCuisineToJson(*it, library_path+"\\" + strlis.at(0) + ".json");
                qDebug() << "comment success";
                qDebug() << strlis.at(1);
                break;
            }
        }
        break;
    }
    default:
        break;
    }

    QThread::msleep(100);
}

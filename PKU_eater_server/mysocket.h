#ifndef MYSOCKET_H
#define MYSOCKET_H

#include <QTcpSocket>
#include <QDataStream>
#include "msg.h"

class MySocket : public QTcpSocket
{
    Q_OBJECT
public:
    explicit MySocket(QObject *parent = nullptr);
    void send_json(QString file_name);
    void send_string(int search_type, int k, QString cuisine_name, QVector<Cuisine>& cuisine_lis, int label);
protected slots:
    void receivedata();// 从socket中获取msg
    void slotclientdisconnected();

signals:
    void sendmsg(ClientMsg, int);
    void clientdisconnected(int);
};

#endif // MYSOCKET_H

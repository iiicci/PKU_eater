#ifndef CLIENTSOCKET_H
#define CLIENTSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QThread>
#include "msg.h"

class ClientSocket : public QObject
{
    Q_OBJECT
public:
    QTcpSocket* socket;

    bool is_receiving = false;
    qint64 totalbytes = 0;
    qint64 cur_type = 0;
    QByteArray received_data;
    //QDataStream received_stream;
    ServerMsg tmp;

    explicit ClientSocket(QObject *parent = nullptr, int port = 1199);
    void request(ClientMsg& msg);
    void read_data();

    ~ClientSocket();
private slots:
    void handle_socket_disconnected();
    void handle_socket_connected();
    void read_server_msg();
signals:
    void msg_ready(ServerMsg);
};

#endif // CLIENTSOCKET_H

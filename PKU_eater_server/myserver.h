#ifndef MYSERVER_H
#define MYSERVER_H

#include <QTcpServer>
#include <QThread>
#include <QDir>
#include "mysocket.h"
#include "cuisine.h"


class MyServer : public QTcpServer
{
    Q_OBJECT
public:
    MyServer(QObject* parent, int port, QString file_path);
private:
    QVector<MySocket*> socket_list;
    QVector<Cuisine> cuisine_list;
    QString library_path;
    void incomingConnection(qintptr socketDescriptor) override;
    void load_cuisines(QString file_path);
private slots:
    void handle_client_disconnected(int descriptor);
    void process_client_msg(ClientMsg msg, int descriptor);

};

#endif // MYSERVER_H

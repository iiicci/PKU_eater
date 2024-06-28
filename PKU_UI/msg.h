#ifndef MSG_H
#define MSG_H

#include <Qstring>
#include <QVector>
#include "cuisine.h"

struct ClientMsg
{
    qint64 msg_type; // 0为定向查找， 1为搜索, 2为短评价
    qint64 search_type; // 启用的搜索算法，0为随机， 1为关键字查找， 2为编辑距离
    qint64 k; // 请求的cuisine个数
    QString cuisine_name; // 请求对应菜名
    ClientMsg(int msg_type_ = 0, int search_type_ = 0, int k_ = 1, QString name_ = ""):
        msg_type(msg_type_) , search_type(search_type_), k(k_), cuisine_name(name_) {}
};

struct ServerMsg
{
    qint64 msg_type; // 0为定向查找结果， 1为搜索结果（QString), 2为空的信息
    QStringList cuisine_names; // 搜索结果向量
    Cuisine result; // 定向查找结果
    ServerMsg(int msg_type_ = 0) : msg_type(msg_type_), cuisine_names(), result() {}
};

struct UpLoadMsg{
    qint64 msg_type;
    qint64 label_1;
    qint64 label_2;
    qint64 label_3;
    QString cuisine_name;
    QImage img;
};

#endif // MSG_H

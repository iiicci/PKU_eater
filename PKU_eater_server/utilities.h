#ifndef UTILITIES_H
#define UTILITIES_H

#include <QImage>
#include <QString>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include "cuisine.h"

using namespace std;

class Compare0 {
public:
    Compare0();
    float operator()(QString str, QString input) const;
};
//比较函数1:如果名字完全相同，则返回1，否则返回0
class Compare1 {
public:
    Compare1();
    float operator()(Cuisine cuisine, QString str, int label) ;
};
//比较函数2:如果名字部分相同，则返回1，否则返回0
class Compare2 {
public:
    Compare2();
    float operator()(Cuisine cuisine, QString str) const;
};
//比较函数3:Levenshtein 距离
class Compare3 {
public:
    Compare3();
    float operator()(Cuisine cuisine, QString str, int label);
};

//搜索框架
template<typename cmp>
QVector<QString> search_Base (int numOfResult,cmp Compare, QString input, int label, QVector<Cuisine> &cuisineList){
    // 创建一个临时向量来存储比较结果
    vector<pair<Cuisine, float>> temp;
    temp.reserve(cuisineList.size());

    // 比较每个 Cuisine 对象并将结果存储在临时向量中
    for (const Cuisine& cuisine : cuisineList) {
        temp.emplace_back(make_pair(cuisine, Compare(cuisine, input, label)));
    }

    // 按照比较结果从大到小排序
    sort(temp.begin(), temp.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    // 创建一个新的向量来存储前 numOfResult 个结果
    QVector<QString> result;
    result.reserve(numOfResult);

    // 将前 numOfResult 个结果复制到新向量中
    for (int i = 0; i < numOfResult && i < temp.size(); ++i) {
        result.append(temp[i].first.get_name());
    }
    return result;
}

template<typename cmp>
QVector<QString> commentSearch_Base (int numOfResult,cmp Compare, QString input, QVector<QString> &commentList){
    // 创建一个临时向量来存储比较结果
    vector<pair<QString, float>> temp;
    temp.reserve(commentList.size());

    // 比较每个 Cuisine 对象并将结果存储在临时向量中
    for (const QString& str : commentList) {
        temp.emplace_back(make_pair(str, Compare(str, input)));
    }

    // 按照比较结果从大到小排序
    sort(temp.begin(), temp.end(), [](const auto& a, const auto& b) {
        return a.second > b.second;
    });

    // 创建一个新的向量来存储前 numOfResult 个结果
    QVector<QString> result;
    result.reserve(numOfResult);

    // 将前 numOfResult 个结果复制到新向量中
    for (int i = 0; i < numOfResult && i < temp.size(); ++i) {
        result.append(temp[i].first);
    }
    return result;
}

#endif // UTILITIES_H

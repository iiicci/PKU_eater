#include "utilities.h"
#include<qlabel.h>
#include <QJsonDocument>
#include <QJsonObject>
#include <QFile>
#include <QString>
#include <QJsonValue>
#include<QBuffer>
#include<QJsonArray>
#include <random>
using namespace std;


Compare0::Compare0(){}
float Compare0::operator()(QString str, QString input) const{
    std::random_device rd;  // Obtain a random number from hardware
    std::mt19937 gen(rd()); // Seed the generator

        // Define the distribution
    std::uniform_real_distribution<float> distr(0.0f, 1.0f);

        // Generate and return a random number
        return distr(gen);
    }
//比较函数1:如果名字完全相同，则返回1，否则返回0
Compare1::Compare1() {}
float Compare1::operator()(Cuisine cuisine, QString str) const {
    if (cuisine.get_name() == str)
        return 1;
    else
        return 0;
}

//比较函数2:如果名字部分相同，则返回1，否则返回0
Compare2::Compare2(){}
float Compare2::operator()(Cuisine cuisine, QString str) const{
    if (cuisine.get_name().indexOf(str)!=-1)
        return 1;
    else
        return 0;
}

//比较函数3:Levenshtein 距离
Compare3::Compare3(){}
float Compare3::operator()(Cuisine cuisine, QString str) const{
    const size_t len1 = cuisine.get_name().size(), len2 = str.size();
    vector<vector<unsigned int>> d(len1 + 1, vector<unsigned int>(len2 + 1));

    //计算Levenshtein 距离
    d[0][0] = 0;
    for (unsigned int i = 1; i <= len1; ++i) d[i][0] = i;
    for (unsigned int i = 1; i <= len2; ++i) d[0][i] = i;

    for (unsigned int i = 1; i <= len1; ++i)
        for (unsigned int j = 1; j <= len2; ++j)
            d[i][j] = min({ d[i - 1][j] + 1, d[i][j - 1] + 1, d[i - 1][j - 1] + (cuisine.get_name()[i - 1] == str[j - 1] ? 0 : 1) });

    //将距离转换为匹配度
    int maxLen = max(cuisine.get_name().length(), str.length());
    if (maxLen == 0) return 1.0;
    int dist = d[len1][len2];
    return 1.0 - (double)dist / maxLen;
}

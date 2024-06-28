#include"json_cuisine.h"

Cuisine readCuisineFromJson(const QString &fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        // 处理文件无法打开的情况
    }

    QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll());
    QJsonObject cuisineJson = jsonDoc.object();

    Cuisine cuisine;
    cuisine.fromJson(cuisineJson);

    return cuisine;
}
bool saveCuisineToJson(const Cuisine &cuisine, const QString &fileName) {
    QJsonObject cuisineJson = cuisine.toJson();
    QJsonDocument jsonDoc(cuisineJson);

    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(jsonDoc.toJson());
        file.close();
        return 1;
    }
    return 0;
}
bool ByteToJson(const QByteArray byte ,const QString &fileName) {

    QJsonDocument jsonDoc = QJsonDocument::fromJson(byte);

    QFile file(fileName);
    if (file.open(QIODevice::WriteOnly)) {
        file.write(jsonDoc.toJson());
        file.close();
        return 1;
    }
    return 0;
}
QByteArray JsonToByte(const QString &fileName) {
    QFile file(fileName);
    if (!file.open(QIODevice::ReadOnly)) {
        // 处理文件无法打开的情况
    }

    QJsonDocument jsonDoc = QJsonDocument::fromJson(file.readAll());
    QByteArray byte = jsonDoc.toJson();
    return byte;
}

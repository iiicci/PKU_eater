#include "mainwindow.h"
#include<QDebug>
#include <QApplication>
#include "cuisine.h"
#include "json_cuisine.h"
using namespace std;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Cuisine cuisine;
    //cuisine.test_construc("多肉中指");
    //qDebug()<<saveCuisineToJson(cuisine,"D://DOWNLOAD_of//tmp//QT//cuisine6.json");
    MainWindow w;
    //w.paintEvent;
    w.show();
    //Cuisine cuisine;
    //cuisine.test_construc("鱼香肉丝");
    return a.exec();
}

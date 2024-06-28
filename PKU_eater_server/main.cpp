#include <QCoreApplication>
#include "myserver.h"
#include "json_cuisine.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    //Cuisine cuisine1;
    //cuisine1.test_construc("鱼香肉丝");
    //saveCuisineToJson(cuisine1,"D://DOWNLOAD_of//tmp//QT");

    MyServer ms(&a, 1199, "D://DOWNLOAD_of//tmp//QT");
    return a.exec();
}

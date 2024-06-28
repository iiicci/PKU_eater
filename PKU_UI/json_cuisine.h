#ifndef JSON_CUISINE_H
#define JSON_CUISINE_H

#include "cuisine.h"

//method: .json<=>Cuisine

Cuisine readCuisineFromJson(const QString &fileName);

bool saveCuisineToJson(const Cuisine &cuisine, const QString &fileName);
    //1 for success

Cuisine ArrayToCuisine(const QByteArray Array);

QByteArray CuisineToArray(const Cuisine cuisine);

#endif // JSON_CUISINE_H

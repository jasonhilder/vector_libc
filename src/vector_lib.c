#include "vector_lib.h"
#include <math.h>

Vec2D vector_add(Vec2D v1, Vec2D v2) {
    Vec2D result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    return result;
}

Vec2D vector_subtract(Vec2D v1, Vec2D v2) {
    Vec2D result;

    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    return result;
}

Vec2D vector_multiply(Vec2D v, double value) {
    Vec2D result;

    result.x = v.x * value;
    result.y = v.y * value;
    return result;
}

Vec2D vector_divide(Vec2D v, double value) {
    Vec2D result;    

    if(value != 0) {
        result.x = v.x / value;
        result.y = v.y / value;
    } else {
        // division by zero issue, returning original
        result = v;
    }

    return result;
}

double vector_magnitude(Vec2D v) {
    return sqrt((v.x * v.x) + (v.y * v.y));
}

double vector_dot_product(Vec2D v1, Vec2D v2) {
    return ((v1.x * v2.x) + (v1.y * v2.y));
}

double vector_distance(Vec2D v1, Vec2D v2) {
    Vec2D diff = vector_subtract(v1, v2);
    return vector_magnitude(diff);
}
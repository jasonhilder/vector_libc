#ifndef VECTOR_LIB
#define VECTOR_LIB

#include <math.h>

typedef struct Vec2D {
    double x;
    double y;
} Vec2D;

// Adds two 2D vectors
// v = ((x + x), (y + y))
Vec2D vector_add(const Vec2D v1, const Vec2D v2);

// Subtracts two 2D vectors
// v = ((x - x), (y - y))
Vec2D vector_subtract(const Vec2D v1, const Vec2D v2);

// Multiples a vector by a provided scalar/value:
// v = ((x * value), (y * value)) 
Vec2D vector_multiply(const Vec2D v, double value);

// Divides a vector by a provided scalar/value:
// v = ((x / value), (y / value)) 
Vec2D vector_divide(const Vec2D v, double value);

// Gets the magnitude(Length) of a vector
// applying the Pythagorean theorem, which states that 
// in a right-angled triangle, the square of the length of 
// the hypotenuse (the side opposite the right angle) is 
// equal to the sum of the squares of the lengths of the other two sides.
// v = sqrt((v.x * v.x) + (v.y * v.y)); 
double vector_length(const Vec2D v);

// Get the dot product of two Vectors:
// Multiple each dimension and sum their values
// v = ((x * x) + (y * y));
double vector_dot_product(const Vec2D v1, const Vec2D v2);

// Get the distance between two Vectors:
// We get the difference as in how much space between the 2 vectors first.
// That would be the distance between the two as a Vector Or... 
// the displacement from b to a. It's essentially the vector required to move from b to a.
// We can then use the magnitude function to get that distance as a scalar.
double vector_distance(const Vec2D v1, const Vec2D v2);

// Normalize a vector:
// First get the length of the vector argument with vector_length.
// Then we divide each component of the input by its length from
// the divide function. Scaling the vector so that its length becomes 1.
Vec2D vector_normalize(const Vec2D v1);


Vec2D vector_add(const Vec2D v1, const Vec2D v2) {
    Vec2D out = { (v1.x + v2.x), (v1.y + v2.y) }; 
    return out;
}

Vec2D vector_subtract(const Vec2D v1, const Vec2D v2) {
    Vec2D out = { (v1.x - v2.x), (v1.y - v2.y) }; 
    return out;
}

Vec2D vector_multiply(const Vec2D v, double value) {
    Vec2D out = { (v.x * value), (v.y * value) }; 
    return out;
}

Vec2D vector_divide(const Vec2D v, double value) {
    Vec2D out;    

    if(value != 0) {
        out.x = v.x / value;
        out.y = v.y / value;
    } else {
        // division by zero issue, returning original
        out = v;
    }

    return out;
}

double vector_length(const Vec2D v) {
    return sqrt((v.x * v.x) + (v.y * v.y));
}

double vector_dot_product(const Vec2D v1, const Vec2D v2) {
    return ((v1.x * v2.x) + (v1.y * v2.y));
}

double vector_distance(const Vec2D v1, const Vec2D v2) {
    Vec2D diff = vector_subtract(v1, v2);
    return vector_length(diff);
}

Vec2D vector_normalize(const Vec2D v1) {
    double mag = vector_length(v1);
    if (mag != 0) {
        return vector_divide(v1, mag);
    } else {
        // division by zero issue, returning original
        return v1;
    }
}

#endif /* VECTOR_LIB */

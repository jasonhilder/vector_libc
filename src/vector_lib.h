#ifndef VECTOR_LIB
#define VECTOR_LIB

typedef struct Vec2D {
    double x;
    double y;
} Vec2D;

// Adds two 2D vectors
// v = ((x + x), (y + y))
Vec2D vector_add(Vec2D v1, Vec2D v2);

// Subtracts two 2D vectors
// v = ((x - x), (y - y))
Vec2D vector_subtract(Vec2D v1, Vec2D v2);

// Multiples a vector by a provided scalar/value:
// v = ((x * s), (y * s)) 
Vec2D vector_multiply(Vec2D v, double value);

// Divides a vector by a provided scalar/value:
// v = ((x / s), (y / s)) 
Vec2D vector_divide(Vec2D v, double value);

// Gets the magnitude(Length) of a vector
// applying the Pythagorean theorem, which states that 
// in a right-angled triangle, the square of the length of 
// the hypotenuse (the side opposite the right angle) is 
// equal to the sum of the squares of the lengths of the other two sides.
// v = sqrt(v.x * v.x + v.y * v.y); 
double vector_magnitude(Vec2D v);

// Get the dot product of two Vectors:
// Multiple each dimension and sum their values
// v = ((x * x) + (y * y));
double vector_dot_product(Vec2D v1, Vec2D v2);

// Get the distance between two Vectors:
// We get the difference as in how much space between the 2 vectors first.
// That would be the distance between the two as a Vector Or... 
// the displacement from v2 to v1. It's essentially the vector required to move from v2 to v1.
// We can then use the magnitude function to get that distance as a scalar.
double vector_distance(Vec2D v1, Vec2D v2);

#endif /* VECTOR_LIB */

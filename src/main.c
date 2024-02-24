#include <stdio.h>
#include "vector_lib.h"

int main() {
    const Vec2D v1 = {10.0, 5.0};
    const Vec2D v2 = {3.0, 2.0};

    printf("Vector 1: (%.2f, %.2f)\n", v1.x, v1.y);
    printf("Vector 2: (%.2f, %.2f)\n", v2.x, v2.y);
    printf("-------------------------------\n");

    // Addition
    Vec2D sum = vector_add(v1, v2);
    printf("Sum: (%.2f, %.2f)\n", sum.x, sum.y);

    // Subtraction
    Vec2D diff = vector_subtract(v1, v2);
    printf("Difference: (%.2f, %.2f)\n", diff.x, diff.y);

    // Scalar multiplication
    Vec2D scaled = vector_multiply(v1, 2.0);
    printf("Scaled: (%.2f, %.2f)\n", scaled.x, scaled.y);

    // Scalar division
    Vec2D divided = vector_divide(v1, 2.0);
    printf("Divided: (%.2f, %.2f)\n", divided.x, divided.y);

    // Dot product
    double dot_prod = vector_dot_product(v1, v2);
    printf("Dot Product: %.2f\n", dot_prod);

    // Length
    double length_v1 = vector_length(v1);
    printf("Length of v1: %.2f\n", length_v1);
    double length_v2 = vector_length(v2);
    printf("Length of v2: %.2f\n", length_v2);

    // Distance between v1 and v2
    double distance_v1_v2 = vector_distance(v1, v2);
    printf("Distance between v1 and v2: %.2f\n", distance_v1_v2);

    // Normalize
    Vec2D normalized_v1 = vector_normalize(v1);
    printf("V1 Normalized: (%.2f, %.2f)\n", normalized_v1.x, normalized_v1.y);
    Vec2D normalized_v2 = vector_normalize(v2);
    printf("V2 Normalized: (%.2f, %.2f)\n", normalized_v2.x, normalized_v2.y);

    return 0;
}

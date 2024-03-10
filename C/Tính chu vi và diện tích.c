#include <stdio.h>
#include <math.h>

#define PI 3.14159  // Define PI constant

void area_perimeter_square(int a) {
    int area, perimeter;

    area = a * a;
    perimeter = 4 * a;

    printf("Square:\n");
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
    }

void area_perimeter_rectangle(int a, int b) {
    int area, perimeter;

    area = a * b;
    perimeter = 2 * a + 2 * b;

    printf("Rectangle:\n");
    printf("Area = %d\n", area);
    printf("Perimeter = %d\n", perimeter);
}

void area_perimeter_triangle(int a) {
    float area, perimeter;
    area = (float)(a * a * sqrt(3)) / 4;  
    perimeter = 3 * a;

    printf("Triangle:\n");
    printf("Area = %.2f\n", area);  
    printf("Perimeter = %f\n", perimeter);
}

void area_perimeter_circle(float r) {
    float area, perimeter;

    area = PI * r * r;
    perimeter = 2 * PI * r;

    printf("Circle:\n");
    printf("Area = %.2f\n", area);
    printf("Perimeter = %.2f\n", perimeter);
}

int main() {
    area_perimeter_square(5);
    area_perimeter_rectangle(5, 7);
    area_perimeter_triangle(3);
    area_perimeter_circle(5.0);
    return 0;
}

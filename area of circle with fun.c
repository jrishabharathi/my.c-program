#include <stdio.h>
float calculateArea(float radius);
int main() {
    float radius, area;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = calculateArea(radius);
    printf("Area of the circle is: %.2f\n", area);
    return 0;
}
float calculateArea(float radius) {
    float pi = 3.1416;
    return pi * radius * radius;
}

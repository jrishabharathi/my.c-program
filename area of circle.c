#include <stdio.h>

int main() {
    float radius, area;
    float pi = 3.1416; 
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("Area of the circle is: %.2f\n", area);

    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the first number (a): ");
    scanf("%d", &a);
    printf("Enter the second number (b): ");
    scanf("%d", &b);
    printf("Before swap: a = %d, b = %d\n", a, b);
    a = a + b;  
    b = a - b; 
    a = a - b; 
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

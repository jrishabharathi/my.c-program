#include <stdio.h>

int main() {
    double num1, num2, sum, difference, product, quotient;
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Division by zero is not allowed.\n");
    }
    printf("Sum = %.2lf\n", sum);
    printf("Difference = %.2lf\n", difference);
    printf("Product = %.2lf\n", product);

    if (num2 != 0) {
        printf("Quotient = %.2lf\n", quotient);
    }

    return 0;
}

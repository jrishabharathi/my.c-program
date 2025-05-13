#include <stdio.h>

int main() {
    float principal, rate, time, simpleInterest;

    // Taking input from user
    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    // Calculating simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Displaying the result
    printf("Simple Interest = %.2f\n", simpleInterest);

    return 0;
}


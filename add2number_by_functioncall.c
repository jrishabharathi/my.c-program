#include <stdio.h>
int add(int a, int b);

int main() {
    int n1, n2, sum;
    printf("Enter n1 number: ");
    scanf("%d", &n1);

    printf("Enter n2 number: ");
    scanf("%d", &n2);
    sum = add(n1, n2);
    printf("Sum = %d\n", sum);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

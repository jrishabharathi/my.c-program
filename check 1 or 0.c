#include <stdio.h>
int main() {
    int value;
    printf("Enter 0 or 1: ");
    scanf("%d", &value);
    if (value == 1) {
        printf("You entered ONE.\n");
    } else if (value == 0) {
        printf("You entered ZERO.\n");
    } else {
        printf("Invalid input! Please enter 0 or 1 only.\n");
    }

    return 0;
}

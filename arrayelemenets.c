#include <stdio.h>

int main() {
    int arr[5]; 
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, arr[i]);
    }

    return 0;
}

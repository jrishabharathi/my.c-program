#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};  
    int sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);  
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    printf("The sum of the array elements is: %d\n", sum);

    return 0;
}

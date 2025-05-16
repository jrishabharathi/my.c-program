#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  
    printf("Array elements:\n");
    printf("result is %d\n",*ptr);
    *ptr++;
    {
        printf("%d\n", *ptr);
    }

    return 0;
}

#include <stdio.h>
int main() {
    int x = 10;
    int *ptr;       
    ptr = &x;        
    printf("Value of x: %d\n", x);        
    printf("Address of x: %p\n", &x);
    printf("ptr holds: %p\n", ptr); 
    printf("Value pointed by ptr: %d\n", *ptr);
    return 0;
}

#include <stdio.h>
int main(){
    int x =10, y =20 ,z ;
    int *ptr1 = &x;
    int *ptr2 = &y;
    
    printf(" before swapx = %d y = %d\n",x,y);
    z =*ptr1;
    *ptr1 = *ptr2;
    *ptr2 = z;
    printf(" after swapx = %d y = %d",x,y);
    return 0;
}

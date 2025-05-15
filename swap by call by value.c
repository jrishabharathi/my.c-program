#include <stdio.h>
int main(){
    int x =10, y =20 ,z ;
    printf(" before swapx = %d y = %d\n",x,y);
    z =x;
    x = y;
    y = z;
    printf(" after swapx = %d y = %d",x,y);
    return 0;
}

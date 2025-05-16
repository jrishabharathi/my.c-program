#include <stdio.h>
int main()
{
    int a =10;
    int *b = &a;
    *b = *b + 20;
    printf("%d\n",a);
    printf("%d\n",*b);
    
    return 0;
}

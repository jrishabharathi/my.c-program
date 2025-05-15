#include <stdio.h>
int main()
{
    int num , reverse = 0,rem,original;
    printf("enter the value ofd num  ");
    scanf("%d", &num);
    original = num;
    while(num!=0){
        rem = num%10;
        reverse = reverse * 10 + rem ;
        num = num/=10;
    }
    if(reverse==original)
    { 
        printf("its palin");
    }
    else
    {
        printf("its not palin");
    }
}

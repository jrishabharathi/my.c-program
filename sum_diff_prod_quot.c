#include<stdio.h>
int main()
{
    float n1,n2;
    float sum,difference,product,quotient;
    printf("enter the first number");
    scanf("%d",&n1);
    printf("Enter the second number");
    scanf("%d",&n2);
    
    sum = n1+ n2;
    difference = n1 - n2;
    product = n1 * n2; 
    quotient = n1 / n2;
    printf(" %d\n%d\n%d\n%d\n",sum,difference,product,quotient);
    return 0;
    
}

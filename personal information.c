#include <stdio.h>
int main()
{
         int age;
         char name;
         float weight;
    printf("enter your age, name and weight:");
    scanf("%d",&age);
    scanf("%c",&name);
    scanf("%f",&weight);
    printf("\nname:\tage:\tweight:\n");
    scanf("%c\t%d\t%f\n",&name,&age,&weight);
}
 

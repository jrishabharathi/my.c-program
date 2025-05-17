#include <stdio.h>
struct employee{
    char name[30];
    int id;
    float salary;
    
    
};
int main(){
    int i;
struct employee emp[3];
    for(i=0;i<3;i++){
        printf("\nemployee : %d\n",i+1);
        printf("enter employee ID:");
        scanf("%d",&emp[i].id);
        printf("enter name of thr employee:");
        scanf("%s",&emp[i].salary);
        printf("enter salary of the employee");
        scanf("%f",&emp[i].salary);
    }
    for(i=0;i<3;i++){
    printf("Name:%d\n",emp[i].id);
    printf("Name:%s\n",emp[i].name);
    printf("Name:%f\n",emp[i].salary);
    }
    return 0;
}
    

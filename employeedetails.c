#include <stdio.h>
struct Employee {
    int id;
    char name[50];
    float salary;
};
int main() {
    struct Employee emp; 
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name);  
    printf("Enter Employee Salary: ");
    scanf("%f", &emp.salary);
    printf("\n--- Employee Details ---\n");
    printf("ID     : %d\n", emp.id);
    printf("Name   : %s\n", emp.name);
    printf("Salary : %.2f\n", emp.salary);

    return 0;
}

#include <stdio.h>
int main() {
    int marks;
    printf("Enter your marks (0–100): ");
    scanf("%d", &marks);
    if (marks < 0 || marks > 100) {
        printf("Invalid marks! Please enter between 0 and 100.\n");
    }
    else if (marks >= 40) {
        printf("Result: Pass\n");
    }
    else {
        printf("Result: Fail\n");
    }
    return 0;
}

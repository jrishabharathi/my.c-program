#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, result =0;
    printf("enter the value of num\n");
    scanf("%d", &num);
    original = num;
        
        while (original!= 0)
        {
            remainder = original% 10;
            result += remainder * remainder * remainder;
            original /= 10;
        }
        if (result == num) {
            printf(" it is a armstong number \n%d\n", num);
        }
        else
        {
            printf(" its not a armstong number \n%d\n", num);
        }
    }

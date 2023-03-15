#include <stdio.h>

int main() 
{
    int num, max = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

   
    if (num < 0) {
        num = -num;
    }

    while (num > 0) {
        int digit = num % 10;
        if (digit > max) {
            max = digit;
        }
        num /= 10;
    }

    printf("The maximum digit in the number is %d\n", max);

    return 0;
}


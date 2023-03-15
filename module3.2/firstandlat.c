#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    
    lastDigit = num % 10;

    sum = firstDigit + lastDigit;

    printf("The sum of the first and last digits of %d is %d\n", num, sum);

    return 0;
}


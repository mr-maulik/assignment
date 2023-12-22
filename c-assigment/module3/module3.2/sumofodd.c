#include <stdio.h>

int main()
 {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication Table:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num*i);
    }

    printf("Sum of Odd Numbers:\n");
    for(i = 1; i <= num; i++) {
        if(i % 2 != 0) { 
            sum += i;
        }
    }
    printf("The sum of odd numbers up to %d is %d\n", num, sum);

    return 0;
}
 

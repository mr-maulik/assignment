#include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    

    if (n <= 0) {
        printf("Invalid input.\n");
        return 0;
    }
    

    printf("Fibonacci Series: %d, %d, ", t1, t2);
    nextTerm = t1 + t2;
    
    
    while (nextTerm <= n) {
        printf("%d, ", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
    
    printf("\n");
    return 0;
}


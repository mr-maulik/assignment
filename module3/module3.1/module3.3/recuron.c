#include<stdio.h>
long int xyz(int n);

long int xyz(int n) 
{
    if (n>=1)
        return n*vasu(n-1);
    else
        return 1;
}

int main() 
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, vasu(n));
    return 0;
}

#include <stdio.h>

int main() 
{
    int rows = 5;
    int i, j;
    char alphabet = 'A'; 
    
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }
    
    return 0;
}
/*
A
BC
DEF
GHIJ
KLMNO
*/


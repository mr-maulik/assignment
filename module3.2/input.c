#include <stdio.h>

int main() 
{
   int num, sum = 0;
   printf("Enter 10 numbers:\n");

   for(int i=0; i<10; i++) {
      scanf("%d", &num);
      sum += num;
   }

   printf("The sum of the 10 numbers is %d", sum);
   return 0;
}

//Area of triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("Enter values of triangle sides a,b and c:");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle is:%f",area);
}
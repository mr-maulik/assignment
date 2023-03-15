#include<stdio.h>
void main()
{
	int y,ans;
	printf("enter year");
	scanf("%d",&y);
	ans=y%4;
	if(ans==0)
	{
		printf("\n the year %d is leap year",y);
	}
	else
	{
		printf("\n the year is not leap year");
	}
}

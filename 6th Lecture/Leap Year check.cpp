#include<stdio.h>
int main ()
{
	printf("\n\tPut the year : ");
	int x;
	scanf("%d", &x);
	if ((x%4==0 && x%100!=0)||(x%400==0))
	{
		printf("\n\t%d is a Leap Year",x);
	}
	else printf ("\n\t%d is not a Leap Year",x);
	return 0;
}

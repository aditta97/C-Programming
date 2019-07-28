#include<stdio.h>
int main ( )
{
	printf("\n\tPut the value : ");
	int x;
	scanf("%d",&x);
	if (x%2==0)
	{
		printf("\t%d is an Even number",x);
	}
	else printf("\t%d is a Odd Number",x);
	return 0;
}

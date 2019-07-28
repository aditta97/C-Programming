#include<stdio.h>
int main( )
{
	int x=1, i, y;
	printf("Enter e number : ");
	scanf("%d", &y);
	for(i=1; i<=y; i++)
	{
		x=x*i;
	}
	printf("The factorial is : %d", x);
	return 0;
}

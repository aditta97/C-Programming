#include<stdio.h>
int main()
{
	int x=1, i, y;
	printf("Enter a number: ");
	scanf("%d", &y);
	for(i=1; i<=y; i++)
	{
		x=x*i;
	}
	printf("Factorial is %d", x);
	return 0;
}

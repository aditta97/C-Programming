#include<stdio.h>
int main ( )
{
	printf("\n\t");
	int x, y;
	printf("Put the 1st value : ");
	scanf("%d", &x);
	printf("\n\tPut the 2nd value : ");
	scanf("%d", &y);
	if (x>y)
	{
		printf("\n\t%d is Maximum number",x);
		printf("\n\t%d is Minimum number",y);
		
	}
	else printf("\n\t%d is Maximum Number\n\t%d is Minimum number",y, x);
	
	return 0;
}

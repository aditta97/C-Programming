#include<stdio.h>
int main ( )
{
	printf("\n\t");
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("\n");
	if(x<z && y<z)
	{
		printf("\tMaxmimum number is : %d",z);
		return 0;
	}
	if(x<y && y>z)
	{
		printf("\tMaximum number is : %d",y);
	}
	if(x>y && x>z)
	{
		printf("\tMaximum number is : %d",x);
	}
	return 0;
}

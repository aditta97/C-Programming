#include<stdio.h>
int main ( )
{
	int i, sum=0;
	i=0;
	while(i<=10)
	{
		printf("%d\n", i);
		sum=sum+i;
		i++;
	}
	printf("The Summation is : %d",sum);
	return 0;
}

#include<stdio.h>
int main ()
{
	int i=2, sum;
	while (i<10)
	{
		printf("%d\n",i);
		i=i+2;
		sum=sum+i;
	}
	printf("The summation is : %d", sum);
	return 0;
}

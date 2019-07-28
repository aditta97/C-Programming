#include<stdio.h>
int main()
{
	int i, sum=0;
	for(i=1; i<=100; i=i+2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("The summation is : %d", sum);
	return 0;
}

#include<stdio.h>
int main ()
{
	int i, sum=0;
	for(i=2; i<10; i=i+2)
	{
		printf("%d\n",i);
		sum=sum+i;
	}
	printf("The sum is : %d\n",sum);
	return 0;
}

#include<stdio.h>
int main ()
{
	int i;
	printf("Checking leap year from 2000 from 2017");
	for(i=2000; i<=2017; i++)
	{
		if((i%4==0 && i%100!=0)||(i%400==0))
		{
			printf("\n%d is Leap Year\n", i);
		}
	}
	return 0;
}

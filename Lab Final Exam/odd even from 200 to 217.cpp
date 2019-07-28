#include<stdio.h>
int main()
{
	int i;
	printf("Checking odd & even number from 200 to 217");
	for(i=200; i<=217; i++)
	{
		if(i%2==0)
		{
			printf("\n%d is even number\n", i);
		}
		else printf("\n%d is odd number\n", i);
	}
	return 0;
}

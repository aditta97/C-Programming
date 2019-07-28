#include<stdio.h>
int main ()
{
	int i, a[5], sum=0;
	for(i=1; i<=5; i++)
	{
		printf("Enter the number : ", i);
		scanf("%d", &a[i]);
		sum=sum+a[i];
	}
	printf("The summation of 5 numbers is : %d", sum);
	printf("\nThe average is : %0.2f", (float)sum/5);
	return 0;
}

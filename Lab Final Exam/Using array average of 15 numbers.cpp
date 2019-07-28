#include<stdio.h>
int main ()
{
	int i, a[15], sum=0;
	for(i=1; i<=15; i++)	
	{
		printf("Put the number : ",i);
		scanf("%d", &a[i]);
  	    sum=sum+a[i];
	}
	printf("The average is : %0.2f", (float) sum/15);
	return 0;
}

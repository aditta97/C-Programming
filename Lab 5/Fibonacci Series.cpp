#include<stdio.h>
int main ()
{
	unsigned long long int x=0, y=1, i, n, z;
	printf("Enter the number of terms : ");
	scanf("%d", &n);
	printf("Fibonacci Series : ");
	for(i=1; i<=n; i++)
	{
		printf("%d\n", x);
		z = x + y;
		x = y;
		y = z;
	}
	return 0;
}

#include<stdio.h>
main()
{
	int x=10, y=3, z;
	z=x+y;
	printf("The summation is: %d",z);
	z=x-y;
	printf("\nThe subtraction is: %d",z);
	z=x*y;
	printf("\nThe multiplication is: %d",z);
	z=x/y;
	printf("\nThe division is: %d", z);
	z=x%y;
	printf("\nThe modulus is: %d", z);
	return 0;
}

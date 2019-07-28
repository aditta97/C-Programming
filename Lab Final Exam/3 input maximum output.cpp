#include<stdio.h>
int main ()
{
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if(x>y && x>z)
	printf("The maximum number is : %d", x);
	else if(x<y && y>z)
	printf("The maximum number is : %d", y);
	else if(x<z && y<z)
	printf("The maximum number is : %d", z);
	return 0;
}

#include<stdio.h>
int main ()
{
	int i;
	for(i=2; i<10; i+2)
	i=i+1;
	{
		if(i%2==0)
		{
			printf("%d is even number",i);
			return 0;
		}
	}
	
}

#include<stdio.h>
int main ( )
{
	int x;
	scanf("%d",&x);
	if (x==0)
	{
		printf("\t%d is Zero number",x);
	}
	else if (x>0)
	{
		printf("\t%d is Positive Number",x);
	}
	else printf("\t%d is Negative Number",x);
	return 0;
}

#include<stdio.h>
int main ()
{
	printf("\n\tPut the Letter : ");
	char c;
	scanf("%c,",&c);
	if (c>='A' && c<='Z')
	{
		printf("\t%c is Capital Letter",c);
	}
	else printf("\t%c is Small Letter",c);
	return 0;
}

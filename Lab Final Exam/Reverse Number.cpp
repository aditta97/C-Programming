#include<stdio.h>
int main()
{
    int i, x, reverse=0;

    printf("Enter any number: ");
    scanf("%d",&x);

    while(x!=0)
	{
         i=x%10;
         reverse=reverse*10+i;
         x=x/10;
    }

    printf("Reversed of number: %d",reverse);
    return 0;
}

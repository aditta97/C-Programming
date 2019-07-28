#include<stdio.h>
int main()
{
    int i, count=0;

    printf("\nPlease Enter any number\n");
    scanf("%d", &i);

    while(i>0)
    {
        i=i/10;
        count=count+1;
    }

    printf("\nDigits in a Given Number = %d", count);
    return 0;
}

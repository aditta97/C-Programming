#include<stdio.h>
int main ()
{
    printf("Prime number of 0 to 9\n");
	int i, x;
    for(i=0; i<=9; i++)
    {
        for(x=2; x<=i; x++)
        {
            if(i%x==0)
            break;
            else if(i==x+1)
            printf("%d\n",i);
        }
    }
    return 0;
}

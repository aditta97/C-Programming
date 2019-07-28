#include <stdio.h>
int main()
{
    int a[100], i, sum = 0;
    for (i=1; i<=6; i++)
    {
        printf("Enter element %d : ", i);
        scanf("%d", &a[i]);
        sum =sum+a[i];
    }
    printf("\nThe sum of the array is : %d", sum);
    printf("\nThe average of the array is : %d", (float)sum / 6);
    return 0;
}

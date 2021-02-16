#include "stdio.h"

int main()
{
    int n,i,j;
    printf("Enter a number");
    scanf("\n%d",&n);
    for (i=0;i<=n;i++)
    {
        for (j=i;j<n;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

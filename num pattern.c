#include "stdio.h"

void main()
{
    int n,i,j;
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=n;j++)
        {
            if(i==1&&j==1)
            printf("%d",n-1);
            else
                printf("%d",n);
        }
        printf("\n");
    }
    //return 0;
}

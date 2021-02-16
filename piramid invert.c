#include "stdio.h"

int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for (i=0;i<=n;i++)
    {
        for (j=1;j<=n;j++)
        {
            if(j<=i)
                printf(" ");
            else{
                printf("*");
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

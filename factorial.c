// Factorial value of a number

#include "stdio.h"

int main()
{
    int n,i,f=1;
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        f=f*i;
    }
    printf("\n%d",f);
    return 0;
}

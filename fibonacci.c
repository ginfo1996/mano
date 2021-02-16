//program for fibonacci

#include<stdio.h>

void main()
{
    int n,i,a=-1,b=1,c;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",a);
    }

}

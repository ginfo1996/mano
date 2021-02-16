//The given number is prime or not

#include<stdio.h>
void main()
{
    int n,i,flag=0,m;
    printf("Enter a number\n");
    scanf("\n%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("\n%d is not a prime number",n);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n%d is a prime number",n);
    }

}

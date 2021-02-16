//Print the number in character between the range and check whether odd or even
/*Example op
Input:
3
8

output:
three
four
five
six
seven
eight


odd
even
*/

#include "stdio.h"
#include "string.h"

int main()
{
    char num[9][6]={"one","two","three","four","five","six","seven","eight","nine"};
    int i,a,b;
    printf("Enter two numbers between 1 to 9:\n");
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        printf("%s\n",num[i-1]);
    }
     if(a%2==0)
    {
        printf("\neven");
    }
    else
    {
        printf("\nodd");
    }
    if(b%2==0)
    {
        printf("\neven");
    }
    else{
        printf("\nodd");
    }
}

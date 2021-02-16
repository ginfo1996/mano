//Printing pattern



#include "stdio.h"
/*
*
**
***
****
*****
*/

/*int main()
{
    int n,i,j;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/


/*
*****
****
***
**
*
*/

int main()
{
    int n,i,j;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;i<=j;j--)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}


/*
    *
   **
  ***
 ****
*****
*/

/*int main()
{
    int n,i,j,k;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/


/*
*****
 ****
  ***
   **
    *
*/

/*int main()
{
    int n,i,j,k;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=n;k++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

/*
    *
   * *
  * * *
 * * * *
* * * * *

*/

/*
void main()
{
    int n,i,j,k;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}
*/



/*
* * * * *
 * * * *
  * * *
   * *
    *

*/

/*void main()
{
    int n,i,j,k;
    printf("Enter a number:\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=i;k<=n;k++)
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}
*/

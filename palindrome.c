//Palindrome or not

#include <stdio.h>

int main()
{

  int n,remainder,sum=0;
  printf("Enter a number");
  scanf("%d", &n);
  int temp=n;
  while(n!=0)
  {
    remainder=n%10;
    sum=sum*10+remainder;
    n=n/10;
  }
  if(sum==temp)
    printf("%d is paliindrome",sum);

  else
    printf("%d is not a palindrome",sum);
  return 0;
}

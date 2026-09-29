#include<stdio.h>
int main()
{
  int i,n,j;
  unsigned long long int fact;
  printf("enter any number :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    fact=1;
    for(j=1;j<=i;j++)
    {
      fact=fact*j;
    }
    printf("factorial of  %d is %llu\n",i,fact);
  }
  return 0;
}
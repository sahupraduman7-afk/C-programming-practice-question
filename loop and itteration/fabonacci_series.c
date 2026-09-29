#include<stdio.h>
int main()
{

  unsigned long long last,count,n1=0,n2=1,nextterm;
  printf("enter the last number you want on your series:");
  scanf("%llu",&last);
  for(count=0;count<=last;count++)
  {
    nextterm=n1+n2;
    printf("%llu\n",nextterm);
    n1=n2;
    n2=nextterm;
  }
  return 0;
}
#include<stdio.h>
int main()
{
   long int a,b,c;
  unsigned long long int max,lcm;
  printf("enter any three number to find the lcm of those numbers\n");
  scanf("%ld%ld%ld",&a,&b,&c);
  max=(a>b)?((a>c)?a:c):((b>c)?b:c);
  while(1)
  {
    if(max%a==0 && max%b==0 && max%c==0)
    {
      lcm=max;
      break;
    }
    max++;
  }
  printf("the lcm of %ld,%ld and %ld is %llu",a,b,c,lcm);
  return 0;
}
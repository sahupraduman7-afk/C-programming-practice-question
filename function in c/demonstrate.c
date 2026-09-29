#include<stdio.h>
int increment(int);
int main()
{
  int a,inc;
  printf("enter any value:");
  scanf("%d",&a);
  printf("the number before increment is %d",a);
  increment(a);
  //printf("\nthe number after increment is %d",inc);
  return 0;
}
int increment(int x)
{
  x=x+1;
  printf("\nthe number after increment is %d",x);
  return 0;
}

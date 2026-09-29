#include<stdio.h>
float average(int,int,int,int,int);
int main()
{
  int a,b,c,d,e;
  float avg;
  printf("enter five numbers two know the average of that:");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  avg=average(a,b,c,d,e);
  printf("the average of those numbers is %f",avg);
  return 0;
}

float average(int p,int q,int r,int s,int t)
{
  return (p+q+r+s+t)/5;
}
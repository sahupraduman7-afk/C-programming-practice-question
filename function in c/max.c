#include<stdio.h>
float max(float,float);
int main()
{
float a,b,large;
printf("enter two value you want to compare which one is larger the another one :");
scanf("%f%f",&a,&b);
large=max(a,b);
printf("the larger number is :%f",large);
return 0;
}
float max(float x,float y)
{
  float large;
  large=(x>y)?x:y;
  return large;
}
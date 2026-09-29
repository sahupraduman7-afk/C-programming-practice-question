#include<stdio.h>
double sqr(float);
int main()
{
  float a;
  double square;
  printf("enter the number you the square :");
  scanf("%f",&a);
  square=sqr(a);
  printf("the square of %.1f is %.2lf",a,square);
  return 0;
}
double sqr (float x)
{
  double square;
  square=x*x;
  return square;
}
#include<stdio.h>
float add (float, float, float ,float);//during the declaration of function there is no need to pass the parameters,only parameter type is enough but during the function writing passing of parameter is compulsery..
int main()
{
float a,b,c,d;
float addition;
printf("enter the value of a ,b,c,d:");
scanf("%f%f%f%f",&a,&b,&c,&d);
addition=add(a,b,c,d);
printf("the addition is %f",addition);
return 0;
}
float add(float x,float y,float z,float a)//write the function
{
 float sum;
  sum = a+x+y+z;
  return sum;
//   OR
// return a+x+y+z;
}
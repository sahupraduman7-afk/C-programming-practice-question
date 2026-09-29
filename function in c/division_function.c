#include<stdio.h>
float divide (float, float);//during the declaration of function there is no need to pass the parameters,only parameter type is enough but during the function writing passing of parameter is compulsery..
int main()
{
float a,b;
float division;
printf("enter the value of a ,b:");
scanf("%f%f",&a,&b);
if(b!=0){
division=divide(a,b);
printf("the division is %f",division);
}
else{
  printf("please enter valid number");
}

return 0;
}
float divide(float x,float y)//write the function
{
 float div;
  div = x/y;
  return div;
//   OR
// return a+x+y+z;
}
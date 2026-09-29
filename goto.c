#include<stdio.h>
int main()
{
int a;
label1:  // label for goto
printf("input the number:");
scanf ("%d",&a);
if (a!=5){
  goto label1;   //return back to label
}
else {
  printf("you enterd %d",a);
}
return 0;
}
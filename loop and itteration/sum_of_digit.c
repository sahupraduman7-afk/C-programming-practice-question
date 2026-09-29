#include<stdio.h>
int main()
{
 int num, sum = 0, digit,temp;
 printf("Enter a number: ");  
 scanf("%d", &num);
temp=num;
 while(num > 0)
 {
  digit=num%10;// Get the last digit
  sum=sum+digit;// Add it to sum
 num=num/10; // Remove the last digit
 }
printf("sum of digit of %d is %d",temp,sum);
return 0;
}
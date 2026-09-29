#include <stdio.h>
int main()
{

  int i ;int num;
  printf("enter the number you want to print for 1 to that number:");

  scanf("%d",&num);
  i=1;
  while (i<= num)
  {
   printf("%d\n",i); 
    i++;
  }
  return 0;
}
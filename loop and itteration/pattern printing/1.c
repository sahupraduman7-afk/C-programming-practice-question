#include <stdio.h>
int main ()
{
int i,j,no;
printf("enter the number of rows in you pattern");
scanf("%d",&no);
for (i=1;i<=no;i++)
{
  for(j=1;j<=i;j++)
  {
    printf("*");

  }
  printf("\n");
}
}
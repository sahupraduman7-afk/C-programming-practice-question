#include <stdio.h>
int main ()
{
int i,j, k,no;
printf("enter the number of rows in you pattern");
scanf("%d",&no);
for (i=1;i<=no;i++)
{
  for(j=i;j<=no;j++)
  {
    printf(" ");

  }
 
  for(k=1;k<=i;k++)
  {
    printf("*");

  }
  printf("\n");
  
}
return 0;
}
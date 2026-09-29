#include<stdio.h>
int main()
{
  int no,temp,rev=0,dig;
  printf("ener the numbeer you want to check it is palindrome or not : ");
  scanf("%d",&no);
  temp=no;
  while(no>0)
  {
    dig=no%10;
    rev=(rev*10)+dig;
    no=no/10;

  }
  if(rev==temp)
  {
    printf("this number  %d is palindrome",temp);
  }
  return 0;
}
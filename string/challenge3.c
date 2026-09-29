#include<stdio.h>
#include <string.h>
int main()
{
  char str[50];
  printf("enter any string:");
  fgets(str, sizeof(str),stdin);
  printf("the uppercased string is ---%s",strupr(str));
  return 0;
}
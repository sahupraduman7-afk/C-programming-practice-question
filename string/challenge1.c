#include<stdio.h>
#include<string.h>
int main()
{
  char str[100];
  printf("enter any sentence: ");
  fgets(str,sizeof(str),stdin);
  puts(str);
  return 0;
}
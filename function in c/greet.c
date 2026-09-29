#include <stdio.h>
void greet(void);
int main()
{
  int n;
  printf("enter 1 for greetings\n");
  scanf("%d",&n);
  if(n==1)
  {
    greet();
  }
  else
  {
    printf("please enter valid number\n");
  }
  return 0;
}

void greet(void)
{
  printf("hello  world");
}
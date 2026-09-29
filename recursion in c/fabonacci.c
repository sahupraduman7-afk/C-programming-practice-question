#include <stdio.h>
int fabonacci(int n)
{
  if (n==0)
  {
    return 0;
  }
  else if (n==1)
  {
    return 1;
  }
  else
  {
    return (fabonacci(n-1) + fabonacci(n-2));
  }
}
  void print_fabonacci(int x, int y)
  {
    if(y==x)
    {
      return;
    }
    else
    {
      printf("%d ", fabonacci(y));
      print_fabonacci(x, y+1);
    }
  }
    


int main()
{
  int n;
  printf("enter the number of terms in your fibonacci series: ");
  scanf("%d", &n);
  print_fabonacci(n,0);
  return 0;
}
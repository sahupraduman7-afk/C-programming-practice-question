#include<stdio.h>
void print(int x)
{
if (x==0)
  return;

printf("%d\n",x);
print(x-1);
}
int main()
{
int n;
printf("enter n:");
scanf("%d",&n);
print(n);
return 0;
}
#include<stdio.h>
int main()
{
    int a=10;
    int *p=&a;
    printf("Value of a is %d\n",*p);
    *p=20;
    printf("Value of a is %d\n",*p);
    return 0;
}
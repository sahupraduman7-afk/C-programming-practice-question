#include<stdio.h>
void minmax(int*a,int*b)
{
    int  min,max;
    if(*a<*b)
    {
        min=*a;
        max=*b;
    }
    else
    {
        min=*b;
        max=*a;
    }
    printf("Minimum number is %d\n",min);
    printf("Maximum number is %d\n",max);
}
int main()
{
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);

    minmax(&a,&b);
    
    return 0;
}
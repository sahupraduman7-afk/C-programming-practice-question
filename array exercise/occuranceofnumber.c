#include <stdio.h>
int main()
{
    int n,count=0,i,test;
    printf("enter number of element you want in your array\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d element in array\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("\n we  are going to check the occurence of an element\n");
    printf("enter the element you want to check\n");
    scanf("%d",&test);
    for(i=0;i<n;i++)
        if(arr[i]==test)
            count++;

    printf("the number of %d is %d",test,count);
    return 0;
}
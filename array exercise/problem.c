#include<stdio.h>
void if_sum(int arr[],int size)
{
  int i,j;
for (i=0;i<size-1;i++)
{
  for (j=i+1;j<size;j++)
  {
    if (arr[i]+arr[j]==5)
    {
      printf("\n%d and %d is in %d and %d position ",arr[i],arr[j],i+1,j+1);
    }
   
  }
}
}
int main()
{
  int arr[6]={4,1,3,2,5,6,};
  int size=6;
   if_sum(arr,size);
}
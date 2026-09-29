#include <stdio.h>
void del(int arr[], int n, int newarr[], int target)
{
  int i,j=0;
for(i=0;i<n;i++)
{
  if(arr[i]==target)
  {
    continue;
  }
  newarr[j++]=arr[i];

}
printf("your array is after deletion\n");
for(i=0;i<j;i++)
{
  printf("  %d",newarr[i]);
}
printf("\n%d",newarr[2]);
}
int main()
{
  int n, i;
  printf("enter the number of element in you array: \n");
  scanf("%d", &n);
  int arr[n], target, newarr[n];
  printf("enter %d element in your array.\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  for (i = 0; i < n; i++)
  {
    printf("  %d", arr[i]);
  }
  printf("\nenter the element you want to delete\n");
  scanf("%d",&target);
  printf("we are going to call the  function of deletion.\n");
  del(arr,n,newarr,target);
  return 0;
}
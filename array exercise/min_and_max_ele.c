#include <stdio.h>
int main()
{
  int n, i;
  int min, max;
  printf("enter number of element you want in your array\n");
  scanf("%d", &n);
  int arr[n];
  printf("enter %d element in array\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  min = arr[0], max = arr[0];
  printf("we are going to check the the max and min\n");
  for (i = 0; i < n; i++)
  {
    if (arr[i] < min)
      min = arr[i];
    if (arr[i] > max)
      max = arr[i];
  }
  printf("the min element is %d and max elemnet is %d", min,max);
  return 0;
}
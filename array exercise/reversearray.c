#include <stdio.h>
void swap(int *, int *);
void print(int arr[], int n);
void rev(int arr[], int n)

{
  int i, j = 0;

  for (i = 0; i < n / 2; i++)
  {
    swap(&arr[i], &arr[n - 1 - i]);
  }
}
void print(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("  %d", arr[i]);
  }
}

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}
int main()
{
  int arr2[7] = {1, 2, 3, 4, 5, 5, 6};
  int n, i;
  printf("enter the number of element in you array: \n");
  scanf("%d", &n);
  int arr[n];
  printf("enter %d element in your array.\n", n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  printf("your array is :");
  print(arr, n);

  //i make the indivisual print function so that we don't have to write the print code again and again
  // for (i = 0; i < n; i++)
  // {
  //   printf("  %d", arr[i]);
  // }
  
  printf("\nwe are going to call the  function of reverse.\n");
  rev(arr, n);
  printf("your array is after reverse\n");
  print(arr, n);
  printf("your array2 is after reverse\n");
  rev(arr2, 7);
  print(arr2, 7);
  return 0;
}

// #include <stdio.h>
// void del(int arr[], int n, int newarr[])
// {
//   int i,j=0;
// for(i=n-1;i>=0;i--)
// {

//   newarr[j++]=arr[i];

// }
// printf("your array is after reverse\n");
// for(i=0;i<j;i++)
// {
//   printf("  %d",newarr[i]);
// }
// printf("\n%d",newarr[2]);
// }
// int main()
// {
//   int n, i;
//   printf("enter the number of element in you array: \n");
//   scanf("%d", &n);
//   int arr[n], newarr[n];
//   printf("enter %d element in your array.\n", n);
//   for (i = 0; i < n; i++)
//   {
//     scanf("%d", &arr[i]);
//   }

//   printf("your array is :");
//   for (i = 0; i < n; i++)
//   {
//     printf("  %d", arr[i]);
//   }
//   // printf("\nenter the element you want to delete\n");
//   // scanf("%d",&target);
//   printf("we are going to call the  function of reverse.\n");
//   del(arr,n,newarr);
//   return 0;
// }
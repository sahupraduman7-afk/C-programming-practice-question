#include<stdio.h>
void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int merged[]);
int main()
{ 
  int arr1[5] = {1, 3, 5, 7, 9};
  int arr2[5] = {2, 4, 6, 8, 10};
  int merged[10];

  merge_sorted_arrays(arr1, 5, arr2, 5, merged);

  printf("Merged array: ");
  for (int i = 0; i < 10; i++)
  {
    printf("%d ", merged[i]);
  }
  printf("\n");
  return 0;
}

void merge_sorted_arrays(int arr1[], int size1, int arr2[], int size2, int merged[])
{
  int i = 0, j = 0, k = 0;

  while (i < size1 && j < size2)
  {
    if (arr1[i] < arr2[j])
    {
      merged[k++] = arr1[i++];
    }
    else
    {
      merged[k++] = arr2[j++];
    }
  }

  while (i < size1)
  {
    merged[k++] = arr1[i++];
  }

  while (j < size2)
  {
    merged[k++] = arr2[j++];
  }
}
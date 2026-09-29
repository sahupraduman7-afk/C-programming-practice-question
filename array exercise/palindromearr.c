#include <stdio.h>
int isPalindrome(int arr[], int size) {
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - 1 - i]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}
int main()
{
  int  arr1[6]={1,2,3,2,1,1};//not a palindrome
  int arr2[8]={'a','b','c','d','d','c','b','a'};//palindrome
  int size1=sizeof(arr1)/sizeof(arr1[0]);
  int size2=sizeof(arr2)/sizeof(arr2[0]);
  if(isPalindrome(arr1,size1))
  {
    printf("arr1 is a palindrome\n");
  }
  else
  {
    printf("arr1 is not a palindrome\n");
  }
  if(isPalindrome(arr2,size2))
  {
    printf("arr2 is a palindrome\n");
  }
  else
  {
    printf("arr2 is not a palindrome\n");
  }
  return 0;
}
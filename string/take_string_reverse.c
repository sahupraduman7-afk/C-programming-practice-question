#include<stdio.h>
#include<string.h>
void reverse(char str[])
{
  int len = strlen(str);
  for(int i = 0;i < len/2;i++)
  {
    
    char temp = str[i];
    str[i] = str[len - i - 1];
    str[len - i - 1] = temp;
  }

}
int main()
{
  char str[50];
  printf("enter a string: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = 0; // Remove newline character if present
  int len = strlen(str);
  printf("%d\n", len);
  reverse(str);
  printf("\nReversed string: %s\n", str);
  return 0;


}
#include<stdio.h>
#include<string.h>
int main()
{
  char input[100];
  char trimmed[100];
  printf("Enter a string: ");
  fgets(input,sizeof(input),stdin);
  int len=strlen(input);
  int start=0;
  int end=len-1;
  while(input[start]==' ' ||input[start]=='\t'||input[start]=='\n ') start++;
  while(input[end]==' '||input[end]=='\t'||input[end]=='\0 ') end--;
  for (int i=0;i<=end-start;i++)
  {
    trimmed[i]=input[start+i];
  }
  printf("Trimmed string: %s\n",trimmed);
  return 0;
  
}
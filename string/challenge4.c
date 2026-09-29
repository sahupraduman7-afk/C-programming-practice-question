#include<stdio.h>
#include<string.h>
int main()
{
  const char password[20] = "ramji";
  char enter[20];
 // strcpy(password,"ramji");
  printf("enter pasword to proceed further:");
  scanf("%s",&enter);
  //fgets(enter,sizeof(enter),stdin);
  // enter[strcspn(enter,"\n")] = '\0'; // Remove newline character that means enter[strlen(enter)-1] = '\0';or enter[5] = '\0';
  if(strcmp(enter,password)==0)
  {
    printf("\nyou have unlocked this.");
  } 
  else{
    printf("wrong pasword");}
return 0;
}
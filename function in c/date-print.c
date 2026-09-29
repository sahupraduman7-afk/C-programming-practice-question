#include<stdio.h>
#include<time.h>
void showdatetime(void)
{
  time_t t=time(NULL);
  
  //time_t is data type provided by time .h and t is variable to store time and time (null)asks the time from aur computer and this time is stored in the t variable.
  
  struct tm *now=localtime(&t);
  
  //this is the sructure predefined in time.h and now is the variable of the structure that is used to access the sructure and tm_something is the member or feild under the structure.

  printf("Date is:%02d-%02d-%04d\n",now->tm_mday,now->tm_mon+1,now->tm_year+1900);
  printf("time is:%02d:%02d:%02d",now->tm_hour,now->tm_min,now->tm_sec);
}
int main()
{
  showdatetime();
  return 0;
}

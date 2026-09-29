#include<stdio.h>
#include <string.h>
int main() {
  char day[10] ,month[10];
  int year;
  printf("\nenter the today's date :");
  scanf("%s",day);
  printf("\nenter the month :");
  scanf("%s",month);
  printf("\n enter the year :");
  scanf("%d",&year);
  printf("\nthe date is %s:%s:%4d",day,month,year);
    return 0;
}
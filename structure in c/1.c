#include<stdio.h>
#include<stdlib.h>
struct book{
  int price;
  char name [50];
  char author[100];
} ;
int main()
{
  struct book b1;
  printf("enter the name of author: ");
  fgets(b1.author,sizeof(b1.author),stdin);
  printf("\nenter the price of book: ");
  scanf("%d",&b1.price);
  printf("\nenter the name of book: ");
  scanf("%s",b1.name);
  printf("the name of book is:");
   puts(b1.name) ;
   printf("\nand price is %d ------and the author is %s",b1.price,b1.author);
  return 0;
  
}

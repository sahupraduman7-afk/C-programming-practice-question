//designated initialization of structure

#include<stdio.h>
//we have done there typedef of struct into book now everywhere we will use book in place of struct structure_name
typedef struct {
  int price;
  char name[50];
  char author[50];
}book;

void print_by_ptr(book *b,int i)
{

   printf("---------------------\n");
  printf("it is about book %d\n",i);
  printf("the name of book is: ");
  puts(b->name);
   printf("the price of book is:%d ",b->price);
  
   printf("\nthe author of book is: ");
  puts(b->author);
  printf("---------------------\n");
}
// void input_by_ptr(book *);
int main()
{
   book books[3]={{.price=2,.author="ankit",.name="minds"},
                  {.price=3,.author="aman",.name="love language"},
                  {.price=4,.author="raj",.name="ways"}
                };

// for(int i=0;i<3;i++)
// {
//   input_by_ptr(&books[i]);

// }

for(int i=0;i<3;i++)
{
  print_by_ptr(&books[i],i);    //we called the function by passing address of array.

}
return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
  int no,dig=0,arm=0,temp,r;
  printf("enter the number you want to check its armstromg or not:");
  scanf("%d",&no);
  temp=no;
  //now we are going to count how many digits in numbers 
  while (no>0)
  {
    dig++;
    no=no/10;
  }
no=temp;
while(no>0)
{
r=no%10;
arm=arm+pow(r,dig);
no=no/10;

}
  printf ("%d number of digit \n",dig);
  if(arm==temp)
  {
    printf("%d is armstrong",temp);
  }
  else{
    printf("%d is not armstrong",temp);
  }
  return 0;
}
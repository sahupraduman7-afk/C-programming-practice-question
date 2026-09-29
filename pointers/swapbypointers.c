#include <stdio.h>
void swap(int*,int*);
int main() {
    int a=3, b=2; 
    // Write C code here
    printf("before swap a=%d and b=%d\n",a,b);
    swap(&a,&b);
    printf("after swap a=%d and b=%d\n",a,b);

    return 0;
}

void swap(int*a,int*b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
    printf("after swap a=%d and b=%d",*a,*b);
}

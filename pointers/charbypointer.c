#include<stdio.h>
int main()
{
    char str[] = "Hello, World!";
    char *ptr = str;

    printf("The string is: %s\n", ptr);
    printf("The first character is: %c\n", *ptr);
    printf("The second character is: %c\n", *(ptr + 1));
    
    return 0;
}
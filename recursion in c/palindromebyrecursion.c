#include <stdio.h>

int palindrome(int n, int original)
{
    if (n == 0)
        return original;

    return palindrome(n / 10, original * 10 + n % 10);
}

int main()
{
    int n, reversed;

    printf("Enter a number: ");
    scanf("%d", &n);

    reversed = palindrome(n, 0);

    if (n == reversed)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}
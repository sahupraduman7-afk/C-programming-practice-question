#include<stdio.h>
#include<math.h>
int armstrong(int n, int sum) {
    if (n == 0) {
        return sum;
    }
    int digit = n % 10;
    sum += pow(digit, 3); // Assuming we are checking for 3-digit Armstrong numbers
    return armstrong(n / 10, sum);
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = armstrong(num, 0);
    if (result == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }
    return 0;
}
#include <stdio.h>

/*
Question:
Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another.
*/

int main() {
    int base, exponent, result = 1, i;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);

    for(i = 1; i <= exponent; i++) {
        result *= base;
    }

    printf("%d raised to the power of %d is %d\n", base, exponent, result);

    return 0;
}

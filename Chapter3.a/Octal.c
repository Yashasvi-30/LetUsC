#include <stdio.h>

/*
Question:
Write a program to find the octal equivalent of the entered number.
*/

int main() {
    int num, octal = 0, place = 1, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        remainder = num % 8;
        octal += remainder * place;
        num /= 8;
        place *= 10;
    }

    printf("Octal equivalent: %d\n", octal);

    return 0;
}

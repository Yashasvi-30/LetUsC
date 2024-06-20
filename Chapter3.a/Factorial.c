#include <stdio.h>

/*
Question:
Write a program to find the factorial value of any number entered through the keyboard.
*/

int main() {
    int num, i;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial of negative number doesn't exist.\n");
    } else {
        for(i = 1; i <= num; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", num, factorial);
    }

    return 0;
}

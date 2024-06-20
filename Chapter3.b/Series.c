#include <stdio.h>

/*
Question:
Write a program to add first seven terms of the following series using a for loop:
1/1! + 2/2! + 3/3! + ... + 7/7!
*/

int main() {
    int i, j;
    float sum = 0.0, factorial;

    for (i = 1; i <= 7; i++) {
        factorial = 1.0;
        for (j = 1; j <= i; j++) {
            factorial *= j;
        }
        sum += i / factorial;
    }

    printf("Sum of the series: %f\n", sum);
    return 0;
}

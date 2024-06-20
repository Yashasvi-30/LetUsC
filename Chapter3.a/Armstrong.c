#include <stdio.h>

/*
Question:
Write a program to print out all Armstrong numbers between 1 and 500.
If sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.
For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) + ( 3 * 3 * 3 )
*/

int main() {
    int num, originalNum, remainder, result;

    printf("Armstrong numbers between 1 and 500 are:\n");
    for(num = 1; num <= 500; num++) {
        originalNum = num;
        result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == num) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}

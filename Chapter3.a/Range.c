#include <stdio.h>
#include <limits.h>

/*
Question:
Write a program to find the range of a set of numbers. Range is the difference between the maximum and minimum values in the set.
*/

int main() {
    int num, max = INT_MIN, min = INT_MAX, choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
        if (num < min) {
            min = num;
        }

        printf("Do you want to enter another number? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
    } while (choice == 1);

    printf("Range of the set of numbers: %d\n", max - min);

    return 0;
}

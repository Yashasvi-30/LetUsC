#include <stdio.h>

/*
Question:
Write a program to enter the numbers till the user wants and at the end it should display the count of positive, negative and zeros entered.
*/

int main() {
    int num, positives = 0, negatives = 0, zeros = 0, choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num > 0) {
            positives++;
        } else if (num < 0) {
            negatives++;
        } else {
            zeros++;
        }

        printf("Do you want to enter another number? (1 for yes, 0 for no): ");
        scanf("%d", &choice);
    } while (choice == 1);

    printf("Positive numbers: %d\n", positives);
    printf("Negative numbers: %d\n", negatives);
    printf("Zeroes: %d\n", zeros);

    return 0;
}

#include <stdio.h>

/*
Question:
Write a program to produce the following output:
1
1 1
1 2 1
1 3 3 1
1 4 6 4 1
*/

int main() {
    int rows = 5, coef = 1, space, i, j;

    for (i = 0; i < rows; i++) {
        for (space = 1; space <= rows - i; space++)
            printf("  ");

        for (j = 0; j <= i; j++) {
            if (j == 0 || i == j)
                coef = 1;
            else
                coef = coef * (i - j + 1) / j;

            printf("%4d", coef);
        }
        printf("\n");
    }
    return 0;
}
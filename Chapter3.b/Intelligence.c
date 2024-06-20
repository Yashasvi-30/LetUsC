#include <stdio.h>

/*
Question:
According to a study, the approximate level of intelligence of a person can be calculated using the following formula:
i = 2 + ( y + 0.5 * x )
Write a program, which will produce a table of values of i, y, and x, where y varies from 1 to 6, and, for each value of y, x varies from 5.5 to 12.5 in steps of 0.5.
*/

int main() {
    float x;
    int y;

    printf("i\t\ty\t\tx\n");
    printf("----------------------------\n");

    for (y = 1; y <= 6; y++) {
        for (x = 5.5; x <= 12.5; x += 0.5) {
            float i = 2 + (y + 0.5 * x);
            printf("%f\t%d\t%f\n", i, y, x);
        }
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

/*
Question:
The natural logarithm can be approximated by the following series.
If x is input through the keyboard, write a program to calculate the sum of first seven terms of the series.
*/

int main() {
    int i;
    float x, sum = 0.0, term;

    printf("Enter the value of x: ");
    scanf("%f", &x);

    for (i = 1; i <= 7; i++) {
        term = pow((x - 1) / x, i) / i;
        sum += term;
    }

    printf("Sum of the first seven terms of the series is: %f\n", sum);
    return 0;
}

#include <stdio.h>
#include <math.h>

/*
Question:
When interest compounds q times per year at an annual rate of r % for n years, the principle p compounds to an amount a as per the following formula:
a = p * (1 + r / q)^(n * q)
Write a program to read 10 sets of p, r, n & q and calculate the corresponding amounts.
*/

int main() {
    int i;
    float p, r, n, q, a;

    for (i = 1; i <= 10; i++) {
        printf("Enter principal (p), rate (r), number of years (n), and times compounded per year (q) for set %d:\n", i);
        scanf("%f %f %f %f", &p, &r, &n, &q);

        a = p * pow((1 + r / (q * 100)), n * q);
        printf("The amount for set %d is: %f\n", i, a);
    }

    return 0;
}

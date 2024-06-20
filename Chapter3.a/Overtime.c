#include <stdio.h>

/*
Question:
Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs. 12.00 per hour for every hour worked above 40 hours.
Assume that employees do not work for fractional part of an hour.
*/

int main() {
    int hours, i;
    float overtime_pay;

    for(i = 1; i <= 10; i++) {
        printf("Enter hours worked by employee %d: ", i);
        scanf("%d", &hours);
        if(hours > 40) {
            overtime_pay = (hours - 40) * 12.00;
        } else {
            overtime_pay = 0;
        }
        printf("Overtime pay for employee %d is Rs. %.2f\n", i, overtime_pay);
    }
    return 0;
}

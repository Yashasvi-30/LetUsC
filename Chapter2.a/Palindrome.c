#include <stdio.h>
int main ()
{
    /*A five-digit number is entered through the keyboard. Write a
program to obtain the reversed number and to determine
whether the original and reversed numbers are equal or not.*/

    int number, originalNumber, reversedNumber = 0, remainder;
    printf("Enter a five-digit number: ");
    scanf("%d", &number);
    originalNumber = number;

    while (number != 0)
    {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    if (originalNumber == reversedNumber)
    {
        printf("The original and reversed numbers are equal\n");
    }
    else
    {
        printf("The original and reversed numbers are not equal\n");
    }
    return 0;s
}
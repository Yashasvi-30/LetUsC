#include <stdio.h>
int main()
{
    /*Any integer is input through the keyboard. Write a program to
find out whether it is an odd number or even number.*/

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("The number is even\n");
    }
    else
    {
        printf("The number is odd\n");
    }
    return 0;
}
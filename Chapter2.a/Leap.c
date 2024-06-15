#include <stdio.h>
int main()
{
    /*Any year is input through the keyboard. Write a program to
determine whether the year is a leap year*/

    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                printf("The year is a leap year\n");
            }
            else
            {
                printf("The year is not a leap year\n");
            }
        }
        else
        {
            printf("The year is a leap year\n");
        }
    }
    else
    {
        printf("The year is not a leap year\n");
    }
    return 0;
}
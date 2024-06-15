#include <stdio.h>
int main()
{
    /*According to the Gregorian calendar, it was Monday on the
date 01/01/1900. If any year is input through the keyboard
write a program to find out what is the day on 1st January of
this year.*/

    int year, day;
    printf("Enter a year: ");
    scanf("%d", &year);
//logic is day of 1st january of any year can be calculated by this formula
    day = (year + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400) % 7;

    switch (day)
    {
    case 0:
        printf("The day on 1st January of %d is Monday\n", year);
        break;
    case 1:
        printf("The day on 1st January of %d is Tuesday\n", year);
        break;
    case 2:
        printf("The day on 1st January of %d is Wednesday\n", year);
        break;
    case 3:
        printf("The day on 1st January of %d is Thursday\n", year);
        break;
    case 4:
        printf("The day on 1st January of %d is Friday\n", year);
        break;
    case 5:
        printf("The day on 1st January of %d is Saturday\n", year);
        break;
    case 6:
        printf("The day on 1st January of %d is Sunday\n", year);
        break;
    }
    return 0;
}
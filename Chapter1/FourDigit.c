#include <stdio.h>
int main ()
{
    /*If a four-digit number is input through the keyboard, write a
program to obtain the sum of the first and last digit of this
number.*/

    int n , sum = 0 ;
    printf("Enter a four-digit number : ");
    scanf("%d",&n);
    sum = n % 10 + n / 1000;
    printf("The sum of the first and last digit of the number is : %d",sum);
    return 0;
}
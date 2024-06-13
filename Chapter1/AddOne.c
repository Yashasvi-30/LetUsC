#include<stdio.h>
int main
()
{
    /*If a five-digit number is input through the keyboard, write a
program to print a new number by adding one to each of its
digits. For example if the number that is input is 12391 then
the output should be displayed as 23402.*/

    int n , new = 0 ;
    printf("Enter a five-digit number : ");
    scanf("%d",&n);
    new = ((n / 10000) + 1) * 10000 + (((n / 1000) % 10) + 1) * 1000 + (((n / 100) % 10) + 1) * 100 + (((n / 10) % 10) + 1) * 10 + ((n % 10) + 1) ;
    printf("The new number is : %d",new);
    return 0;

}
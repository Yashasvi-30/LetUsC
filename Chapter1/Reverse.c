#include <stdio.h>
int main ()
{
    /*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/
    int n , rev = 0 ;
    printf("Enter a five-digit number : ");
    scanf("%d",&n);
    rev = (n % 10) * 10000 + ((n / 10) % 10) * 1000 + ((n / 100) % 10) * 100 + ((n / 1000) % 10) * 10 + (n / 10000) ;
    printf("The reverse of the number is : %d",rev);
    return 0;
}
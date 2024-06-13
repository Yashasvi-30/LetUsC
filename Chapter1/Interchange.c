#include<stdio.h>
int main ()
{
    /*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D*/
    int c , d , temp ;
    printf("Enter the value of C : ");
    scanf("%d",&c);
    printf("Enter the value of D : ");
    scanf("%d",&d);
    temp = c;
    c = d;
    d = temp;
    printf("The value of C after interchange is : %d\n",c);
    printf("The value of D after interchange is : %d",d);
    return 0;
}
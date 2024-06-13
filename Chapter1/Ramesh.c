#include <stdio.h>
int main()
{
    /*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/

float bs , da , hra , gs ;
printf("Enter the basic salary of Ramesh : ");
scanf("%f",&bs);
da = 0.4 * bs;
hra = 0.2 * bs;
gs = bs + da + hra;
printf("The gross salary of Ramesh is : %f",gs);
return 0;

}
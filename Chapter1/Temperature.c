#include <stdio.h>
int main ()
{
    /*Temperature of a city in Fahrenheit degrees is input through
the keyboard. Write a program to convert this temperature
into Centigrade degree*/

float f , c ;
printf("Enter the temperature of the city in Fahrenheit : ");
scanf("%f",&f);
c = (f - 32) * 5 / 9;
printf("The temperature of the city in Centigrade is : %f",c);
return 0;

}
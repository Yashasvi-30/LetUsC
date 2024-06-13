#include <stdio.h>
int main ()
{
    /*The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance
in meters, feet, inches and centimeters.*/

float km , m , ft , in , cm ;
printf("Enter the distance between two cities in km : ");
scanf("%f",&km);
//1 Km = 1000 M
m = km * 1000;
 //1 km	3280.84 ft
ft = km * 3280.84;
//1 km = 39370.1 in
in = km * 39370.1;
//1 km = 100000 cm
cm = km * 100000;
printf("The distance between two cities in meters is : %f\n",m);
printf("The distance between two cities in feet is : %f\n",ft);
printf("The distance between two cities in inches is : %f\n",in);
printf("The distance between two cities in centimeters is : %f\n",cm);
return 0;
}
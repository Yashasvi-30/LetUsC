#include <stdio.h>
int main ()
{
    /* The length & breadth of a rectangle and radius of a circle are
input through the keyboard. Write a program to calculate the
area & perimeter of the rectangle, and the area &
circumference of the circle.*/
    float l , b , r , ar , pr , ac , cc ;
    printf("Enter the length and breadth of the rectangle : ");
    scanf("%f%f",&l,&b);
    printf("Enter the radius of the circle : ");
    scanf("%f",&r);
    ar = l * b;
    pr = 2 * (l + b);
    ac = 3.14 * r * r;
    cc = 2 * 3.14 * r;
    printf("The area of the rectangle is : %f\n",ar);
    printf("The perimeter of the rectangle is : %f\n",pr);
    printf("The area of the circle is : %f\n",ac);
    printf("The circumference of the circle is : %f\n",cc);
    return 0;
}
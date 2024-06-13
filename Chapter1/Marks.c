#include <stdio.h>
int main ()
{
    /*If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.*/

float m1 , m2 , m3 , m4 , m5 , agg , per ;
printf("Enter the marks of 5 subjects : ");
scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
agg = m1 + m2 + m3 + m4 + m5;
per = (agg / 500) * 100;
printf("The aggregate marks obtained by the student is : %f\n",agg);
printf("The percentage marks obtained by the student is : %f\n",per);
return 0;

}
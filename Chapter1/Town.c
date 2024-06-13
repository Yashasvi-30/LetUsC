#include <stdio.h>
int main()
{
    /*In a town, the percentage of men is 52. The percentage of
total literacy is 48. If total percentage of literate men is 35 of
the total population, write a program to find the total number
of illiterate men and women if the population of the town is
80,000.*/

int population = 80000;
int men_percentage = 52;
int literacy_percentage = 48;
int literate_men_percentage = 35;

int total_men = (population * men_percentage) / 100;
int total_literate_men = (population * literate_men_percentage) / 100;
int total_literate = (population * literacy_percentage) / 100;

int total_illiterate_men = total_men - total_literate_men;
int total_illiterate_women = total_literate - total_literate_men;

printf("Total number of illiterate men: %d\n", total_illiterate_men);
printf("Total number of illiterate women: %d\n", total_illiterate_women);
return 0;

}
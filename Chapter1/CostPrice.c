#include <stdio.h>
int main()

{
/*If the total selling price of 15 items and the total profit earned
on them is input through the keyboard, write a program to
find the cost price of one item.*/
int total_selling_price = 0;
int total_profit = 0;
int cost_price = 0;
printf("Enter the total selling price of 15 items: ");
scanf("%d", &total_selling_price);
printf("Enter the total profit earned on them: ");
scanf("%d", &total_profit);
cost_price = (total_selling_price - total_profit) / 15;
printf("The cost price of one item is: %d", cost_price);
return 0;

}

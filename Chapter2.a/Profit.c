#include <stdio.h>
int main (){
    /*If cost price and selling price of an item is input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit
he made or loss he incurred.*/

    float costPrice, sellingPrice, profit, loss;
    printf("Enter the cost price: ");
    scanf("%f", &costPrice);
    printf("Enter the selling price: ");
    scanf("%f", &sellingPrice);

    if (costPrice < sellingPrice){
        profit = sellingPrice - costPrice;
        printf("The seller has made a profit of %.2f\n", profit);
    }
    else if (costPrice > sellingPrice){
        loss = costPrice - sellingPrice;
        printf("The seller has incurred a loss of %.2f\n", loss);
    }
    else{
        printf("The seller has neither made a profit nor incurred a loss\n");
    }
    return 0;
}
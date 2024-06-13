#include <stdio.h>
int main ()
    {
/*A cashier has currency notes of denominations 10, 50 and
100. If the amount to be withdrawn is input through the
keyboard in hundreds, find the total number of currency notes
of each denomination the cashier will have to give to the
withdrawer.
*/
    int amount , hundred , fifty , ten ;
    printf("Enter the amount to be withdrawn : ");
    scanf("%d",&amount);
    hundred = amount / 100 ;
    amount = amount - hundred * 100 ;
    fifty = amount / 50 ;
    amount = amount - fifty * 50 ;
    ten = amount / 10 ;
    printf("Currency Notes of 100 : %d\n",hundred);

    printf("Currency Notes of 50 : %d\n",fifty);

    printf("Currency Notes of 10 : %d",ten);
    return 0;
    
    }

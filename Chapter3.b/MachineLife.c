#include <stdio.h>
#include <math.h>

/*
Question:
A machine is purchased which will produce earning of Rs. 1000 per year while it lasts. The machine costs Rs. 6000 and will have a salvage of Rs. 2000 when it is condemned. If 12 percent per annum can be earned on alternate investments, what would be the minimum life of the machine to make it a more attractive investment compared to alternative investment?
*/

int main() {
    int life = 1;
    float cost = 6000, salvage = 2000, earnings = 1000, interest = 0.12;
    float machine_value, alternative_value;

    while (1) {
        machine_value = salvage + (earnings * life);
        alternative_value = cost * pow(1 + interest, life);
        
        if (machine_value > alternative_value) {
            printf("Minimum life of the machine to be a more attractive investment: %d years\n", life);
            break;
        }
        life++;
    }
    return 0;
}

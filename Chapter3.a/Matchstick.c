#include <stdio.h>

/*
Question:
Write a program for a matchstick game being played between the computer and a user.
Your program should ensure that the computer always wins. Rules for the game are as follows:
− There are 21 matchsticks.
− The computer asks the player to pick 1, 2, 3, or 4 matchsticks.
− After the person picks, the computer does its picking.
− Whoever is forced to pick up the last matchstick loses the game.
*/

int main() {
    int matchsticks = 21, user_pick, computer_pick;

    while (matchsticks > 1) {
        printf("There are %d matchsticks. Pick 1, 2, 3, or 4 matchsticks: ", matchsticks);
        scanf("%d", &user_pick);

        if (user_pick < 1 || user_pick > 4) {
            printf("Invalid pick. Please pick between 1 and 4 matchsticks.\n");
            continue;
        }

        matchsticks -= user_pick;
        computer_pick = 5 - user_pick;
        printf("Computer picks %d matchsticks.\n", computer_pick);
        matchsticks -= computer_pick;
    }

    printf("You are forced to pick the last matchstick. You lose!\n");

    return 0;
}

#include <stdio.h>

/*
Question:
Write a program to fill the entire screen with diamond and heart alternately.
The ASCII value for heart is 3 and that of diamond is 4.
*/

int main() {
    int i, j;
    for (i = 0; i < 24; i++) {
        for (j = 0; j < 80; j++) {
            if ((i + j) % 2 == 0) {
                printf("%c", 3);
            } else {
                printf("%c", 4);
            }
        }
        printf("\n");
    }
    return 0;
}

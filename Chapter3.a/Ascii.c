#include <stdio.h>

/*
Question:
Write a program to print all the ASCII values and their equivalent characters using a while loop.
The ASCII values vary from 0 to 255.
*/

int main() {
    int i = 0;

    while (i <= 255) {
        printf("ASCII value of character %c = %d\n", i, i);
        i++;
    }

    return 0;
}

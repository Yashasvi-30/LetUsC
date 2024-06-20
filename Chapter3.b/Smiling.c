#include <stdio.h>

/*
Question:
Write a program to fill the entire screen with a smiling face.
The smiling face has an ASCII value 1.
*/

int main() {
    int i, j;
    for (i = 0; i < 24; i++) {
        for (j = 0; j < 80; j++) {
            printf("%c", 1);
        }
        printf("\n");
    }
    return 0;
}

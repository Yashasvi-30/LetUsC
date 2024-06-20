#include <stdio.h>

/*
Question:
Write a program to produce the following output:
A B C D E F G F E D C B A
A B C D E F F E D C B A
A B C D E E D C B A
A B C D D C B A
A B C C B A
A B B A
A A
*/

int main() {
    int i, j;
    char ch;

    for (i = 7; i >= 1; i--) {
        ch = 'A';
        for (j = 1; j <= i; j++) {
            printf("%c ", ch++);
        }
        ch--;
        for (j = 1; j < i; j++) {
            printf("%c ", --ch);
        }
        printf("\n");
    }
    return 0;
}

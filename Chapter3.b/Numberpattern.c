#include <stdio.h>

/*
Question:
Write a program to produce the following output:
1
2 3
4 5 6
7 8 9 10
*/

int main() {
    int i, j, num = 1;

    for (i = 1; i <= 4; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
    return 0;
}

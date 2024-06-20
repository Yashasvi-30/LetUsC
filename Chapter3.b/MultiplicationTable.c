#include <stdio.h>

/*
Question:
Write a program to print the multiplication table of the number entered by the user. The table should get displayed in the following form.
29 * 1 = 29
29 * 2 = 58
…
*/

int main() {
    int num, i;

    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &num);

    for (i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}

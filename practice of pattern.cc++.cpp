#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern
    int i, j;

    for (i = 1; i <= rows; i++) {
        int num = i % 2; // Start with 1 or 0 based on row number

        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num = !num; // Flip between 0 and 1
        }

        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main() {
    int numRows = 5; // Change this value to adjust the number of rows

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1) {
                printf("%d", j);
            } else {
                printf(" %d", j);
            }
        }
        printf("\n");

        for (int k = 1; k <= i; k++) {
            if (k == 1) {
                printf("%c", 'A' + k - 1);
            } else {
                printf(" %c", 'A' + k - 1);
            }
        }
        printf("\n");
    }

    return 0;
}


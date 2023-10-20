#include <stdio.h>

int main() {
    int numRows = 5;
    int numCols = 6;

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= numCols; j++) {
            if (i == 1 || i == numRows || j == 1 || j == numCols) {
                printf("*");
            } else {
                printf(" ");
            }
            if (j < numCols) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


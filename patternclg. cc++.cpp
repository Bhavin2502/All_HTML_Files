#include <stdio.h>

int main() {
    int rows = 5; // Number of rows for the pattern

    for (int i = 1; i <= rows; i++) {
        // Print spaces for alignment
        for (int space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        
        // Print the numbers
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        
        printf("\n");
    }

    return 0;
}


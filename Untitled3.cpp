#include <stdio.h>

int main() {
    int numRows = 5; // Number of rows for the pattern

    for (int i = numRows; i >= 1; i--) {
        for (char ch = 'a'; ch <= 'a' + i - 1; ch++) {
            printf("%c ", ch);
        }
        printf("\n");
    }

    return 0;
}


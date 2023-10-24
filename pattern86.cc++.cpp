#include <stdio.h>
int main() {
    int n = 5; // Number of rows
    
    for (int i = 1; i <= n; i++) {
        // Print spaces before the characters
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        
        // Print characters in each row
        for (int j = 1; j <= n - i + 1; j++) {
            printf(" *");
        }
        
        printf("\n");
    }
    
    return 0;
}


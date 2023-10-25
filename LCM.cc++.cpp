#include<stdio.h>

int lcm(int, int);

int main() {
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int result = lcm(n1, n2);
    printf("LCM is = %d", result);

    return 0;
}

int lcm(int x, int y) {
    int i, j;
    int b[10], c[10];

    for (i = 0; i < 10; i++) {
        b[i] = x * (i + 1); // Corrected the calculation of b
        c[i] = y * (i + 1); // Corrected the calculation of c
    }

    for (i = 0; i < 10; i++) { // Corrected the loop range
        for (j = 0; j < 10; j++) { // Corrected the loop range
            if (b[i] == c[j]) {
                return b[i];
            }
        }
    }
     // Return -1 if no LCM is found
}


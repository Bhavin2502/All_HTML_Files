#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int sign = 1; // To alternate between positive and negative terms

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        int term = i * i * sign; // Calculate each term in the series with sign
        sum += term;
        sign *= -1; // Toggle the sign for the next term
    }

    // Display the result
    printf("Sum of the series: %d\n", sum);

    return 0;
}


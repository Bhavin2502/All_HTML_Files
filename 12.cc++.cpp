#include <stdio.h>

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

//    if (N < 1) {
//        printf("N must be a positive integer.\n");
//        return 1;  // Exit the program with an error code
//    }
//
    // Calculate the sum using the formula
    int sum = N * (N + 1) / 2;

    printf("Sum of numbers from 1 to %d is %d\n", N, sum);

    return 0;  // Exit the program successfully
}


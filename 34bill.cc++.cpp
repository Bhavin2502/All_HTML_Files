#include <stdio.h>

int main() {
    int units;
    double totalBill = 0.0;

    // Prompt the user to enter the number of units consumed
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    // Calculate the bill amount based on the rate of charges
    if (units <= 50) {
        totalBill = units * 2.30;
    } else if (units <= 100) {
        totalBill = 50 * 2.30 + (units - 50) * 2.60;
    } else if (units <= 250) {
        totalBill = 50 * 2.30 + 50 * 2.60 + (units - 100) * 3.25;
    } else {
        totalBill = 50 * 2.30 + 50 * 2.60 + 150 * 3.25 + (units - 250) * 4.35;
    }

    // Display the calculated bill amount
    printf("Bill Amount: Rs %.2lf\n", totalBill);

    return 0;
}


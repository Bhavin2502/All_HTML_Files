#include<stdio.h>

int main() {
    int seconds, hours, minutes;

    // Prompt the user to enter the number of seconds
    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);
//
//     if (seconds < 0) {
//         printf("Please enter a non-negative number of seconds.\n");
//         return 1;  // Exit the program with an error code
//     }

    // Calculate hours, minutes, and remaining seconds
    hours = seconds / 3600;         // 1 hour = 3600 seconds
    seconds %= 3600;               // Calculate the remaining seconds
    minutes = seconds / 60;        // 1 minute = 60 seconds
    seconds %= 60;                // Calculate the remaining seconds

    // Display the result
    printf("Time: %02d hours, %02d minutes, %02d seconds\n", hours, minutes, seconds);

    return 0;  // Exit the program successfully
}

#include <stdio.h>

int main() {
    int marks[10];
    int above80Count = 0;
    int below40Count = 0;

    // Input marks for 10 students
    printf("Enter the marks of 10 students:\n");

    for (int i = 0; i < 10; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] > 80) {
            above80Count++;
        } else if (marks[i] < 40) {
            below40Count++;
        }
    }

    // Display the counts
    printf("Number of students with marks above 80: %d\n", above80Count);
    printf("Number of students with marks below 40: %d\n", below40Count);

    return 0;
}


#include <stdio.h>

int main() {
    int i, n1, flag = 0, a[10]; // Initialize flag to 0

    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element you want to find: ");
    scanf("%d", &n1);

    for (i = 0; i < 10; i++) {
        if (n1 == a[i]) {
            flag = 1; // Set flag to 1 if element is found
            printf("Element found: %d\n", a[i]);
            break;
        }
    }

    if (flag == 0) { // Check flag to determine if element was not found
        printf("Element not found\n");
    }

    return 0;
}


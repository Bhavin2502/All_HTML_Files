#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int find_item(char arr[][MAX_SIZE], int size, char *item) {
    int found = 0;
    printf("Indices where '%s' is found: ", item);
    for (int i = 0; i < size; i++) {
        if (strcmp(arr[i], item) == 0) {
            printf("%d ", i);
            found = 1;
        }
    }
    printf("\n");
    return found;
}

int main() {
    char strings_array[][MAX_SIZE] = {"apple", "banana", "orange", "grape", "banana", "kiwi"};
    int array_size = sizeof(strings_array) / sizeof(strings_array[0]);

    char search_string[] = "banana";

    int item_found = find_item(strings_array, array_size, search_string);

    if (item_found) {
        printf("The item '%s' was found in the array.\n", search_string);
    } else {
        printf("The item '%s' was not found in the array.\n", search_string);
    }

    return 0;
}


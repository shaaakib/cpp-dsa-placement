#include <stdio.h>

int main() {
    int n, key;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Declare an array of integers
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the value to search for
    printf("Enter the value to search for: ");
    scanf("%d", &key);

    // Search for the value in the array
    int found = 0;
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            index = i;
            break; // Exit the loop once the value is found
        }
    }

    if (found) {
        printf("Value %d found at index %d.\n", key, index);
    } else {
        printf("Value %d not found in the array.\n", key);
    }

    return 0;
}

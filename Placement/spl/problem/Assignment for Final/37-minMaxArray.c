#include <stdio.h>

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Check for valid input
    // if (n <= 0) {
    //     printf("Invalid input. Please enter a positive integer for the number of elements.\n");
    //     return 1; // Exit with an error code
    // }

    // Declare an array of integers
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize variables to store minimum and maximum
    int min = arr[0];
    int max = arr[0];

    // Find minimum and maximum in the array
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Display the minimum and maximum values
    printf("Minimum value in the array: %d\n", min);
    printf("Maximum value in the array: %d\n", max);

    return 0;
}

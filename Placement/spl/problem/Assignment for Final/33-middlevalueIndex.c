#include <stdio.h>

int main() {
    int n;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive integer for the number of elements.\n");
        return 1; // Exit with an error code
    }

    // Declare an array of integers
    int arr[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the middle index
    int middleIndex = n / 2;

    // Check if the number of elements is even or odd
    if (n % 2 == 0) {
        // If even, there is no single middle value
        printf("The array has an even number of elements, so there is no single middle value.\n");
    } else {
        // If odd, there is a single middle value
        int middleValue = arr[middleIndex];
        printf("The middle value of the array is: %d\n", middleValue);
    }

    printf("The middle index of the array is: %d\n", middleIndex);

    return 0;
}

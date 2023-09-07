#include <stdio.h>

int main() {
    int n;
    
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

    // Calculate the sum of the elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Calculate the average
    double average = (double)sum / n;

    // Display the sum and average
    printf("Sum of the elements: %d\n", sum);
    printf("Average of the elements: %.2lf\n", average);

    return 0;
}

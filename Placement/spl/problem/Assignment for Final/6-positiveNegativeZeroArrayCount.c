#include <stdio.h>

void countNumbers(int a[], int n, int *positiveCount, int *negativeCount, int *zeroCount) {
    *positiveCount = 0;
    *negativeCount = 0;
    *zeroCount = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            (*positiveCount)++;
        } else if (a[i] < 0) {
            (*negativeCount)++;
        } else {
            (*zeroCount)++;
        }
    }
}

int main() {
    int n;
    
    // Prompt the user for the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    // Input elements into the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int positiveCount, negativeCount, zeroCount;

    // Call the function to count the numbers
    countNumbers(a, n, &positiveCount, &negativeCount, &zeroCount);

    // Print the results
    printf("Positive numbers in the array: %d\n", positiveCount);
    printf("Negative numbers in the array: %d\n", negativeCount);
    printf("Zeroes in the array: %d\n", zeroCount);

    return 0;
}

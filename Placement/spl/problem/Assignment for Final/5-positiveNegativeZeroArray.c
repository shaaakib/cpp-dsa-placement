#include <stdio.h>

void classifyNumbers(int a[], int n) {
    printf("Classifying numbers in the array:\n");
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            printf("%d is positive.\n", a[i]);
        } else if (a[i] < 0) {
            printf("%d is negative.\n", a[i]);
        } else {
            printf("%d is zero.\n", a[i]);
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

    // Call the function to classify the numbers
    classifyNumbers(a, n);

    return 0;
}

#include <stdio.h>

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

    printf("Even numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\nOdd numbers in the array: ");
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            printf("%d ", a[i]);
        }
    }

    printf("\n");

    return 0;
}

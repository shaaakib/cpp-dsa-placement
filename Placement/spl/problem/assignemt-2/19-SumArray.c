#include <stdio.h>

int main() {
    int size, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i]; // Add each element to the sum
    }

    printf("Sum of array elements: %d\n", sum);

    return 0;
}

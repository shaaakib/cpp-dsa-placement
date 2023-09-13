#include <stdio.h>

int main() {
    int arr[100], size, sum = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int *ptr = arr; // Pointer to the first element of the array

    // Calculate the sum of array elements using a pointer
    for (int i = 0; i < size; i++) {
        sum += *ptr; // Dereference the pointer to get the element's value
        ptr++;       // Move the pointer to the next element
    }

    printf("Sum of array elements is: %d", sum);

    return 0;
}

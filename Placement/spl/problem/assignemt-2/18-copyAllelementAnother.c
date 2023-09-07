#include <stdio.h>

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int sourceArray[size];
    int destinationArray[size];

    printf("Enter the elements of the source array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    // Copying elements from sourceArray to destinationArray
    for (int i = 0; i < size; i++) {
        destinationArray[i] = sourceArray[i];
    }

    printf("Elements copied successfully.\n");
    printf("Elements in the destination array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", destinationArray[i]);
    }

    return 0;
}

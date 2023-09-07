// #include <stdio.h>

// // Function to find the maximum element in an array
// int findMax(int arr[], int size) {
//     int max = arr[0];
    
//     for (int i = 1; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
    
//     return max;
// }

// // Function to find the minimum element in an array
// int findMin(int arr[], int size) {
//     int min = arr[0];
    
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
    
//     return min;
// }

// int main() {
//     int size;
    
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);
    
//     int arr[size];
    
//     printf("Enter the elements of the array:\n");
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     int maximum = findMax(arr, size);
//     int minimum = findMin(arr, size);
    
//     printf("Maximum element in the array: %d\n", maximum);
//     printf("Minimum element in the array: %d\n", minimum);

//     return 0;
// }


#include <stdio.h>

// Function to find the maximum and minimum elements in an array
void findMaxMin(int arr[], int size, int *max, int *min) {
    *max = *min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > *max) {
            *max = arr[i];
        }
        if (arr[i] < *min) {
            *min = arr[i];
        }
    }
}

int main() {
    int size;
    
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    int maximum, minimum;
    findMaxMin(arr, size, &maximum, &minimum);
    
    printf("Maximum element in the array: %d\n", maximum);
    printf("Minimum element in the array: %d\n", minimum);

    return 0;
}

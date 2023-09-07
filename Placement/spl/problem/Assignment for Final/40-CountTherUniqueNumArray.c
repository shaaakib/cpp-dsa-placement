#include <stdio.h>
int main() {
    int n, uniqueCount = 0; // Initialize uniqueCount to 0

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        int isUnique = 1; // Assume the current element is unique

        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // The current element is not unique
                break;
            }
        }

        if (isUnique) {
            uniqueCount++; // Increment the unique count
        }
    }

    printf("The number of unique elements in the array is: %d\n\n", uniqueCount);
    return 0;
}


// #include <stdio.h>
// int main() {
//     int arr1[100];
//     int n, ctr = 0;

//     // Input the number of elements
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++) {
//         printf("element - %d : ", i);
//         scanf("%d", &arr1[i]);
//     }

//     printf("\nThe unique elements found in the array are: \n");
//     for (int i = 0; i < n; i++) {
//         ctr = 0;
//         for (int j = 0; j < n; j++) {
//             if (i != j) {
//                 if (arr1[i] == arr1[j]) {
//                     ctr++;
//                     break; // No need to continue checking if a duplicate is found
//                 }
//             }
//         }
//         if (ctr == 0) {
//             printf("%d ", arr1[i]);
//         }
//     }

//     printf("\n\n");
//     return 0;
// }

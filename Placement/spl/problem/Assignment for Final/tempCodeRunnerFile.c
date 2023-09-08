#include <stdio.h>
int main() {
    int arr1[100];
    int n, ctr = 0;

    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    printf("\nThe unique elements found in the array are: \n");
    for (int i = 0; i < n; i++) {
        ctr = 0;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                if (arr1[i] == arr1[j]) {
                    ctr++;
                    break; // No need to continue checking if a duplicate is found
                }
            }
        }
        if (ctr == 0) {
            printf("%d ", arr1[i]);
        }
    }

    printf("\n\n");
    return 0;
}
#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest, smallest;

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    // Find the smallest number
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    // Check if the largest number is even or odd
    if (largest % 2 == 0) {
        printf("Largest number is even.\n");
    } else {
        printf("Largest number is odd.\n");
    }

    // Check if the smallest number is even or odd
    if (smallest % 2 == 0) {
        printf("Smallest number is even.\n");
    } else {
        printf("Smallest number is odd.\n");
    }

    return 0;
}

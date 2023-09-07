#include <stdio.h>

// Function to determine if a number is positive, negative, or zero
void classifyNumber(int number) {
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

int main() {
    int number;

    // Input the number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Call the function to classify the number
    classifyNumber(number);

    return 0;
}

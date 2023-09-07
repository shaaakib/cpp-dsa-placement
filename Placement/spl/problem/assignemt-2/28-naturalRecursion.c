#include <stdio.h>

// Function to print natural numbers from start to n using recursion
void printNaturalNumbers(int start, int n) {
    if (start > n) {
        return;  // Base case: stop when start exceeds n
    }
    
    printf("%d ", start); // Print the current number
    printNaturalNumbers(start + 1, n); // Recursive call for the next number
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    printf("Natural numbers from 1 to %d: ", n);
    printNaturalNumbers(1, n);

    return 0;
}

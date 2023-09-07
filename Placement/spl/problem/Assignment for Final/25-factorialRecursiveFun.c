#include <stdio.h>

// Function to calculate the factorial of a number using recursion
unsigned long long factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        return num * factorial(num - 1);
    }
}

int main() {
    int range;
    
    printf("Enter the range for which you want to calculate factorials: ");
    scanf("%d", &range);

    if (range < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorials for numbers from 0 to %d are:\n", range);
        for (int i = 0; i <= range; i++) {
            printf("%d! = %llu\n", i, factorial(i));
        }
    }

    return 0;
}

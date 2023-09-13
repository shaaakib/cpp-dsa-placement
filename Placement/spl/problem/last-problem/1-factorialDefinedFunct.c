#include <stdio.h>

int calculateFactorial(int n) { 
        int factorial = 1;
        for (int i = 2; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

        int result = calculateFactorial(num);

        printf("The factorial of %d is %d\n", num, result);
    return 0;
}

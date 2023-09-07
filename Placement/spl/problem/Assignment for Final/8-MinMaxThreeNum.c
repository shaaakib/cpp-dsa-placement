#include <stdio.h>

// Function to find the minimum of three numbers
int findMin(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}

// Function to find the maximum of three numbers
int findMax(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3;

    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Call the functions to find the minimum and maximum values
    int min = findMin(num1, num2, num3);
    int max = findMax(num1, num2, num3);

    // Print the minimum and maximum values
    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}



// #include <stdio.h>

// // Function to find the minimum of three numbers
// int findMin(int a, int b, int c) {
//     if (a <= b && a <= c) {
//         return a;
//     } else if (b <= a && b <= c) {
//         return b;
//     } else {
//         return c;
//     }
// }

// // Function to find the maximum of three numbers
// int findMax(int a, int b, int c) {
//     if (a >= b && a >= c) {
//         return a;
//     } else if (b >= a && b >= c) {
//         return b;
//     } else {
//         return c;
//     }
// }

// int main() {
//     int num1, num2, num3;

//     // Input three numbers from the user
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &num1, &num2, &num3);

//     // Call the functions to find the minimum and maximum values
//     int min = findMin(num1, num2, num3);
//     int max = findMax(num1, num2, num3);

//     // Print the minimum and maximum values
//     printf("Minimum: %d\n", min);
//     printf("Maximum: %d\n", max);

//     return 0;
// }

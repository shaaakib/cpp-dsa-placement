#include <stdio.h>

int main() {
    int start, end;

    // Input the interval from the user
    printf("Enter the start of the interval: ");
    scanf("%d", &start);
    printf("Enter the end of the interval: ");
    scanf("%d", &end);

    printf("Prime numbers within the interval [%d, %d]:\n", start, end);

    for (int num = start; num <= end; num++) {
        int isPrime = 1; // Assume num is prime

        if (num <= 1) {
            isPrime = 0; // Numbers less than or equal to 1 are not prime
        } else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = 0; // If divisible by any number from 2 to sqrt(num), it's not prime
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d\n", num);
        }
    }

    return 0;
}








// #include <stdio.h>

// // Function to check if a number is prime (returns 1 if prime, 0 otherwise)
// int isPrime(int num) {
//     int i;

//     if (num <= 1) {
//         return 0; // Numbers less than or equal to 1 are not prime
//     }

//     for (i = 2; i * i <= num; i++) {
//         if (num % i == 0) {
//             return 0; // If divisible by any number from 2 to sqrt(num), it's not prime
//         }
//     }

//     return 1; // If not divisible by any such number, it's prime
// }

// int main() {
//     int start, end;

//     // Input the interval from the user
//     printf("Enter the start of the interval: ");
//     scanf("%d", &start);
//     printf("Enter the end of the interval: ");
//     scanf("%d", &end);

//     printf("Prime numbers within the interval [%d, %d]:\n", start, end);

//     for (int num = start; num <= end; num++) {
//         if (isPrime(num)) {
//             printf("%d\n", num);
//         }
//     }

//     return 0;
// }

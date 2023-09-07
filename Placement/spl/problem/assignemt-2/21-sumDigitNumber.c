// #include <stdio.h>

// int main() {
//     int number, digit, sum = 0;

//     printf("Enter a number: ");
//     scanf("%d", &number);

//     // Loop to extract and sum the digits
//     for (; number > 0; number /= 10) {
//         digit = number % 10;
//         sum += digit;
//     }

//     printf("Sum of digits: %d\n", sum);

//     return 0;
// }

#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}

// #include <stdio.h>

// // Function to calculate GCD
// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// // Function to calculate LCM
// int lcm(int a, int b) {
//     return (a * b) / gcd(a, b);
// }

// int main() {
//     int num1, num2;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     int gcdResult = gcd(num1, num2);
//     int lcmResult = lcm(num1, num2);

//     printf("GCD of %d and %d: %d\n", num1, num2, gcdResult);
//     printf("LCM of %d and %d: %d\n", num1, num2, lcmResult);

//     return 0;
// }


#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    int gcdResult = a;
    int lcmResult = (num1 * num2) / gcdResult;

    printf("GCD of %d and %d: %d\n", num1, num2, gcdResult);
    printf("LCM of %d and %d: %d\n", num1, num2, lcmResult);

    return 0;
}


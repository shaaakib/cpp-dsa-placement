#include <stdio.h>

int power(int b, int e) {
    int value = 1;

    while (e != 0) {
        value *= b;
        e--;
    }

    return value;
}

int armstrong(int num) {
    int rem, sum = 0, cnt = 0, var;

    var = num;

    while (var != 0) {
        var /= 10;
        cnt++;
    }

    var = num;

    while (var != 0) {
        rem = var % 10;
        sum += power(rem, cnt);
        var /= 10;
    }

    return sum;
}

int main() {
    int num;
    scanf("%d", &num);
    int sum = armstrong(num);

    if (sum == num) {
        printf("%d is an Armstrong number", num);
    } else {
        printf("%d is not an Armstrong number", num);
    }

    return 0;
}
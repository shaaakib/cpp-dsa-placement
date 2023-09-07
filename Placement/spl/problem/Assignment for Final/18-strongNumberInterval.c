#include <stdio.h>

int factor(int num) {
    int i, fact = 1;
    for (i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int start, end;
    printf("Enter the starting and ending interval: ");
    scanf("%d %d", &start, &end);

    for (int num = start; num <= end; num++) {
        int a = num;
        int r, sum = 0;
        int i = a;

        while (i != 0) {
            r = i % 10;
            sum += factor(r);
            i /= 10;
        }

        if (sum == a) {
            printf("%d is a strong number\n", a);
        }
    }

    return 0;
}

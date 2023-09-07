#include <stdio.h>

void getFib(int n) {
    int prev = 0, current = 1, next;
    while (prev <= n) {
        printf("%d ", prev);
        next = prev + current;
        prev = current;
        current = next;
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter a number n: ");
    scanf("%d", &n);

    getFib(n);

    return 0;
}

#include <stdio.h>

int isStrange(int n) {
    int tmp, r;
    tmp = n;

    while (tmp != 0) {
        r = tmp % 10;
        if (r == 2 || r == 3 || r == 5 || r == 7) {
            tmp /= 10;
        } else {
            return 0; // Not strange
        }
    }

    return 1; // Strange
}

int main() {
    int start, end;
    printf("Enter the start and end of the range: ");
    scanf("%d %d", &start, &end);

    printf("Strange numbers in the range %d to %d are:\n", start, end);

    for (int i = start; i <= end; i++) {
        if (isStrange(i)) {
            printf("%d\n", i);
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int rows;
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        
        for (int space = 0; space <= rows - i; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            char cha = 'A' + j;
            printf("%c ", cha);
        }

        printf("\n");
    }

    return 0;
}

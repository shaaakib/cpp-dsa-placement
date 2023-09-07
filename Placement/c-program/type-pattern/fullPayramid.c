#include <stdio.h>
int main(){
    int rows;
    scanf("%d", &rows);
    for(int i = 0; i<=rows; i++){

        for(int space = 0; space<=rows-i; space++){
            printf(" ");
        }

        for(int j = 0; j<=i; j++){
            // char cha = 'A' + j;
            // printf("%c ", cha);
            printf("* ");
        }
        
        printf("\n");
    }
    return 0;
}
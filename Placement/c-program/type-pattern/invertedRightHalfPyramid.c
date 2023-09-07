#include <stdio.h>
int main(){
    int rows, i, j;
    scanf("%d", &rows);
    for(i = 0; i<rows; i++){
        for(j=0; j<rows-i; j++){
            char cha = 'A' + j;
            printf("%c ", cha);
        }
        printf("\n");
    }
}
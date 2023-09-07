#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int cc = 65;

    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i; j++){
            printf("  ");
        }

        for(int j = 1; j<=2*i-1; j++){
            printf("%c ", cc);
            if (cc == 90) {
                cc = 65;
            } else {
                cc++;
            }
        }
        printf("\n");
    }
    return 0;
}


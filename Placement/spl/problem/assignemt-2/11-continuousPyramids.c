#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int i = 1;

    while(i <= n){
        int j = 1;
        
        while(j <= n - i){
            printf("  ");
            j++;
        }

        j = 1;
        int cc = 65;
        
        while(j <= 2 * i - 1){
            printf("%c ", cc);
            
            if (cc == 90) {
                cc = 65;
            } else {
                cc++;
            }

            j++;
        }
        
        printf("\n");
        i++;
    }
    return 0;
}

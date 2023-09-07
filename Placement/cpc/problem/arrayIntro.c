#include <stdio.h>
int main(){
    int a[5];
    for(int i=0; i<10; i++){
        scanf("%d", &a[i]);
    }

    for(int i = 0; i<10; i++){
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}
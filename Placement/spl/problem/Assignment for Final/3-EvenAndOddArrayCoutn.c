#include <stdio.h>

void cntEventOdd(int a[], int n, int *evenCount, int *oddCount){
    *evenCount = 0;
    *oddCount = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            (*evenCount)++;
        } else {
            (*oddCount)++;
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    //int evenCnt = 0;
    //int oddCnt = 0;

    int evenCnt = 0, oddCnt = 0;

    cntEventOdd(a, n, &evenCnt, &oddCnt);
    

    printf("Even: %d\n", evenCnt);
    printf("Odd: %d\n", oddCnt);

    printf("\n");

    return 0;
}
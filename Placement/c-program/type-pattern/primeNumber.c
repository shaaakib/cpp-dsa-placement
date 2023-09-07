#include <stdio.h>
int main(){
    int n,i, a = 0;
    scanf("%d", &n);
    for(i = 2; i<=n-1; i++){
        if(n%i==0){
            a = 1;
            break;
        }
    }
    if(a==0){
        printf("%d is a prime number.\n", n);
    }else{
        printf("%d is not a prime number.\n", n);
    }
    return 0;
}
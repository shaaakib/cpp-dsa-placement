#include <stdio.h>

int factor(int num){
int i, fact = 1;
    for(i = 1; i<=num; i++){
        fact = fact * i;
    }
    return fact;
}

int main(){
    int a, r, sum = 0;
    scanf("%d", &a);
    int i = a;

    while(i !=0){
         r = i % 10;
        sum += factor(r);
        i /=10;

    }

    if(sum==a ){
        printf("%d is strong number", a);
    }else{
        printf("%d is not strong number", a);
    }
}
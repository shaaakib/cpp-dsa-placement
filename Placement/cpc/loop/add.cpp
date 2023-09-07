#include <stdio.h>

int add( int num1, int num2 ){
    int sum = 0;
    sum = num1 + num2;
    return sum;

}


int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int c = add(a, b);
    printf("%d\n", c);

    return 0;

}
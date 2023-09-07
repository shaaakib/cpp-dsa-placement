#include <stdio.h>

int checkOddEven(int num){
     if(num % 2 == 1){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    scanf("%d", &n);

   int result = checkOddEven(n);

  if (result == 1) {
        printf("Odd\n");
    } else {
        printf("Even\n");
    }
    return 0;
}
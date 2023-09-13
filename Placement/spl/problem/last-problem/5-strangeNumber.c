#include <stdio.h>

int main() {
   
   int tmp, r, n;
   scanf("%d", &n);
    tmp = n;

    while (tmp != 0) {
        r = tmp % 10;
        if (r == 2 || r == 3 || r == 5 || r == 7) {
            tmp /= 10; 
    }else{
        break;
    } 
}

if(tmp == 0){
    printf("%d is strange number\n",n);
}else{
    printf("%d is not strange number\n",n);
}
 return 0;
}
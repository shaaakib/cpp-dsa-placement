#include <stdio.h>
int main(){
int n, final = 0, tmp, r;
scanf("%d",&n);
tmp = n;
while(n>0){
    r = n % 10;
    final = (final * 10) + r;
    n = n/10;
}

if(final == tmp){
    printf("Plaindrom");
}else{
 printf("Not Plaindrom");
}

}
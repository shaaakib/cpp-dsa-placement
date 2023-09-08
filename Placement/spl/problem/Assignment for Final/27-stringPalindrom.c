#include <stdio.h>
#include <string.h>
int main(){
    char s[123], t[123];

    scanf("%s", s);
    int n = strlen(s);

    for(int i  = 0; i < n; i++) t[i] = s[i];

    for(int i = 0, j = n-1; i < j; i++, j--){
        char tmp = s[i];
        s[i] = s[j];
        s[j] = tmp;
    }

    for(int i = 0; i < n; i++) printf("%c", s[i]);
    printf("\n");
    int yes = 1;

    for(int i = 0; i < n; i++){
        if(s[i] != t[i])
        yes = 0;
        break;
    }

    if(yes) printf("Palindrom!\n");
    else printf("Not Palindrom!\n");


return 0;
}
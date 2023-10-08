#include <stdio.h>
int main() {
   int tc;
   scanf("%d", &tc);
   while(tc--){
     int n=0;
        scanf("%d", &n);
        char woed[n + 1]; 
        scanf("%s", woed);

        int k;
        for (int i = 0; i < n; i++) {
            printf("%c", woed[i]);
            k = i + 1;
            while (woed[i] != woed[k] && woed[k] != '\0') {
                k++;
            }
            i = k ;
        }
        printf("\n");
   }
    return 0;
}
#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int start, end;
    
    printf("Enter the starting and ending interval: ");
    scanf("%d %d", &start, &end);
    
    printf("Perfect numbers in the interval [%d, %d] are: ", start, end);
    
    for (int num = start; num <= end; num++) {
        if (isPerfect(num)) {
            printf("%d ", num);
        }
    }
    
    printf("\n");
    
    return 0;
}




// #include <stdio.h>

// int main() {
//     int start, end, num, sum;
    
//     printf("Enter the starting and ending interval: ");
//     scanf("%d %d", &start, &end);
    
//     printf("Perfect numbers in the interval [%d, %d] are: ", start, end);
    
//     for (num = start; num <= end; num++) {
//         sum = 0;
//         for (int i = 1; i < num; i++) {
//             if (num % i == 0) {
//                 sum += i;
//             }
//         }
        
//         if (sum == num) {
//             printf("%d ", num);
//         }
//     }
    
//     printf("\n");
    
//     return 0;
// }

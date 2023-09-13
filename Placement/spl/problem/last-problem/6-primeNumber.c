#include <stdio.h> 
int isPrime(int x) 
{ 
    int count = 0;
 
    for(int i=1; i<=x; i++) 
    { 
        if(x%i==0) 
            count++; 
    } 
    return count==2; 
} 

int main() 
{ 
    int num;
    scanf("%d", &num);

    if(isPrime(num)){
        printf("%d is prime number\n", num);
    }else{
        printf("%d is not prime number\n", num);
    }
    return 0;
}
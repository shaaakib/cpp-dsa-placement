#include<stdio.h> 
int prime(int x) 
{ 
    int i,count=0; 
 
    for(i=1; i<=x; i++) 
    { 
        if(x%i==0) 
            count++; 
    } 
    return count==2; 
} 
int main() 
{ 
    int n1,n2,i,count=0; 
 
    scanf("%d %d", &n1, &n2); 
 
    for(i=n1; i<=n2; i++) 
    { 
        if(prime(i)) 
        { 
            count++; 
 
            if(count>3) 
                break; 
            else 
                printf("\n%d prime number is: %d \n",count,i); 
        } 
    }

   return 0;
}
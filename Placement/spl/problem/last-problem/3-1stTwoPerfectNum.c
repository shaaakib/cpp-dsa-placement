#include<stdio.h> 
int perfect(int x) 
{ 
    int sum=0; 
    for(int i=1; i<x; i++) 
    { 
        if(x%i==0) 
            sum+=i; 
    } 
    return sum==x; 
} 
int main() 
{ 
    int n1,n2,i,count=0; 
    scanf("%d %d",&n1,&n2); 
 
    for(i=n1; i<=n2; i++) 
    { 
         if (perfect(i)) { 
 
            count++; 
            
            if (count > 2) 
                break; 
 
            else 
                printf("The perfect number is: %d\n", i); 
        } 
    } 

    return 0;
}
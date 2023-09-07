#include<stdio.h> 
int main() 
{ 
    int a,b,c; 
    scanf("%d %d %d",&a, &b, &c); 
 
    if((a>=b&&a<=c)||(a<=b&&a>=c)) 
    { 
        printf("\n%d is the second largest number\n",a); 
    } 
    else if((b>=a&&b<=c)||(b<=a&&b>=c)) 
    { 
        printf("\n%d is the second largest number\n",b); 
    } 
    else 
    { 
        printf("\n%d is the second largest number\n",c); 
    } 
}
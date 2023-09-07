#include<stdio.h>
 int pyramid(int num)
 {
     int i=1,j,a=65;

     char ch;

while(i<=num)
{

    j=num;
    while(j>i)
    {
        printf(" ");
        j--;
    }
    j=1;
    while(j<=i)
    {
        if(a==90)
        {
            a=65;
            printf("%c ",a++);
        }
        else
        {
            printf("%c ",a++);
        }
        j++;

    }
    printf("\n");
    i++;
}

 }

 int main()
 {
     int n;
     scanf("%d",&n);
     pyramid(n);
 }
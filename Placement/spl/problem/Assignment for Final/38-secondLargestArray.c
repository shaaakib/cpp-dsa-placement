#include <stdio.h>

int main()
{
    int n, tmp;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter the array elements :");
    int a[n];                    //Array Declaration
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)         //Sorting Array
    {
        for(int j=i+1; j<n ;j++)
        {
            if(a[i]<a[j]) // descending Order / (if a[i] > a[j]) => ascending order
            {
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }

    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    printf("The smallest element is %d",a[n-1]);   //Accessing the smallest element
    printf("\n");

    printf("The greatest element is %d",a[0]);   //Accessing the greatest element
    printf("\n");

    printf("The second largest element is %d",a[1]);   //Accessing the second largest element
    printf("\n");

    printf("The second smallest element is %d",a[n-2]);   //Accessing the second  smallest element
    printf("\n");

    return 0;
}
  #include <stdio.h>
    void main()
    {
 
        int n, tmp;
        printf("Enter the value of N \n");
        scanf("%d", &n);
        int a[n];
 
        printf("Enter the as \n");
        for (int i = 0; i < n; ++i){
            scanf("%d", &a[i]);
        }
            
 
        for (int i = 0; i < n; ++i) 
        {
 
            for (int j = i + 1; j < n; ++j)
            {
 
                if (a[i] < a[j]) 
                {
 
                    tmp =  a[i];
                    a[i] = a[j];
                    a[j] = tmp;
 
                }
 
            }
 
        }
 
        printf("The as arranged in ascending order are given below \n");
        for (int i = 0; i < n; ++i)
            printf("%d ", a[i]);
 printf("\n");
    }
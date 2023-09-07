#include <stdio.h>
 
int main()
{
    int rows;
    scanf("%d", &rows);
 
    int alphabet = 65;
 
    for (int i = 0; i <= rows - 1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k <= rows - i - 1; k++)
        {
            char cha = 'A' + k;
            printf("%c ", cha);
        }
        printf("\n");
    }
}
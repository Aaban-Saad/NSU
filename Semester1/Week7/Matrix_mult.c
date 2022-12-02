#include <stdio.h>
#include <conio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10], sum = 0;
    int i, j, k;

    printf("\n\tEnter matrix 1: \n");
    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 3; j ++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n\tEnter matrix 2: \n");
    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 3; j ++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 3; j ++)
        {
            for(k = 0; k < 3; k ++)
            {
                sum += a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }

    printf("\n\tMatrix 1 * Matrix 2 = \n\t");
    for(i = 0; i < 3; i ++)
    {
        for(j = 0; j < 3; j ++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n\t");
    }
}
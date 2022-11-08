#include <stdio.h>
#include <conio.h>

int main()
{
    double a[3][3], t[3][3];
    int m, n, r, c;

    printf("\n\tEnter matrix size: ┎ ┏ ┌ ╔ %c", 191);
    scanf("%d%d", &m, &n);

    //matrix-1 input
    for(r = 0; r < m; r ++)
    {
        for(c = 0; c < n; c ++)
        {
            printf("\tEnter element for matrix-1 (%d, %d): ", r, c);
            scanf("%lf", &a[r][c]);
        }
    }

    for(r = 0; r < m; r ++)
    {
        for(c = 0; c < n; c ++)
        {
            t[c][r] = a[r][c];
        }
    }

    //start of printing matrix-1
    printf("\n\tMatrix-1 = \n\t __                     __");
    printf("\n\t|                         |\n");
    for(r = 0; r < m; r ++)
    {
        printf("\t|");
        for(c = 0; c < n; c ++)
        {
            printf(" %6.2lf ", a[r][c]);
        }
        printf(" |\n");
    }
    printf("\t|__                     __|\n");
    //end of printing matrix-1

    //start of printing transpose
    printf("\n\tTranspose of matrix-1 = \n\t __                     __");
    printf("\n\t|                         |\n");
    for(r = 0; r < n; r ++)
    {
        printf("\t|");
        for(c = 0; c < m; c ++)
        {
            printf(" %6.2lf ", t[r][c]);
        }
        printf(" |\n");
    }
    printf("\t|__                     __|\n");
    //end of printing transpose

    getch();
    return 0;
}

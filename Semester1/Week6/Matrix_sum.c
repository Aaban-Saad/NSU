#include <stdio.h>
#include <conio.h>

int main()
{
    double a[3][3], b[3][3], sum[3][3];
    int r, c;

    //matrix-1 input
    for(r = 0; r < 3; r ++)
    {
        for(c = 0; c < 3; c ++)
        {
            printf("\tEnter element for matrix-1 (%d, %d): ", r, c);
            scanf("%lf", &a[r][c]);
        }
    }

    printf("\n");

    //matrix-2 input
    for(r = 0; r < 3; r ++)
    {
        for(c = 0; c < 3; c ++)
        {
            printf("\tElement for matrix-2 (%d, %d): ", r, c);
            scanf("%lf", &b[r][c]);
        }
    }

    //start of printing matrix-1
    printf("\n\tMatrix-1 = \n\t __                     __");
    printf("\n\t|                         |\n");
    for(r = 0; r < 3; r ++)
    {
        printf("\t|");
        for(c = 0; c < 3; c ++)
        {
            printf(" %6.2lf ", a[r][c]);
        }
        printf(" |\n");
    }
    printf("\t|__                     __|\n");
    //end of printing matrix-1

    //start of printing matrix-1
    printf("\n\tMatrix-2 = \n\t __                     __");
    printf("\n\t|                         |\n");
    for(r = 0; r < 3; r ++)
    {
        printf("\t|");
        for(c = 0; c < 3; c ++)
        {
            printf(" %6.2lf ", b[r][c]);
        }
        printf(" |\n");
    }
    printf("\t|__                     __|\n");
    //end of printing matrix-1

    //sum
    for(r = 0; r < 3; r ++)
    {
        for(c = 0; c < 3; c ++)
        {
            sum[c][r] = a[c][r] + b[c][r];
        }
    }

    //start of printing sum
    printf("\n\tSum = (matrix-1 + matrix-2) = \n\t __                     __");
    printf("\n\t|                         |\n");
    for(r = 0; r < 3; r ++)
    {
        printf("\t|");
        for(c = 0; c < 3; c ++)
        {
            printf(" %6.2lf ", sum[r][c]);
        }
        printf(" |\n");
    }
    printf("\t|__                     __|\n");
    //end of printing sum

    getch();
    return 0;
}

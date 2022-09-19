#include <stdio.h>
int main()
{
    while(1)
    {
        double a, b, c;
        double avg;
        printf("\tNum1 = ");
        scanf("%lf",&a);
        printf("\tNum2 = ");
        scanf("%lf",&b);
        printf("\tNum3 = ");
        scanf("%lf",&c);
        avg = (a + b + c)/3;
        printf("\n\tAverage = %.3lf",avg);
        printf("\n\t--------------------\n\n");
    }
    return 0;
}

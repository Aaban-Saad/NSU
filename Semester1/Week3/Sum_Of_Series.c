#include <stdio.h>
int main()
{
    int n;
    double i, sum;
    printf("\n\tSeries: 1 + 1/2 + 1/3 + 1/4 + ...... + 1/n");
    printf("\n\n\tEnter the value of 'n' here: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i ++)
    {
        sum = sum + (1/i);//make 'i' an integer and try printing the value of 1/i;
    }
    printf("\n\tResult = %lf\n\n", sum);
    getch();
    return 0;
}

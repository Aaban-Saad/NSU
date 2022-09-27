#include <stdio.h>
int main()
{
    int t, i, num, sum = 0;
    printf("\n\tHow many numbers do you want to enter? ->");
    scanf("%d",&t);
    for(i = 1; i <= t; i ++)
    {
        printf("\tEnter num%d: ",i);
        scanf("%d",&num);
        sum = sum + num;
    }
    printf("\n\tSum = %d\n\n",sum);
    getch();
    return 0;
}

#include <stdio.h>
int main()
{
    int num, ans, rem, sum;
    printf("\n\tEnter a number: ");
    scanf("%d",&num);
    do
    {
        ans = num / 10;
        rem = num % 10;
        sum = sum + rem;
        num = ans;
        printf("||%d, %d", rem, ans);
    }while(ans != 0);
    printf("\n\tSum of digit(s) = %d\n\n",sum);
    getch();
    return 0;
}

#include <stdio.h>
int main()
{
    int n, i, fact;
    printf("\nEnter a number(0-11): ");
    scanf("%d",&n);
    i = n;
    fact = i + 1;
    while(i > 0)
    {
        fact = fact * i;
        i -= 1;
    }

    if(n >= 0)
    {
        fact = fact / (n + 1);
        printf("\nFactorial = %d", fact);
    }

    else
    {
        printf("\nError!");
    }
    getch();
    return 0;
}

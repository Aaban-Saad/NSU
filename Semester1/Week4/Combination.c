#include <stdio.h>

int comb(int num_n,int num_r);
int fact(int num);

int main()
{
    int n, r;
    printf("\n\tEnter the values of n and r: ");
    scanf("%d%d",&n,&r);
    printf("\n\tCombination (nCr)= %d",comb(n,r));
    printf("\n\n\tPress any key to exit.");
    getch();
    return 0;
}

int comb(int num_n,int num_r)
{
    return fact(num_n)/(fact(num_r)*fact(num_n - num_r));
}

int fact(int num)
{
    int i, fact;
    i = num;
    fact = i + 1;
    while(i > 0)
    {
        fact = fact * i;
        i -= 1;
    }

    if(num >= 0)
    {
        fact = fact / (num + 1);
    }

    else
    {
        printf("\n\tINPUT ERROR!");
        getch();
    }
    return fact;
}

#include <stdio.h>
int main()
{
    int str, spc, n;
    for(n = 0; n < 5; n ++)
    {
        for(spc = 5; spc > n; spc --)
        {
            printf(" ");
        }
        for(str = 0; str <= n; str ++)
        {
            printf("*");//Try adding space before/after '*'
        }
        printf("\n");
    }
    return 0;
}

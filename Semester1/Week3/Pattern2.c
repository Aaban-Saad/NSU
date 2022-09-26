#include <stdio.h>
int main()
{
    int num, n;
    for(n = 0; n < 5; n ++)
    {
        for(num = 5; num > n; num --)
        {
            printf("%d",num);
        }
        printf("\n");
    }
    return 0;
}


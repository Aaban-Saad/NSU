#include <stdio.h>

int CheckPrime(int n);

int main()
{
    int a, b, check, i, count;
    char ask;

    while(1)
    {
        count = 0;
        printf("\n    Search all prime number(s)");
        printf("\n\tfrom : ");
        scanf("%d",&a);
        printf("\tto   : ");
        scanf("%d",&b);

        if(a <= b)
        {
            printf("\n    Prime number(s) from %d to %d are:\n    ",a,b);
            for(i = a; i <= b; i ++)
            {
                check = CheckPrime(i);
                if(check == 1)
                {
                    printf("%d ",i);
                    count ++;
                }
            }
            printf("\n\n\ttotal: %d\n",count);
        }
        else
        {
            printf("\n\tInvalid range!\n");
        }

        //Asking before looping the program
        printf("\n\tTry again? (y/n) --> ");
        while(1)
        {
            ask = getch();
            printf("%c",ask);
            if(ask == 'y' || ask == 'Y')
            {
                printf("\n________________________________________________\n\n");
                break;
            }
            else if(ask == 'n' || ask == 'N')
            {
                return 0;
            }
            else if(ask == 8)
            {
                printf(" \a");
            }
            else if(ask == 13)
            {
                printf("\t                     ");
                printf("\n\n\tTry again? (y/n) --> ");
            }
            else
            {
                printf("\b \b\a");
            }
        }
    }
}

//This function returns 1 if the number is a prime number.
int CheckPrime(int n)
{
    int i;
    for(i = 2; i < n; i ++)
    {
        if(n % i == 0)
        {
            return 0;
        }
    }
    if(n == 1)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


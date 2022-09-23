#include <stdio.h>
int main()
{
    int num;

    printf("\n\tEnter a number: ");
    scanf("%d",&num);

    if(num % 2 == 0 && num % 3 == 0)
    {
        printf("\tThe number is divisible by both 2 and 3.");
    }
    else if(num % 2 == 0 || num % 3 == 0)
    {
        if(num % 2 == 0)
        {
            printf("\tThe number is divisible by 2 only.");
        }
        else
        {
            printf("\tThe number is divisible by 3 only.");
        }
    }
    else
    {
        printf("\tThe number is not divisible by 2 or 3.");
    }
    getch();
    return 0;
}

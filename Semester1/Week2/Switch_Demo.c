#include <stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("\n\tEnter a number(1-3): ");
        scanf("%d",&n);
        switch(n)
        {
        case 1:
            printf("\tYou pressed 1!");
            break;

        case 2:
            printf("\tYou pressed 2!");
            break;

        case 3:
            printf("\tYou pressed 3!");
            break;

        default:
            printf("\tWrong input!");
        }
    }
    return 0;
}

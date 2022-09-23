#include <stdio.h>
int main()
{
    int m;
    printf("\n\tEnter the month number: ");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("\tNumber of days: 31");
        break;

    case 2:
        printf("\tNumber of days: 28");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("\tNumber of days: 28");
        break;

    default:
        printf("\tWrong input!");
    }
    getch();
    return 0;
}

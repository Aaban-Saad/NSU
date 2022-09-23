#include <stdio.h>
int main()
{
    int year;
    printf("\n\tEnter a year: ");
    scanf("%d",&year);
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    {
        printf("\t It is a leap year!");
    }
    else
    {
        printf("\t It is not a leap year!");
    }
    getch();
    return 0;
}

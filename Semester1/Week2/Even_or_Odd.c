#include <stdio.h>
int main()
{
    int a;
    printf("\n\tEnter a number: ");
    scanf("%d",&a);
    if (a % 2 == 0)
    {
        printf("\tEVEN!");
    }
    else
    {
        printf("\tODD");
    }
    return 0;
}

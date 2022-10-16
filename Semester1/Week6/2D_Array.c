#include <stdio.h>
#include <conio.h>

int arasrc(int r, int c, double a[r][c], double s);

int main()
{
    double ara[3][3];
    int r, c;
    //ara input
    for(r = 0; r < 3; r ++)
    {
        for(c = 0; c < 3; c ++)
        {
            printf("\n\tEnter value for array (%d, %d): ", r + 1, c + 1);
            scanf("%lf", &ara[r][c]);
        }
    }
    //printing the ara
    printf("\n\tArray = ");
    for(r = 0; r < 3; r ++)
    {
        for(c = 0; c < 3; c ++)
        {
            printf("[ %6.2lf ]", ara[r][c]);
        }
        printf("\n\t\t");
    }
    //searching in ara
    double s;
    int found;
    while(1)
    {
    printf("\n\n\tEnter a value to search: ");
    scanf("%lf",&s);
    found = arasrc(3, 3, ara, s);
    if(found)
    {
        printf("\tFound");
    }
    else
    {
        printf("\tNot found!");
    }
    }
    
    getch();
    return 0;
}

//searching in ara
int arasrc(int r, int c, double a[r][c], double s)
{
    int flag = 0;
    for(r = 0; r < 3; r ++)
    {
        for(c = 0; c < 3; c ++)
        {
            if(s == a[r][c])
            {
                flag = 1;
                break;
            }
        }
        if(flag) break;
    }
    return flag;
}

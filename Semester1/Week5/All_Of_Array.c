#include <stdio.h>

double araSUM(double n[], int size);
double araAVG(double n[], int size);
void araSORT(double n[], int size);
void araREVERSE(double n[], int size);
int araSEARCH(double n[], int size, double value);
double araMAX(double n[], int size);

int main()
{
    int size, i;

    printf("\n\tEnter the size of the array: ");
    scanf("%d", &size);

    double ara[size];

    for(i = 0; i < size; i ++)
    {
        printf("\tEnter element %d:", i + 1);
        scanf("%lf",&ara[i]);
    }

    printf("\n\tArray          = [");
    for(i = 0; i < size; i ++)
    {
        printf(" %6.2lf ", ara[i]);
    }
    printf("]");

    araREVERSE(ara, size);
    printf("\n\tReversed array = [");
    for(i = 0; i < size; i ++)
    {
        printf(" %6.2lf ", ara[i]);
    }
    printf("]");

    araSORT(ara, size);
    printf("\n\tSorted array   = [");
    for(i = 0; i < size; i ++)
    {
        printf(" %6.2lf ", ara[i]);
    }
    printf("]");

    printf("\n\tSum            = %7.3lf",araSUM(ara, size));

    printf("\n\tAverage        = %7.3lf",araAVG(ara, size));

    printf("\n\tMax            = %7.3lf",araMAX(ara, size));


    double search;
    int found;
    while(1)
    {
        printf("\n\n\tSearch in array: ");
        scanf("%lf",&search);
        found = araSEARCH(ara, size, search);
        switch (found)
        {
            case -1:
                printf("\t Not found!");
                break;
            default:
                printf("\t Found at position %d", found + 1);
                break;
        }
    }

    getch();

    return 0;
}

double araSUM(double n[], int size)
{
    int i;
    double sum = 0;
    for(i = 0; i < size; i ++)
    {
        sum += n[i];
    }
    return sum;
}

double araAVG(double n[], int size)
{
    return araSUM(n,size)/size;

}

void araSORT(double n[], int size)
{
    int i, streak = 0;
    while(streak < size - 1)
    {
        for(i = 0; i < size - 1; i++)
        {
            if(n[i] > n[i + 1])
            {
                n[i] = n[i] + n[i + 1];//Swapping
                n[i + 1] = n[i] - n[i + 1];
                n[i] = n[i] - n[i + 1];
                streak = 0;
            }
            else
            {
                streak ++;
            }
        }
    }
}

void araREVERSE(double n[], int size)
{
    int i, j, t;
    for(i = 0, j = size - 1; i < (size/2); i ++, j --)
    {
        t = n[i];
        n[i] = n[j];
        n[j] = t;
    }
    return 0;
}

//Searches for an element. If found returns array position(i), else returns -1
int araSEARCH(double n[], int size, double value)
{
    int i, result = -1;

    for(i = 0; i < size; i ++)
    {
        if(n[i] == value)
        {

            result = i;
            break;
        }
    }
    return result;
}

//Finds the max element in the array
double araMAX(double n[], int size)
{
    int i, max = n[0];
    for(i = 1; i < size; i ++)
    {
        if(n[i] > max)
        {
            max = n[i];
        }
    }
    return max;
}

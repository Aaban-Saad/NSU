#include <stdio.h>

double araSUM(double n[], int size);
double araAVG(double n[], int size);
void PrintSorted(double n[], int size);

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
    printf("\n\tArray        = [");
    for(i = 0; i < size; i ++)
    {
        printf(" %6.2lf ", ara[i]);
    }
    printf("]");
    printf("\n\tSorted array = [");
    PrintSorted(ara, size);
    printf("]");
    printf("\n\tSum          = %7.3lf",araSUM(ara, size));
    printf("\n\tAverage      = %7.3lf",araAVG(ara, size));
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

void PrintSorted(double n[], int size)
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
    for(i = 0; i < size; i ++)
    {
        printf(" %6.2lf ", n[i]);
    }
}


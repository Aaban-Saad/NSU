#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

double araSUM(double n[], int size);
double araAVG(double n[], int size);
void araSORT(double n[], int size);
void araREVERSE(double n[], int size);
int araSEARCH(double n[], int size, double value);
double araMAX(double n[], int size);
double araMIN(double n[], int size);
double ara2MAX(double n[], int size);
double ara2MAX(double n[], int size);
double ara2MIN(double n[], int size);
void araPRIME(double n[]; int size);

int main()
{
    int size, i;

    while (1)
    {
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
        printf("\n\tMin            = %7.3lf",araMIN(ara, size));
        printf("\n\t2nd max        = %7.3lf",ara2MAX(ara, size));
        printf("\n\t2nd min        = %7.3lf",ara2MAX(ara, size));

        printf("\n\tPrime numbers in array: ");
        araPRIME(ara, size);


        double search;
        int found;
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
        //Asking before looping the program
        char ask;
        printf("\n\n\t[Press 'C' to clear view] ");
        printf("\n\tTry again? (Y/N) --> ");
        while(1)
        {
            ask = getch();
            printf("%c",ask);
            if(ask == 'y' || ask == 'Y')
            {
                printf("\n________________________________________________\n\n");
                break;
            }
            else if(ask == 'c' || ask == 'C')
            {
                system("cls");
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
    int i, j;
    double t;
    for(i = 0, j = size - 1; i < (size/2); i ++, j --)
    {
        t = n[i];
        n[i] = n[j];
        n[j] = t;
    }
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

double araMIN(double n[], int size)
{
    int i, min = n[0];
    for(i = 0; i < size; i ++)
    {
        if(n[i] < min)
        {
            min = n[i];
        }
    }
    return min;
}

double ara2MAX(double n[], int size)
{
    int i, max2, streak = 0;
    double t;
    //sorting
    while(streak < size - 1)
    {
        for(i = 1; i < size; i ++)
        {
            if(n[i] < n[i - 1])
            {
                t = n[i];
                n[i] = n[i - 1];
                n[i - 1] = t;
                streak = 0;
            }
            else
            {
                streak ++;
            }
        }
    }
    return n[size - 2];
}

double ara2MIN(double n[], int size)
{
    int i, max2, streak = 0;
    double t;
    //sorting
    while(streak < size - 1)
    {
        for(i = 1; i < size; i ++)
        {
            if(n[i] < n[i - 1])
            {
                t = n[i];
                n[i] = n[i - 1];
                n[i - 1] = t;
                streak = 0;
            }
            else
            {
                streak ++;
            }
        }
    }
    return n[1];
}

void araPRIME(double n[]; int size)
{
    int i, j, prime;

    for(i = 0; i < size; i ++)
    {
        prime = 1;
        for(j = 2; j < n[i]; j ++)
        {
            if((int)n[i] % 2 == 0)
            {
                break;
                prime = 0;
            }
        }
        if(prime && n[i] != 1)
        printf("\n\t%d", (int)n[i]);
    }
    
}


#include <stdio.h>
#include <conio.h>

typedef struct MovieStar
{
    char name[50];
    float rating;
    int fan;
} moviestar;

void araSORT(moviestar n[], int size);

int main()
{
    moviestar ms[3];
    int i, j;
    float rating, temp;

    for(i = 0; i < 3; i++)
    {
        printf("\n%20s%d", "Movie star: ", i + 1);
        printf("\n%20s", "Name: ");
        gets(ms[i].name);
        printf("%20s", "Number of fan: ");
        scanf("%d", &ms[i].fan);
        fflush(stdin);
    }

    for(i = 0; i < 3; i ++)
    {
        rating = 0;
        printf("\n\n\n\tMovie star: %s\n", ms[i].name);
        for(j = 0; j < ms[i].fan; j ++)
        {
            printf("%20s%d:", "Rating of fan ", j + 1);
            scanf("%f", &temp);
            rating += temp;
        }
        ms[i].rating = rating / ms[i].fan;
    }

    araSORT(ms, 3);

    for(i = 0; i < 3; i++)
    {
        printf("\n\t%s: %f", ms[i].name, ms[i].rating);
    }

    getch();
    return 0;
}

void araSORT(moviestar n[], int size)
{
    int i, streak = 0;
    moviestar temp;
    while(streak < size - 1)
    {
        for(i = 0; i < size - 1; i++)
        {
            if(n[i].rating < n[i + 1].rating)
            {
                temp = n[i];
                n[i] = n[i + 1];
                n[i + 1] = temp;

                streak = 0;
            }
            else
            {
                streak ++;
            }
        }
    }
}
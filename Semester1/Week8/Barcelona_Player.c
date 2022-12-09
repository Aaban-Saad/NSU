#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct BarcelonaPlayer
{
    char name[20];
    int age;
    char country[20];
    char position[20];
    double salary;
    double rating;
} bcp;

void highestPaidPlayer(bcp *p, int numOfPlayer);
void findPlayers(bcp *p, int numOfPlayer);

int main()
{
    bcp p[3];

    strcpy(p[0].name, "Carles Comamala");
    p[0].age = 38;
    strcpy(p[0].country, "Denmark");
    p[0].salary = 1000;
    p[0].rating = 4.2;

    strcpy(p[1].name, "Diego Maradona");
    p[1].age = 21;
    strcpy(p[1].country, "Argentina");
    p[1].salary = 1020;
    p[1].rating = 4.9;

    strcpy(p[2].name, "Ronaldo");
    p[2].age = 20;
    strcpy(p[2].country, "Brazil");
    p[2].salary = 1900;
    p[2].rating = 4.5;

    printf("\n\tHighest paid player: ");
    highestPaidPlayer(p, 3);

    printf("\n\n\tPlayers from Argentina: ");
    findPlayers(p, 3);

    getch();
    return 0;
}

void highestPaidPlayer(bcp *p, int numOfPlayer)
{
    int i, max;
    double maxSalary = p[0].salary;
    for(i = 1; i < numOfPlayer; i ++)
    {
        if(p[i].salary > maxSalary)
        {
            maxSalary = p[i].salary;
            max = i;
        }
    }
    printf("%s", p[max].name);
}

void findPlayers(bcp *p, int numOfPlayer)
{
    int i;
    for(i = 0; i < numOfPlayer; i ++)
    {
        if(strcmp(p[i].country, "Argentina") == 0)
        {
            printf("\n\t%s", p[i].name);
        }
    }
}

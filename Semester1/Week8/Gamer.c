#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Gamer
{
    int num_of_fav_game;
    char list_of_fav_game[100][50];
} gamer;

char gameRanking[100][50];
char listOfGames[100][50];
int occurrence[100];

void input(gamer *boy);
void gameRank(gamer *boy);

int main()
{
    int i;

    gamer boy[5];
    input(boy);
    gameRank(boy);

    for(i = 0; i < sizeof(occurrence); i ++)
    {
        printf("\n\t%s", gameRanking[i]);
    }

    getch();
    return 0;
}

void input(gamer *boy)
{
    int i;

    boy[0].num_of_fav_game = 3;
    strcpy(boy[0].list_of_fav_game[0], "GTA");
    strcpy(boy[0].list_of_fav_game[1], "Far Cry");
    strcpy(boy[0].list_of_fav_game[2], "Hit Man");


    boy[1].num_of_fav_game = 3;
    strcpy(boy[1].list_of_fav_game[0], "MS Flight Simulator");
    strcpy(boy[1].list_of_fav_game[1], "Far Cry");
    strcpy(boy[1].list_of_fav_game[2], "Call of Duty");

    boy[2].num_of_fav_game = 3;
    strcpy(boy[2].list_of_fav_game[0], "GTA");
    strcpy(boy[2].list_of_fav_game[1], "NFS");
    strcpy(boy[2].list_of_fav_game[2], "Call of Duty");

    boy[3].num_of_fav_game = 2;
    strcpy(boy[3].list_of_fav_game[0], "GTA");
    strcpy(boy[3].list_of_fav_game[1], "Call of Duty");

    boy[4].num_of_fav_game = 4;
    strcpy(boy[4].list_of_fav_game[0], "GTA");
    strcpy(boy[4].list_of_fav_game[1], "Far Cry");
    strcpy(boy[4].list_of_fav_game[2], "Call of Duty");
    strcpy(boy[4].list_of_fav_game[2], "Battle Field");
}

void gameRank(gamer *boy)
{
    int i, j, k, l, flag, totalGame = 0;

    for(i = 0; i < 5; i ++)
    {
        totalGame += boy[i].num_of_fav_game;
    }
    
    //list of all games without repetition
    for(i = 0; i < totalGame; i ++)
    {
        flag = 0;
        for(j = 0; j < 5; j ++)
        {
            for(k = 0; k < boy[j].num_of_fav_game; k ++)
            {
                for(l = 0; l < totalGame; l ++)
                {
                    if(strcmp(listOfGames[l], boy[j].list_of_fav_game[k]) == 0)
                    {
                        flag = 1;
                        break;
                    }
                    // if(strcmp(listOfGames[i], boy[j].list_of_fav_game[k]) != 0)
                    // {
                    //     strcpy(listOfGames[i], boy[j].list_of_fav_game[k]);
                    //     occurrence[i] = 1;
                    // }
                    // else
                    // {
                    //     occurrence[i] ++;
                    // }
                }
                if(!flag)
                {
                    strcpy(listOfGames[i], boy[j].list_of_fav_game[k]);
                    occurrence[i] = 1;
                }
                else
                {
                    occurrence[i] ++;
                }
            }
        }
    }

    int streak = 0;
 
    while(streak < sizeof(occurrence))
    {
        for(i = 0; i < sizeof(occurrence) - 1; i++)
        {
            if(occurrence[i] < occurrence[i + 1])
            {
                //shifting
                occurrence[i] = occurrence[i] ^ occurrence[i + 1];
                occurrence[i + 1] = occurrence[i] ^ occurrence[i + 1];
                occurrence[i] = occurrence[i] ^ occurrence[i + 1];

                strcpy(listOfGames[i + 1], gameRanking[i]);

                streak = 0;
            }
            else
            {
                strcpy(listOfGames[i], gameRanking[i]);

                streak ++;
            }
        }
    }
}
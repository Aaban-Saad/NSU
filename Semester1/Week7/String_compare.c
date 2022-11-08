#include <stdio.h>
#include <conio.h>
#include <string.h>

int compare(char string1[], char string2[]);

int main()
{
    char str1[1000], str2[1000];
    printf("\n\tEnter string 1: ");
    gets(str1);
    printf("\n\tEnter string 2: ");
    gets(str2);
    printf("\n\t%d", compare(str1, str2));

    getch();
    return 0;
}

int compare(char string1[], char string2[])
{
    int i, cmp;
    for(i = 0; string1[i] != '\0' || string2[i] != '\0'; i ++)
    {
        if(string1[i] == string2[i])
        {
            cmp = 0;
            continue;
        }
        else if(string1[i] > string2[i])
        {
            cmp = 1;
            break;
        }
        else if(string1[i] < string2[i])
        {
            cmp = -1;
            break;
        }
    }
    return cmp;
}
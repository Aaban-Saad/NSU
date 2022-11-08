#include <stdio.h>
#include <conio.h>
#include <string.h>

void reverse(char str[]);

int main()
{
    char str[1000];
    printf("\n\tEnter a string: ");
    gets(str);
    reverse(str);
    printf("\tReversed string: ");
    puts(str);
    getch();
    return 0;
}

void reverse(char str[])
{
    int len = strlen(str), i, j;

    for(i = 0, j = len - 1; i < len / 2; i ++, j --)
    {
        str[i] = str[i] ^ str[j];
        str[j] = str[i] ^ str[j];
        str[i] = str[i] ^ str[j];
    }
}
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
    char a[50] ="asdf", b[10] = "-sdfghj";
    int i, j;

    for(i = strlen(a), j = 0; i < strlen(a) + strlen(b) + 1; i ++, j ++)
    {
        a[i] = b[j];
    }
    puts(a);

}
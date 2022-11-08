#include <stdio.h>
#include <conio.h>

int main()
{
    char a[100] = "ASFDGSDG", b[50] = "DFDFJFJFSJFJJSDFJSKJ";

    printf("\n\tEnter a string: ");
    //gets(a);

    printf("\tEnter another string: ");
    //gets(b);

    int i, aLen = 0, bLen = 0;

    for(i = 0; a[i] != 0; i ++)
    {
        aLen ++;
    }


    for(i = 0; b[i] != 0; i ++)
    {
        bLen ++;
    }

    if(aLen > bLen) puts(a);
    else if(bLen > aLen) puts(b);
    else printf("Equal");

    getch();
    return 0;
}
#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    printf("\n\tEnter size: ");
    scanf("%d", &size);

    int line, space;
    for(line = 1; line <= size; line ++)
    {
        for(space = 1; space <= size - line; space ++)
        {
            printf(" ");
        }
        printf("*");
        for(space = 1; space <= 2*line - 3; space ++)
        {
            printf(" ");
        }
        if(line != 1)
        {
            printf("*");
        }
        printf("\n");
    }
    for(line = 2; line <= size; line ++)
    {
        for(space = 1; space <= line - 1; space ++)
        {
            printf(" ");
        }
        printf("*");
        for(space = 1; space <= 2*(size - line) - 1; space ++)
        {
            printf(" ");
        }
        if(line != size)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}

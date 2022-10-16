#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    printf("\n\tEnter size: ");
    scanf("%d", &size);

    int line, star, space;
    for(line = 1; line <= size; line ++)
    {
        for(star = 1; star <= (size - line) + 1; star ++)
        {
            printf("*");
        }
        for(space = 2; space <= (2*line - 1); space ++)
        {
            printf(" ");
        }
        for(star = 1; star <= (size - line) + 1; star ++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(line = 1; line <= size - 1; line ++)
    {
        for(star = 1; star <= line + 1; star ++)
        {
            printf("*");
        }
        for(space = 3; space <= 2*(size - line); space ++)
        {
            printf(" ");
        }
        for(star = 1; star <= line + 1; star ++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}

#include <stdio.h>
#include <conio.h>
int main()
{
    int size;
    printf("\n\tEnter size: ");
    scanf("%d",&size);

    int line, space, star;
    for(line = 1; line <= size; line ++)
    {
        for(space = 1; space <= line; space ++)
        {
            printf(" ");
        }
        for(star = 1; star <= 2*(size - line) + 1; star ++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
    return 0;
}

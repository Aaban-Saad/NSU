#include <stdio.h>
int main()
{
    char ch;
    while(1)
    {
        printf("\n\n\tPress a key(A/B/C): ");
        ch = getch();
        switch(ch)
        {
        case 'A':
        case 'a':
            printf("\n\tYou pressed A");
            break;

        case 'B':
        case 'b':
            printf("\n\tYou pressed B");
            break;

        case 'C':
        case 'c':
            printf("\n\tYou pressed C");
            break;

        default:
            printf("\n\tWrong key");
        }
    }
    return 0;
}

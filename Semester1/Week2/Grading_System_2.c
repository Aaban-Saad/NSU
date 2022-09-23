#include<stdio.h>
int main()
{
    char a;
    printf("\tEnter your grade: ");
    while(1)
    {

        a = getch();
        if(a == 'a' || a == 'A' || a == 'b' || a == 'B' || a == 'c' || a == 'C' || a == 'd' || a == 'D')
        {
            printf("\n\t%c--> You passed! ",a);
        }
        else if(a == 'f' || a == 'F')
        {
            printf("\n\t%c--> You failed! ",a);
        }
        else
        {
            printf("\b "); //Delete wrong input
        }
    }
    return 0;
}

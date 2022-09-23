#include <stdio.h>
int main()
{
    int num;

    while(1)
    {
        printf("\n\tEnter a number(0-100): ");
        scanf("%d",&num);
        if(num >= 93 && num <= 100)
        {
            printf("\t\tA");
        }
        else if(num >= 90 && num <= 92)
        {
            printf("\t\tA-");
        }
        else if(num >= 87 && num <= 89)
        {
            printf("\t\tB+");
        }
        else if(num >= 83 && num <= 86)
        {
            printf("\t\tB");
        }
        else if(num >= 80 && num <= 82)
        {
            printf("\t\tB-");
        }
        else if(num >= 77 && num <= 79)
        {
            printf("\t\tC+");
        }
        else if(num >= 73 && num <= 76)
        {
            printf("\t\tC");
        }
        else if(num >= 70 && num <= 72)
        {
            printf("\t\tC-");
        }
        else if(num >= 67 && num <= 69)
        {
            printf("\t\tD+");
        }
        else if(num >= 60 && num <= 66)
        {
            printf("\t\tD");
        }
        else if(num >= 0 && num <= 59)
        {
            printf("\t\tF");
        }
        else
        {
            printf("\t\tError!");
            continue;
        }
    }
    return 0;
}

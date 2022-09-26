#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(i = 1; i <= num; i ++)
    {
        printf("Repeating %d time(s)!\n",i);
    }
    getch();
    return 0;
}

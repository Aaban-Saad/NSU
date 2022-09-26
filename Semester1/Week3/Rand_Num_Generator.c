#include <stdio.h>
int main()
{
    int a, i = 1, num;
    printf("How many random numbers do you want? ->");
    scanf("%d",&a);
    while(i <= a)
    {
        num = rand()%10+1;
        printf("\n%d. random number: %d", i, num);
        i++;
    }
    getch();
    return 0;
}

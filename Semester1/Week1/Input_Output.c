#include <stdio.h>
int main()
{
    int num;
    float frac;
    char name[20];

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("The number is %d", num);

    printf("\n\nEnter a fractional number: ");
    scanf("%f",&frac);
    printf("The number is %f", frac);

    printf("\n\nEnter your name: ");
    scanf("%s",&name);
    printf("Your name is %s", name);
    getch();
    return 0;
}

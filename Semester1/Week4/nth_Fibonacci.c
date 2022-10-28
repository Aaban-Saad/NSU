#include <stdio.h>
#include <conio.h>

int fibonacci(int n);

int main()
{
    int a;

    printf("\n\tEnter a number: ");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
        printf("\n\t%dst fibonacci number is: %d", a, fibonacci(a));
        break;

        case 2:
        printf("\n\t%dnd fibonacci number is: %d", a, fibonacci(a));
        break;

        case 3:
        printf("\n\t%drd fibonacci number is: %d", a, fibonacci(a));
        break;
        
        default:
        printf("\n\t%dth fibonacci number is: %d", a, fibonacci(a));
        break;
    }
    getch();
    return 0;
}

int fibonacci(int n)
{
    int a = 0, b = 1, c = 1, i = 2;

    while(i <= n)
    {
        a = b;
        b = c;
        c = a + c;
        i ++;
    }
    return a;
}
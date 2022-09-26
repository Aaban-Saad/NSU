#include <stdio.h>
int main()
{
    int a, b, c, num, i = 1;
    a = 0;
    b = 1;
    c = 1; //a + b
    printf("\n\tEnter a number: ");
    scanf("%d",&num);
    printf("\n\tFirst %d fibonacci number(s) are: \n\t",num);
    if(num == 1)
    {
        printf("%d\n\t",a);
    }
    else if(num == 2)
    {
        printf("%d\n\t%d\n\t",a,b);
    }
    else if(num > 2)
    {
        printf("%d\n\t%d\n\t",a,b);
        while(i <= (num - 2))
        {
            printf("%d\n\t",c);
            a = b;
            b = c;
            c = a + b;
            i ++;
        }
    }
    else
    {
        printf("Error!");
    }
    getch();
    return 0;
}

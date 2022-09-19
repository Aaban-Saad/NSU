#include <stdio.h>
int main()
{
    int a, b;
    printf("\tint1 = ");
    scanf("%d",&a);
    printf("\tint1 = ");
    scanf("%d",&b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\n\tAfter swapping: \n\tint1 = %d \n\tint2 = %d",a,b);
    getch();
    return 0;
}

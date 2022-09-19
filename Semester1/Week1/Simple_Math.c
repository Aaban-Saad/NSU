/*
Show the sum, product, difference, quotient and
reminder of two numbers.
*/

#include <stdio.h>
int main()
{
    int a, b;
    int sum, product, difference, quotient, reminder;
    while(1)
    {
        printf("\tNum-1: ");
        scanf("%d",&a);
        printf("\tNum-2: ");
        scanf("%d",&b);
        sum = a + b;
        product = a * b;
        difference = a - b;
        quotient = a / b;
        reminder = a % b;
        printf("\n\tSum = %d",sum);
        printf("\n\tProduct = %d",product);
        printf("\n\tDifference = %d",difference);
        printf("\n\tQuotient = %d",quotient);
        printf("\n\tReminder = %d",reminder);
        printf("\n\t~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    }
    return 0;
}

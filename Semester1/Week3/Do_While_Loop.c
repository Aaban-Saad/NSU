//Taking input of only even numbers

#include <stdio.h>
int main()
{
    int num;
    do
    {
        printf("\nEnter a even numbers: ");
        scanf("%d",&num);
    }while(num %2 == 0);
    printf("\nYOU ARE OUT OF LOOP");
    getch();
    return 0;
}

#include <stdio.h>
int main()
{
    double a, b, result;
    char oprtr;
    printf("\n\tHint: Try typing in '1+1' and press enter.");
    printf("\n\t__________________________________________\n\t");
    while(1)
    {
        scanf("%lf",&a);
        scanf("%c",&oprtr);
        scanf("%lf",&b);

        switch (oprtr)
        {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            result = a / b;
            break;

        default:
            printf("\tWrong input, showing previous result.");
        }

        printf("\t= %.2lf\n\n\t",result);
    }
    return 0;
}

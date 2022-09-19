#include <stdio.h>
int main()
{
    while(1)
    {
        double c, f;
        printf("\tTemperature in celsius = ");
        scanf("%lf",&c);
        f = c * (9/5) + 32;
        printf("\tTemperature in fahrenheit = %lf",f);
        printf("\n\t****************************************\n\n");
    }
    return 0;
}

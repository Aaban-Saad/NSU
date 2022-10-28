#include <stdio.h>
#include <conio.h>
#include <math.h>

float roundFloat(float value, int decimalPlc);

int main()
{
    float a = 2.6749;
    int b = 2;
    printf("%f", roundFloat(a, b));
    getch();
    return 0;
}

float roundFloat(float value, int decimalPlc)
{
    //if value was 5.6780 before, then value is 5678 now
    value = (int)(value * pow(10, decimalPlc + 1));
    int rem = (int)value % 10; //reminder = 8
    value = (int)(value / 10); //value = 567

    if(rem >= 5)
    {
        value ++; //value = 568
        value = value / pow(10, decimalPlc); //value = 5.68
    }
    else
    {
        value = value / pow(10, decimalPlc);
    }
    return value;
}

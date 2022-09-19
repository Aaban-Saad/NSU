/*
This program reads the radius of a circle
and prints it's diameter, circumference and area.
*/

#include <stdio.h>
#include <math.h>
int main()
{
    double pi = 3.14159;
    double radius, diameter, circumference, area;
    while(1)
    {
        printf("\n\tEnter the radius of a circle: ");
        scanf("%lf", &radius);
        diameter = 2 * radius;
        circumference = 2 * pi * radius;
        //area = pi * radius * radius;
        area = pi * pow(radius,2);
        printf("\n\tDiameter = %.3lf",diameter);
        printf("\n\tCircumference = %.3lf",circumference);
        printf("\n\tArea = %.3lf",area);
        printf("\n\t__________________________________\n");
    }
    return 0;
}

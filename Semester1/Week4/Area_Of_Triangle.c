#include <stdio.h>
double getBase();
double getHeight();
double AreaTriangle(double base, double height);

int main()
{
    double b, h;
    printf("\n\tEnter base: ");
    b = getBase();
    printf("\tEnter height: ");
    h = getHeight();
    printf("\tArea of the triangle = %lf",AreaTriangle(b, h));
    printf("\n\n\tPress any key to exit.");
    getch();
    return 0;
}

double getBase()
{
    double base;
    scanf("%lf",&base);
    return base;
}

double getHeight()
{
    double height;
    scanf("%lf",&height);
    return height;
}

double AreaTriangle(double base, double height)
{
    return .5 * base * height;
}

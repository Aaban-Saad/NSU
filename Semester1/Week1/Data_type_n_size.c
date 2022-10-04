#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d[1];
    long int e;
    signed int f;
    unsigned int g;
    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of float: %d bytes\n", sizeof(b));
    printf("Size of double: %d bytes\n", sizeof(c));
    printf("Size of char: %d bytes\n", sizeof(d));
    printf("Size of long int: %d bytes\n", sizeof(e));
    printf("Size of signed int: %d bytes\n", sizeof(f));
    printf("Size of unsigned int: %u bytes\n", sizeof(f));
    getch();
    return 0;
}

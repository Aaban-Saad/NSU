#include <stdio.h>
#include <conio.h>

typedef struct birthCertificate
{
    int day, month, year;
    char name[100], fatherName[100], motherName[100];
} birthCert;

birthCert olderPerson(birthCert a, birthCert b);

int main()
{
    birthCert p[2];
    int i;
    for(i = 0; i < 2; i ++)
    {
        printf("\n\tPerson %d", i + 1);
        printf("\n\t  Name         : ");
        gets(p[i].name);
        fflush(stdin);
        printf("\t  Birth year   : ");
        scanf("%d", &p[i].year);
        printf("\t  Birth month  : ");
        scanf("%d", &p[i].month);
        printf("\t  Birth day    : ");
        scanf("%d", &p[i].day);
        fflush(stdin);
        printf("\t  Father's name: ");
        gets(p[i].fatherName);
        fflush(stdin);
        printf("\t  Mother's name: ");
        gets(p[i].motherName);
        fflush(stdin);
    }

    birthCert olderOne = olderPerson(p[0], p[1]);

    printf("\n\tName: %s", olderOne.name);
    printf("\n\tFather's name: %s", olderOne.fatherName);
    printf("\n\tMother's name: %s", olderOne.motherName);
    getch();
    return 0;
}

birthCert olderPerson(birthCert a, birthCert b)
{
    if(a.year < b.year) return a;
    else return b;

    if(a.month < b.month) return a;
    else return b;

    if(a.day < b.day) return a;
    else return b;
}
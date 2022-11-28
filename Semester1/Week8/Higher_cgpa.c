#include <stdio.h>
#include <conio.h>

typedef struct Student
{
    char name[100];
    int id;
    float cgpa;
} student;

student higherCGPA(student a, student b);

int main()
{
    student p[2];
    int i;
    for(i = 0; i < 2; i ++)
    {
        printf("\n\tStudent %d", i + 1);
        printf("\n\t  Name: ");
        gets(p[i].name);
        fflush(stdin);
        printf("\t  ID    : ");
        scanf("%d", &p[i].id);
        printf("\t  cgpa    : ");
        scanf("%f", &p[i].cgpa);
        fflush(stdin);
    }

    student higherOne = higherCGPA(p[0], p[1]);

    printf("\n\tName: %s", higherOne.name);
    printf("\n\tId: %d", higherOne.id);
    getch();
    return 0;
}

student higherCGPA(student a, student b)
{
    if(a.cgpa > b.cgpa) return a;
    else return b;
}
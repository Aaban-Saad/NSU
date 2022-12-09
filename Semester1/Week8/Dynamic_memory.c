#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct Student
{
    char name[20];
    int id;
    float cgpa;
} student;

student leastCGPA(student *s, int totalStudent);

int main()
{
    student *s = (student*)malloc(sizeof(student) * 3);
    int i;
    
    for(i = 0; i < 3; i ++)
    {
        printf("\n\tEnter Student-%d's name, ID and CGPA: \n", i + 1);
        gets(s[i].name);
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].cgpa);
        fflush(stdin);
    }

    student min = leastCGPA(s, 3);

    printf("\n\n\tStudent with least CGPA:");
    printf("\n\tName: %s", min.name);
    printf("\n\tID: %d", min.id);
    printf("\n\tCGPA: %.2f\n", min.cgpa);

    free(s);
    getch();
    return 0;
}

student leastCGPA(student *s, int totalStudent)
{
    int i;
    student min = s[0];
    for(i = 1; i < totalStudent; i ++)
    {
        if(s[i].cgpa < min.cgpa)
        {
            min = s[i];
        }
    }
    return min;
}


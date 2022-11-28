#include <stdio.h>
#include <conio.h>

typedef struct studentInfo
{
    char name[50];
    int id;
    float cgpa;
}stInfo;
stInfo student[3];

int minCGPAguy(int numOfStudent);

int main()
{
    int i;
    for(i = 0; i < 3; i ++)
    {
        printf("\n\tStudent %d ->\n\tName: ", i + 1);
        gets(student[i].name);
        printf("\tId: ");
        scanf("%d", &student[i].id);
        printf("\tCGPA: ");
        scanf("%f", &student[i].cgpa);
        fflush(stdin);
    } 

    int last = minCGPAguy(3);
    printf("\n\tMin CGPA: %.2f",student[last].cgpa);
    printf("\n\tName: %s",student[last].name);
    printf("\n\tID: %d",student[last].id);

    getch();
    return 0;
}

int minCGPAguy(int numOfStudent)
{
    int i, minCGPA = student[0].cgpa, studentSerial = 0;

    for(i = 1; i < numOfStudent; i ++)
    {
        if(student[i].cgpa < minCGPA)
        {
            minCGPA = student[i].cgpa;
            studentSerial = i;
        }
    }
    return studentSerial;
}


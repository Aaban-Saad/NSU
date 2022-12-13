#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student
{
    char name[50];
    int id;
    char dept[50];
    double cgpa;
} student;

char ch, temp[50];

void safe_gets_by_Aaban_Saad(char *str, size_t length);
void SaadTakeInput(FILE *filePointer);
void fresh(char *str);
void printByDept(char *deptName, student allStudents[], int numOfStudent);
void saveByDept(char *fileName, char *deptName, student allStudents[], int numOfStudent);

int main()
{
    int stNum;
    printf("\n\tEnter number of students: ");
    scanf("%d", &stNum);
    fflush(stdin);

    student *st = (student*)malloc(sizeof(student) * stNum);
    FILE *file = fopen("input.csv", "r");
    if(file == NULL)
    {
        printf("\n\tError: File not found!");
    }

    int i;
    for(i = 0; i < stNum; i ++)
    {
        //Name input
        SaadTakeInput(file);
        temp[strlen(temp)] = '\0';
        strcpy(st[i].name, temp);
        fresh(temp);

        //ID input
        SaadTakeInput(file);
        temp[strlen(temp)] = '\0';
        st[i].id = atoi(temp);
        fresh(temp);

        //Department input
        SaadTakeInput(file);
        temp[strlen(temp)] = '\0';
        strcpy(st[i].dept, temp);
        fresh(temp);

        //CGPA input
        SaadTakeInput(file);
        temp[strlen(temp)] = '\0';
        st[i].cgpa = atof(temp);
        fresh(temp);

        printf("\n\t%s, %d, %s, %.2lf", st[i].name, st[i].id, st[i].dept, st[i].cgpa);
    }

    char deptName[50];
    printf("\n\n\n\tEnter department name: ");
    safe_gets_by_Aaban_Saad(deptName, 50);
    printByDept(deptName, st, stNum);

    char fileName[50];
    printf("\n\n\n\tEnter file name to save by department: ");
    safe_gets_by_Aaban_Saad(fileName, 50);
    saveByDept(fileName, deptName, st, stNum);

    fclose(file);
    free(st);
    getch();
    return 0;
}

void SaadTakeInput(FILE *filePointer)
{
    int i;
    for(i = 0; ((ch = fgetc(filePointer)) != ','); i ++)
    {
        if((i == 0 && ch == ' '))
        {
            i --;
            continue;
        }
        else if(feof(filePointer) || ch == '\n')
        {
            break;
        }
        
        temp[i] = ch;
    }
}

void fresh(char *str)
{
    int i, len = strlen(str);
    for(i = 0; i < len; i ++)
    {
        str[i] = '\0';
    }
}

void safe_gets_by_Aaban_Saad(char *str, size_t length)
{
    fgets(str, length, stdin);
    size_t len = strlen(str);
    if (len > 0 && str[len-1] == '\n')
    {
        str[len-1] = '\0';
    }   
}

void printByDept(char *deptName, student allStudents[], int numOfStudent)
{
    int i;
    
    for(i = 0; i < numOfStudent; i ++)
    {
        if(strcmp(allStudents[i].dept, deptName) == 0)
        {
            printf("\n\t%s, %d, %s, %.2lf", allStudents[i].name, allStudents[i].id, allStudents[i].dept, allStudents[i].cgpa);
        }
    }
}

void saveByDept(char *fileName, char *deptName, student allStudents[], int numOfStudent)
{
    char tem[100], itoa[10];
    int i;
    FILE *file = fopen(strcat(fileName, ".csv"), "w");
    if(file == NULL)
    {
        printf("\a\n\tError: Cannot creat file!");
    }

    for(i = 0; i < numOfStudent; i ++)
    {
        if(strcmp(allStudents[i].dept, deptName) == 0)
        {
            strcpy(tem, allStudents[i].name);
            strcat(tem, ", ");
            sprintf(itoa, "%d", allStudents[i].id);
            strcat(tem, itoa);
            strcat(tem, ", ");
            strcat(tem, allStudents[i].dept);
            strcat(tem, ", ");
            sprintf(itoa, "%.2lf", allStudents[i].cgpa);
            strcat(tem, itoa);
            strcat(tem, "\n");
            fprintf(file, "%s", tem);
        }
    }
    printf("\n\tFile saved successfully!");
    fclose(file);
    
}

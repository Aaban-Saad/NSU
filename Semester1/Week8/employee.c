#include <stdio.h>
#include <conio.h>

typedef struct Employee
{
    char name[100];
    int bDate, bMonth, bYear;
    int sDate, sMonth, sYear;
    int salary;
} employee;

int maxSalary(employee emp[4]);

int main()
{
    employee p[4];
    int i;

    for(i = 0; i < 4; i ++)
    {
        printf("\n\tEmployee %d:", i + 1);
        printf("\n\t  Name: ");
        gets(p[i].name);
        fflush(stdin);
        printf("\t  Date of birth(dd mm yyyy): ");
        scanf("%d%d%d", &p[i].bDate, &p[i].bMonth, &p[i].bYear);
        printf("\t  Starting date(dd mm yyyy): ");
        scanf("%d%d%d", &p[i].sDate, &p[i].sMonth, &p[i].sYear);
        printf("\t  Salary: ");
        scanf("%d", &p[i].salary);
        fflush(stdin);
    }

    int maxEmp = maxSalary(p);

    printf("\n\n\tName: %s", p[maxEmp].name);
    printf("\n\tDate of birth(dd mm yyyy): %d/ %d/ %d",p[maxEmp].bDate, p[maxEmp].bMonth, p[maxEmp].bYear);
    printf("\n\tStarting date(dd mm yyyy): %d/ %d/ %d",p[maxEmp].sDate, p[maxEmp].sMonth, p[maxEmp].sYear);
    printf("\n\tSalary: %d", p[maxEmp].salary);

    getch();
    return 0;
}

int maxSalary(employee emp[4])
{
    int i, maxSalary = emp[0].salary, empNum = 0;

    for(i = 1; i < 4; i ++)
    {
        if(emp[i].salary > maxSalary)
        {
            maxSalary = emp[i].salary;
            empNum = i;
        }
    }

    return empNum;
}


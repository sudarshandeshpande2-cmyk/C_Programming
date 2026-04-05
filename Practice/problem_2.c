#include <stdio.h>
#include <string.h>
struct student
{
    char name[50];
    int roll;
    int marks[3];
    int total;
    float average;
};

void calculate(struct student *sobj)
{
    // Total
    sobj->total = sobj->marks[0] + sobj->marks[1] + sobj->marks[2];

    // Average
    sobj->average = sobj->total / 3.0;
}

void display(struct student sobj)
{
    printf("1.Name of student: %s\n", sobj.name);
    printf("2.Roll Number : %d\n", sobj.roll);
    printf("3.Total : %d\n", sobj.total);
    printf("4.Average : %.2f\n", sobj.average);
}

int main()
{
    int n, i, t;

    printf("Enter number of students : ");
    scanf("%d", &n);

    struct student students[n];

    getchar(); // Buffer cleaning because scanf("%d",&n); leaves \n in buffer
    for (i = 0; i < n; i++)
    {
        // Input name
        printf("Enter name : ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0'; // IMP

        // Input Roll
        printf("Enter roll number : ");
        scanf("%d", &students[i].roll);

        // Input 3 subject marks
        printf("Enter marks in three subjects : ");
        scanf("%d %d %d",
              &students[i].marks[0],
              &students[i].marks[1],
              &students[i].marks[2]);
        getchar();

        calculate(&students[i]);
    }

    printf("Enter roll number to search :  ");
    scanf("%d", &t);

    int found = 0;

    for (i = 0; i < n; i++)
    {
        if (students[i].roll == t)
        {
            display(students[i]);
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        printf("Student not found\n");
    }
}
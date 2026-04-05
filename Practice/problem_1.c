#include <stdio.h>

struct student_info
{
    char name[50];
    int roll;
    int marks[3];
    int total;
    float average;
    char grade;
};

// Function to calculate total , average , grade
void calculate(struct student_info *sobj)
{
    sobj->total = sobj->marks[0] + sobj->marks[1] + sobj->marks[2];

    sobj->average = sobj->total / 3.0;

    if (sobj->average >= 75)
    {
        sobj->grade = 'A';
    }
    else if (sobj->average < 75 && sobj->average >= 60)
    {
        sobj->grade = 'B';
    }
    else if (sobj->average < 60 && sobj->average >= 50)
    {
        sobj->grade = 'C';
    }
    else if (sobj->average < 50)
    {
        sobj->grade = 'F';
    }
}

void display(struct student_info sobj)
{
    printf("1.Name of student : %s\n", sobj.name);
    printf("2.Roll No : %d\n", sobj.roll);
    printf("3.Total Marks : %d\n", sobj.total);
    printf("4.Average Marks : %.2f\n", sobj.average);
    printf("5.Grade : %c\n", sobj.grade);
}

int main()
{
    int n, i;

    printf("Enter number of students : ");
    scanf("%d", &n);

    struct student_info students[n];

    // Input
    for (i = 0; i < n; i++)
    {
        printf("Student : %d\n", i + 1);

        printf("Enter Name : ");
        scanf("%s", students[i].name); // safe

        printf("Enter Roll No : ");
        scanf("%d", &students[i].roll);

        printf("Enter marks in three subjects : ");
        scanf("%d %d %d",
              &students[i].marks[0],
              &students[i].marks[1],
              &students[i].marks[2]);

        calculate(&students[i]);
    }

    // Display all students
    printf("\n===============Student Details===============\n");
    for (i = 0; i < n; i++)
    {
        display(students[i]);
        printf("\n");
    }

    // Find topper
    int topperIndex = 0;
    for (i = 1; i < n; i++)
    {
        if (students[i].average > students[topperIndex].average)
        {
            topperIndex = i;
        }
    }

    printf("\nTopper : %s with %.2f average\n",
           students[topperIndex].name,
           students[topperIndex].average);

    return 0;
}
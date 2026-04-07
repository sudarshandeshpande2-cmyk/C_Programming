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

void calculate(struct student *sobj);
void addStudent(struct student s[], int *count);
void displayStudents(struct student s[], int count);
void searchStudents(struct student s[], int count);

void calculate(struct student *sobj)
{
    sobj->total = 0; // sobj->total  is actually  (*sobj).total

    for (int i = 0; i < 3; i++)
    {
        sobj->total += sobj->marks[i];
    }

    sobj->average = sobj->total / 3.0;
}

void addStudent(struct student s[], int *count)
{
    printf("Enter name: ");

    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ; // IMP

    fgets(s[*count].name, sizeof(s[*count].name), stdin);
    s[*count].name[strcspn(s[*count].name, "\n")] = '\0'; // IMP

    printf("Enter roll: ");
    scanf("%d", &s[*count].roll);

    printf("Enter marks : ");
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &s[*count].marks[i]);
    }

    calculate(&s[*count]);

    (*count)++;

    printf("Student added succesfully\n");
}

void displayStudents(struct student s[], int count)
{
    if (count == 0)
    {
        printf("No students available\n");
        return;
    }

    for (int i = 0; i < count; i++)
    {
        printf("\nStudent : %d\n", i + 1);
        printf("Name : %s\n", s[i].name);
        printf("Roll : %d\n", s[i].roll);

        printf("Marks: ");
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", s[i].marks[j]);
        }
        printf("\n");

        printf("Total : %d\n", s[i].total);
        printf("Average : %.2f\n", s[i].average);
    }
}

void searchStudents(struct student s[], int count)
{
    int roll;
    printf("Enter roll number to search: ");
    scanf("%d", &roll);

    int found = 0;
    for (int i = 0; i < count; i++)
    {
        // Check each student
        if (s[i].roll == roll)
        {
            printf("\nStudent found\n");
            printf("Name : %s\n", s[i].name);
            printf("Roll : %d\n", s[i].roll);

            printf("Marks :");
            for (int j = 0; j < 3; j++)
            {
                printf("%d ", s[i].marks[j]);
            }
            printf("\n");

            printf("Total : %d\n", s[i].total);
            printf("Average : %.2f\n", s[i].average);

            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Student not found\n");
    }
}

int main()
{
    int choice;
    struct student s[100];
    int count = 0;

    while (1)
    {
        printf("\n1. Add student\n");
        printf("2. Display students\n");
        printf("3. Search students\n");
        printf("4. Exit\n");

        printf("Enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addStudent(s, &count);
            break;
        case 2:
            displayStudents(s, count);
            break;
        case 3:
            searchStudents(s, count);
            break;
        case 4:
            printf("Exiting...\n");
            return 0;
        default:
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}
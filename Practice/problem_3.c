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

int main()
{
    int choice;
    struct student s[100];
    int count = 0;

    while (1)
    {
        printf("1. Add student\n");
        printf("2. Display students\n");
        printf("3. Search student\n");
        printf("4. Exit\n");
        printf("Enter your choice\n");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter name: ");
            getchar(); // IMP
            fgets(s[count].name, sizeof(s[count].name), stdin);

            printf("Enter roll: ");
            scanf("%d", &s[count].roll);

            printf("Enter marks in 3 subjects: ");
            for (int i = 0; i < 3; i++)
            {
                scanf("%d", &s[count].marks[i]);
            }

            s[count].total = 0;

            for (int i = 0; i < 3; i++)
            {
                s[count].total = s[count].total + s[count].marks[i];
            }

            s[count].average = s[count].total / 3.0;

            count++;

            printf("Students added successfully!\n");
            break;

        case 2:
            if (count == 0)
            {
                printf("No students available\n");
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    printf("\nStudent %d\n", i + 1);
                    printf("Name: %s\n", s[i].name);
                    printf("Roll: %d\n", s[i].roll);

                    printf("Marks: ");
                    for (int j = 0; j < 3; j++)
                    {
                        printf("%d ", s[i].marks[j]);
                    }

                    printf("\nTotal: %d\n", s[i].total);
                    printf("Average: %.2f\n", s[i].average);
                }
            }
            break;

        case 3:
            int roll;
            printf("Enter roll number to search: ");
            scanf("%d", &roll);

            // Searching
            int found = 0;
            for (int i = 0; i < count; i++)
            {
                if (s[i].roll == roll)
                {
                    printf("\nStudent found:\n");
                    printf("Name: %s\n", s[i].name);
                    printf("Roll: %d\n", s[i].roll);

                    printf("Marks ");
                    for (int j = 0; j < 3; j++)
                    {
                        printf("%d ", s[i].marks[j]);
                    }

                    printf("\nTotal: %d\n", s[i].total);
                    printf("Average: %.2f\n", s[i].average);

                    found = 1;
                    break;
                }
            }
            if (found == 0)
            {
                printf("Student not found\n");
            }
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
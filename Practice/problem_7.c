#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    int Arr[n];

    printf("\nEnter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    printf("Array elements are : ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n");
    return 0;
}
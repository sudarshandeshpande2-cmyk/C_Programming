#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int Arr[n];
    printf("Enter elements in array : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int iSearch;
    int found = 0;

    printf("Enter element to search : ");
    scanf("%d", &iSearch);

    for (int i = 0; i < n; i++)
    {
        if (iSearch == Arr[i])
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("Element not found\n");
    }
    return 0;
}
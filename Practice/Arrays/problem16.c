#include <stdio.h>

int main()
{
    int n, m;

    printf("Enter number of elements in first array : ");
    scanf("%d", &n);

    printf("Enter number of elements in second array : ");
    scanf("%d", &m);

    if (n < 1 || n > 100 || m < 1 || m > 100)
    {
        printf("Invalid Input\n");
        return 0;
    }

    int Arr[n];
    printf("Enter elements in first array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int Brr[m];
    printf("Enter elements in second array :");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Union Elements: ");

    // Step 1: Print unique elements from first array
    for (int i = 0; i < n; i++)
    {
        int already_printed = 0;
        for (int k = 0; k < i; k++)
        {
            if (Arr[i] == Arr[k])
            {
                already_printed = 1;
                break;
            }
        }

        if (!already_printed)
        {
            printf("%d ", Arr[i]);
        }
    }

    // Step 2: Print elements from second array not present in first array
    for (int i = 0; i < m; i++)
    {
        int exists_in_first = 0;
        int already_printed = 0;

        // Check if exists in first array
        for (int j = 0; j < n; j++)
        {
            if (Brr[i] == Arr[j])
            {
                exists_in_first = 1;
                break;
            }
        }

        if (exists_in_first)
        {
            continue;
        }

        // Check if already printed from second array
        for (int k = 0; k < i; k++)
        {
            if (Brr[i] == Brr[k])
            {
                already_printed = 1;
                break;
            }
        }
        if (!already_printed)
        {
            printf("%d ", Brr[i]);
        }
    }

    printf("\n");
    return 0;
}
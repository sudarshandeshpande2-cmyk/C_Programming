#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter number of elements in first array :");
    scanf("%d", &n);

    printf("Enter number of elements in second array :");
    scanf("%d", &m);

    if (n < 1 || n > 100 || m < 1 || m > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int Arr[n];
    printf("Enter elements in first array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int Brr[m];
    printf("Enter elements in second array : ");
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &Brr[i]);
    }

    int found_any = 0;

    printf("Intersection elements: ");

    for (int i = 0; i < n; i++)
    {
        int already_printed = 0;

        // Check if Arr[i] is already printed before

        for (int k = 0; k < i; k++)
        {
            if (Arr[i] == Arr[k])
            {
                already_printed = 1;
                break;
            }
        }
        if (already_printed == 1)
        {
            continue;
        }

        // Check if Arr[i] exist in Brr
        for (int j = 0; j < m; j++)
        {
            if (Arr[i] == Brr[j])
            {
                printf("%d ", Arr[i]);
                found_any = 1;
                break;
            }
        }
    }

    if (found_any == 0)
    {
        printf("No common elements found");
    }
    else
    {
        printf("\n");
    }
    return 0;
}
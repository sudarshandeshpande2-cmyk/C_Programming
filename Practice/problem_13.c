#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    // Input validation
    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int Arr[n];
    printf("Enter elements in array : ");

    // Array input
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    // Outer loop → pick each element one by one
    for (int i = 0; i < n; i++)
    {
        int isDuplicate = 0;
        // Flag to check :
        // Has the element already appeared before index i ?

        // 🔥 CRITICAL LOGIC:
        // Check only previous elements
        // If found → this element already processed → skip it

        for (int j = 0; j < i; j++)
        {
            if (Arr[i] == Arr[j])
            {
                isDuplicate = 1;
                break; // No need to check further
            }
        }
        // If duplicate found earlier → skip this iteration
        if (isDuplicate == 1)
        {
            continue;
        }

        int iCount = 0;
        // Will store frequency of current element

        // 🔥 CRITICAL LOGIC:
        // Traverse FULL array to count occurences
        for (int j = 0; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                iCount++;
            }
        }

        // Print result only for unique elements
        printf("%d occurs %d times\n", Arr[i], iCount);
    }

    return 0;
}
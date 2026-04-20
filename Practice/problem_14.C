#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int Arr[n];

    printf("Enter elements of array : ");

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &Arr[i]);
    }

    int found = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (Arr[i] == Arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            printf("%d is first non-repeating element\n", Arr[i]);
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        printf("No non-repeating element found\n");
    }

    return 0;
}
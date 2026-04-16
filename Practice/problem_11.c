#include <stdio.h>
#include <limits.h>

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

    printf("Enter elements in array : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int largest = Arr[0];
    int second = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > largest)
        {
            second = largest;
            largest = Arr[i];
        }

        else if (Arr[i] < largest && Arr[i] > second)
        {
            second = Arr[i];
        }
    }

    if (second == INT_MIN)
    {
        printf("Second largest element not found\n");
    }
    else
    {
        printf("Second largest = %d\n", second);
    }
    printf("Largest = %d\n", largest);
    return 0;
}
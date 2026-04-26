#include <stdio.h>
#include <limits.h>

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

    int largest = Arr[0];
    int second_largest = INT_MIN;
    int found = 0;

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > largest)
        {
            second_largest = largest;
            largest = Arr[i];
            found = 1;
        }
        else if (Arr[i] < largest && Arr[i] > second_largest)
        {
            second_largest = Arr[i];
            found = 1;
        }
    }
    if (found == 1)
    {
        printf("Second largest element = %d\n", second_largest);
    }
    else
    {
        printf("Second largest element not found\n");
    }
    return 0;
}
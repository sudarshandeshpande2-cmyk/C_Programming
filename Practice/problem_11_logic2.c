#include <stdio.h>
#include <limits.h>

int secondLargest(int Arr[], int n)
{
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

    return second;
}

int main()
{
    int n;
    int iRet = 0;
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

    iRet = secondLargest(Arr, n);

    if (iRet == INT_MIN)
    {
        printf("Second largest element not found\n");
    }
    else
    {
        printf("Second Largest = %d\n", iRet);
    }
    return 0;
}
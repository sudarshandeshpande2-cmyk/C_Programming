#include <stdio.h>
#include <limits.h>

int thirdLargest(int Arr[], int n)
{
    int largest = Arr[0];
    int second = INT_MIN;
    int third = INT_MIN;

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > largest)
        {
            third = second;
            second = largest;
            largest = Arr[i];
        }

        else if (Arr[i] < largest && Arr[i] > second)
        {
            third = second;
            second = Arr[i];
        }

        else if (Arr[i] < second && Arr[i] > third)
        {
            third = Arr[i];
        }
    }

    return third;
}

int main()
{
    int n;
    int result = 0;

    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int Arr[n];

    printf("Enter elements is array : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    result = thirdLargest(Arr, n);

    if (result == INT_MIN)
    {
        printf("No third largest element found\n");
    }
    else
    {
        printf("Third largest = %d\n", result);
    }

    return 0;
}
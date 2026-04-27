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
    int third_largest = INT_MIN;

    int second_found = 0;
    int third_found = 0;

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > largest)
        {
            if (second_found == 1)
            {
                third_found = 1;
            }
            third_largest = second_largest;
            second_largest = largest;
            largest = Arr[i];
            second_found = 1;
        }

        else if (Arr[i] < largest && Arr[i] > second_largest)
        {
            if (second_found == 1)
            {
                third_found = 1;
            }
            third_largest = second_largest;
            second_largest = Arr[i];
            second_found = 1;
        }

        else if (Arr[i] < second_largest && Arr[i] > third_largest)
        {
            third_largest = Arr[i];
            third_found = 1;
        }
    }

    if (third_found == 1)
    {
        printf("Third largest element is : %d\n", third_largest);
    }
    else
    {
        printf("Third largest element not found\n");
    }

    return 0;
}
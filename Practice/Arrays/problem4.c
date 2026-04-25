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

    int largest = Arr[0];
    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > largest)
        {
            largest = Arr[i];
        }
    }

    printf("Largest element = %d\n", largest);
    return 0;
}
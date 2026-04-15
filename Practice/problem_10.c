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

    int max = Arr[0];
    int min = Arr[0];

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > max)
        {
            max = Arr[i];
        }

        if (Arr[i] < min)
        {
            min = Arr[i];
        }
    }

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
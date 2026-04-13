#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    int Arr[n];

    printf("Enter elements in array: \n");

    for (int i = 0; i < n; i++)
    {
        printf("Enter element number : %d\n", i + 1);
        scanf("%d", &Arr[i]);
    }

    int max = Arr[0];

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > max)
        {
            max = Arr[i];
        }
    }

    printf("Largest number = %d\n", max);

    return 0;
}
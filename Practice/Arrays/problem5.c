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

    int smallest = Arr[0];
    for (int i = 1; i < n; i++)
    {
        if (Arr[i] < smallest)
        {
            smallest = Arr[i];
        }
    }

    printf("Smallest element = %d\n", smallest);

    return 0;
}
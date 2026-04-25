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

    int even_count = 0;
    int odd_count = 0;

    for (int i = 0; i < n; i++)
    {
        if (Arr[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("Even elements = %d\n", even_count);
    printf("Odd elements = %d\n", odd_count);

    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    int Arr[n];
    int sum = 0;

    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
        sum += Arr[i];
    }

    printf("Sum = %d\n", sum);

    return 0;
}
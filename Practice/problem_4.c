#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements:\n ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    int Arr[n];

    printf("Enter elements: ");

    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
        sum += Arr[i];
    }

    float avg = (float)sum / n;

    printf("Sum = %d\n", sum);
    printf("Average = %f\n", avg);
    return 0;
}
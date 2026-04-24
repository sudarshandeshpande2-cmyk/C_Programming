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

    int sum = 0;
    float avg;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
        sum += Arr[i];
    }
    avg = (float)sum / n; // Typecasting

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", avg);

    return 0;
}
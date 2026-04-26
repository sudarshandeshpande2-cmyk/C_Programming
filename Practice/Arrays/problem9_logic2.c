#include <stdio.h>

void reverse(int Arr[], int);
void reverse(int Arr[], int n)
{
    printf("Reverse Order : ");
    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d\n", Arr[i]);
    }
}

int main()
{
    int n;
    printf("Enter number of elements : ");
    scanf("%d", &n);

    if (n < 1 || n > 100)
    {
        printf("Invalid input\n");
        return 0;
    }

    int Arr[n];

    printf("Enter elements in array : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    reverse(Arr, n);

    return 0;
}
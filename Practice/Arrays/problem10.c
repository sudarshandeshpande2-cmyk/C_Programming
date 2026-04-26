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

    int copy[n];
    printf("Copied Array : ");
    for (int i = 0; i < n; i++)
    {
        copy[i] = Arr[i];
        printf("%d ", copy[i]);
    }
    printf("\n");
    return 0;
}
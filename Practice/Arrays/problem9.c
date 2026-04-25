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

    for (int i = n - 1; i >= 0; i--)
    {
        printf("Reverse order : %d", Arr[i]);
    }

    return 0;
}

// Logic 2

/*
void reverse(int Arr[], int n)
{
    for(int i = n - 1; i >= 0; i--)
    {
        printf("%d ", Arr[i]);
    }
}

int main()
{
    // input logic

    reverse(Arr, n);

    return 0;
}
*/
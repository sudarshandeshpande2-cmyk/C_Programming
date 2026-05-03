#include <stdio.h>

void reverse(int Arr[], int start, int end)
{
    while (start < end)
    {
        int temp = Arr[start];
        Arr[start] = Arr[end];
        Arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n, k;

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

    printf("Enter k : ");
    scanf("%d", &k);

    if (k < 0)
    {
        printf("Invalid input\n");
        return 0;
    }

    k = k % n; // handle k > n

    // Reverse method for right rotation
    reverse(Arr, 0, n - 1);
    reverse(Arr, 0, k - 1);
    reverse(Arr, k, n - 1);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", Arr[i]);
    }

    printf("\n");

    return 0;
}
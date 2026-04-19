#include <stdio.h>

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

    int freq[101] = {0};

    for (int i = 0; i < n; i++)
    {
        freq[Arr[i]]++;
    }

    for (int i = 0; i <= 100; i++)
    {
        if (freq[i] > 0)
        {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }
    return 0;
}
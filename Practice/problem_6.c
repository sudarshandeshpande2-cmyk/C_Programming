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

    printf("Enter elements : ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    int max = Arr[0];
    int second = Arr[0];

    for (int i = 1; i < n; i++)
    {
        if (Arr[i] > max)
        {
            second = max; // IMP
            max = Arr[i];
        }
        else if (Arr[i] < max && (second == max || Arr[i] > second)) // Not equal to max and greater than second
        {
            second = Arr[i];
        }
    }

    if (second == max)
    {
        printf("No second largest element\n");
    }
    else
    {
        printf("Second largest element : %d\n", second);
    }
}
#include <stdio.h>

int main()
{
    int Arr[5] = {10, 20, 30, 40, 50};

    printf("size of Arr : %zu\n", sizeof(Arr));

    printf("Arr : %p\n", Arr);
    printf("&Arr : %p\n", &Arr);

    printf("Arr + 1 : %p\n", Arr + 1);
    printf("(&Arr) + 1 : %p\n", (&Arr) + 1);

    return 0;
}

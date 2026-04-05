#include <stdio.h>

int main()
{
    int Arr[4] = {10, 20, 30, 40};

    printf("Arr : %p\n", Arr);
    printf("&Arr : %p\n", &Arr);
    printf("&(Arr[0]) : %p\n", &(Arr[0]));

    return 0;
}

/*
Arr : 0x7ffed841c800
&Arr : 0x7ffed841c800
&(Arr[0]) : 0x7ffed841c800
*/
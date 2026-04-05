#include <stdio.h>

struct Demo
{
    int i;
    float f;
    int j;
};

int main()
{
    struct Demo obj;

    obj.i = 11;
    obj.f = 90.4f;
    obj.j = 2216;

    printf("%d\n", obj.i); // 11
    printf("%f\n", obj.f); // 90.4
    printf("%d\n", obj.j); // 2216

    return 0;
}
#include <stdio.h>
#pragma pack(1)

struct Demo
{
    int i;
    char ch2;
    float f;
    char ch1;
    int j;
};

int main()
{
    printf("Size of structure is : %lu\n", sizeof(struct Demo));

    return 0;
}
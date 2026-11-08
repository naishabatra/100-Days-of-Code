// Assign explicit values starting from 10 and print them.

#include <stdio.h>

enum number
{
    A = 10,
    B = 11,
    C = 12,
    D = 13
};

int main()
{
    printf("%d\n", A);
    printf("%d\n", B);
    printf("%d\n", C);
    printf("%d", D);

    return 0;
}

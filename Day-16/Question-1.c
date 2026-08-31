
//Q31: Write a program to take a number as input and print its equivalent binary representation.
#include <stdio.h>

void main()
{
    int n, a[32], i = 0, j;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        a[i] = n % 2;
        n = n / 2;
        i++;
    }

    for(j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
}

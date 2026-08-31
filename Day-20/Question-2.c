//Q40: Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

void main()
{
    int a[32], i = 0, j;
    char b;

    printf("Enter a binary number: ");

    while((b = getchar()) != '\n')
    {
        if(b == '0' || b == '1')
        {
            a[i] = b;
            i++;
        }
    }

    for(j = 0; j < i; j++)
    {
        if(a[j] == '0')
            printf("1");
        else
            printf("0");
    }
}

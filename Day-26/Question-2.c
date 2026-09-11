//Q52: Write a program to print the following pattern:
/*
*

*
*
*

*
*
*
*
*

*
*
*

*
*/
#include <stdio.h>

void main()
{
    int i, j;

    for(i = 1; i <= 5; i = i + 2)
    {
        for(j = 1; j <= i; j++)
        {
            printf("*\n");
        }

        printf("\n");
    }

    for(i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    printf("\n*");
}

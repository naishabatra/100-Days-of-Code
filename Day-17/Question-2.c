//Q34: Write a program to check if a number is prime.
#include <stdio.h>

void main()
{
    int a, i, c = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    {
        if(a % i == 0)
            c++;
    }

    if(c == 2)
        printf("Prime");
    else
        printf("Not prime");
}

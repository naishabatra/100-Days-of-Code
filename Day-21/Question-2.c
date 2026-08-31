//Q42: Write a program to check if a number is a perfect number.
#include <stdio.h>

void main()
{
    int a, i, b = 0;

    printf("Enter a number: ");
    scanf("%d", &a);

    for(i = 1; i < a; i++)
    {
        if(a % i == 0)
            b = b + i;
    }

    if(b == a)
        printf("Perfect number");
    else
        printf("Not perfect number");
}

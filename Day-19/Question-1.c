//Q37: Write a program to find the LCM of two numbers.
#include <stdio.h>

void main()
{
    int a, b, i;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    for(i = (a > b ? a : b); ; i++)
    {
        if(i % a == 0 && i % b == 0)
        {
            printf("%d", i);
            break;
        }
    }
}

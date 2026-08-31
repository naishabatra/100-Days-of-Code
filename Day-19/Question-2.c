//Q38: Write a program to find the sum of digits of a number.
#include <stdio.h>

void main()
{
    int a, b = 0, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    while(a > 0)
    {
        c = a % 10;
        b = b + c;
        a = a / 10;
    }

    printf("%d", b);
}

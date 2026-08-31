//Q39: Write a program to find the product of odd digits of a number.
#include <stdio.h>

void main()
{
    int a, b = 1, c;

    printf("Enter a number: ");
    scanf("%d", &a);

    while(a > 0)
    {
        c = a % 10;

        if(c % 2 != 0)
            b = b * c;

        a = a / 10;
    }

    printf("%d", b);
}

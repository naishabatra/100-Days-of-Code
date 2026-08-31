//Q43: Write a program to check if a number is a strong number.
#include <stdio.h>

void main()
{
    int a, b, c, d, i;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a;
    c = 0;

    while(a > 0)
    {
        d = a % 10;

        int f = 1;
        for(i = 1; i <= d; i++)
        {
            f = f * i;
        }

        c = c + f;
        a = a / 10;
    }

    if(b == c)
        printf("Strong number");
    else
        printf("Not strong number");
}

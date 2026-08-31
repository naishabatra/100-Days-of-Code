//Q41: Write a program to swap the first and last digit of a number.
#include <stdio.h>

void main()
{
    int a, b, c, d, e, f, g;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a % 10;      
    c = a;
    d = 1;

    while(c >= 10)
    {
        c = c / 10;
        d = d * 10;
    }

    e = c;                          
    f = (a % d) / 10;               
    g = b * d + f * 10 + e;        

    printf("%d", g);
}

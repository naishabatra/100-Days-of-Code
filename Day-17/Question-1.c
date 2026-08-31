//Q33: Write a program to check if a number is an Armstrong number.
#include <stdio.h>

void main()
{
    int a, b, c = 0, d;

    printf("Enter a number: ");
    scanf("%d", &a);

    b = a;

    while(a > 0)
    {
        d = a % 10;
        c = c + (d * d * d);
        a = a / 10;
    }

    if(b == c)
        printf("Armstrong");
    else
        printf("Not Armstrong");
}

// Q17: Write a program to find the roots of a quadratic equation and categorize them.

#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, d, r1, r2;

    printf("Enter a, b and c=");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if(d > 0)
    {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are real and distinct: ");
        printf("Root 1 = %f Root 2 = %f", r1, r2);
    }
    else if(d == 0)
    {
        r1 = -b / (2 * a);

        printf("Roots are real and equal\n");
        printf("Root = %f", r1);
    }
    else
    {
        printf("Roots are imaginary");
    }
}

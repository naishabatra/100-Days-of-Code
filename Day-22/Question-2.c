//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

void main()
{
    int n, i, a = 1, b = 2;
    float s = 0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        s = s + (float)a / b;
        a = a + 2;
        b = b + 2;
    }

    printf("Approximate sum: %.1f", s);
}

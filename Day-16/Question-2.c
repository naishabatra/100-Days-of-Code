//Q32: Write a program to check if a number is a palindrome.
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
        c = c * 10 + d;
        a = a / 10;
    }

    if(b == c)
        printf("Palindrome");
    else
        printf("Not palindrome");
}

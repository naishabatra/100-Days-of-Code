//Q86: Check if a string is a palindrome.

#include <stdio.h>

void main()
{
    char s[100];
    int i, n = 0, flag = 1;

    scanf("%s", s);

    while(s[n] != '\0')
        n++;

    for(i = 0; i < n / 2; i++)
    {
        if(s[i] != s[n - i - 1])
            flag = 0;
    }

    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");
}

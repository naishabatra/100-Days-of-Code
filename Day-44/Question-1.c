//Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

void main()
{
    char s[100];
    int i, space = 0, digit = 0, special = 0;

    gets(s);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
            space++;
        else if(s[i] >= '0' && s[i] <= '9')
            digit++;
        else if(!((s[i] >= 'a' && s[i] <= 'z') || 
                  (s[i] >= 'A' && s[i] <= 'Z')))
            special++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", space, digit, special);
}

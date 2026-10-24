// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>

int main()
{
    char s[200];
    int i;

    fgets(s, 200, stdin);

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] + 32;
    }

    if(s[0] >= 'a' && s[0] <= 'z')
        s[0] = s[0] - 32;

    printf("%s", s);

    return 0;
}

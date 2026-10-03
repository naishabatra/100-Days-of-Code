// Print the initials of a name.

#include <stdio.h>

int main()
{
    char s[100];
    int i;

    fgets(s, 100, stdin);

    printf("%c", s[0]);

    for(i = 1; s[i] != '\0'; i++)
    {
        if(s[i] == ' ' && s[i + 1] != ' ')
            printf(" %c", s[i + 1]);
    }

    return 0;
}

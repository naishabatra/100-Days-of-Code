// Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i, last = 0;

    fgets(s, 100, stdin);
    s[strcspn(s, "\n")] = '\0';

    for(i = 0; s[i] != '\0'; i++)
    {
        if(s[i] == ' ')
            last = i + 1;
    }

    printf("%c. ", s[0]);

    for(i = 1; i < last; i++)
    {
        if(s[i] == ' ' && i + 1 < last)
            printf("%c. ", s[i + 1]);
    }

    printf("%s", s + last);

    return 0;
}

// Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main()
{
    char s[100];
    int a[26] = {0};
    int i;

    scanf("%s", s);

    for(i = 0; s[i] != '\0'; i++)
    {
        a[s[i] - 'a']++;

        if(a[s[i] - 'a'] == 2)
        {
            printf("%c", s[i]);
            return 0;
        }
    }

    printf("-1");

    return 0;
}

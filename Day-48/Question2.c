// Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main()
{
    char s[200];
    int i, start = 0, end, j;
    char temp;

    fgets(s, 200, stdin);

    for(i = 0; ; i++)
    {
        if(s[i] == ' ' || s[i] == '\n' || s[i] == '\0')
        {
            end = i - 1;

            for(j = start; j < end; j++, end--)
            {
                temp = s[j];
                s[j] = s[end];
                s[end] = temp;
            }

            start = i + 1;
        }

        if(s[i] == '\0')
            break;
    }

    printf("%s", s);

    return 0;
}

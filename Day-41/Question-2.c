//Q82: Print each character of a string on a new line.
#include <stdio.h>

void main()
{
    char str[100];
    int i = 0;

    gets(str);

    while(str[i] != '\0')
    {
        printf("%c\n", str[i]);
        i++;
    }
}

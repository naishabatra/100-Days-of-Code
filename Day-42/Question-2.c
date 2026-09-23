//Q84: Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>

void main()
{
    char str[100];
    int i = 0;

    gets(str);

    while(str[i] != '\0')
    {
        str[i] = str[i] - 32;
        i++;
    }

    printf("%s", str);
}

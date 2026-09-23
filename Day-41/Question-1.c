//Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

void main()
{
    char str[100];
    int i = 0;

    gets(str);

    while(str[i] != '\0')
        i++;

    printf("%d", i);
}

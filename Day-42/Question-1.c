//Q83: Count vowels and consonants in a string.
#include <stdio.h>

void main()
{
    char str[100];
    int i = 0, v = 0, c = 0;

    gets(str);

    while(str[i] != '\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            v++;
        else
            c++;

        i++;
    }

    printf("Vowels=%d, Consonants=%d", v, c);
}

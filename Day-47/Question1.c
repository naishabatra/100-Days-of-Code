// Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int x[256] = {0};
    int i;

    scanf("%s", a);
    scanf("%s", b);

    if(strlen(a) != strlen(b))
    {
        printf("Not Anagram");
        return 0;
    }

    for(i = 0; a[i] != '\0'; i++)
    {
        x[a[i]]++;
        x[b[i]]--;
    }

    for(i = 0; i < 256; i++)
    {
        if(x[i] != 0)
        {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");

    return 0;
}

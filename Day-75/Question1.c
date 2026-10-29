// Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>

int main()
{
    FILE *f;
    char s[100];

    f = fopen("info.txt", "a");

    if(f == NULL)
    {
        printf("File not found");
        return 0;
    }

    fgets(s, 100, stdin);

    fprintf(f, "%s", s);

    fclose(f);

    return 0;
}

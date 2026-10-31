// Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>

int main()
{
    FILE *a, *b;
    char ch;

    a = fopen("input.txt", "r");
    b = fopen("output.txt", "w");

    if(a == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(a)) != EOF)
    {
        if(ch >= 'a' && ch <= 'z')
            ch = ch - 'a' + 'A';

        fputc(ch, b);
    }

    fclose(a);
    fclose(b);

    return 0;
}

/* Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using 
fgetc() and fputc(). */

#include <stdio.h>

int main()
{
    FILE *a, *b;
    char s[50], d[50];
    char ch;

    scanf("%s", s);
    scanf("%s", d);

    a = fopen(s, "r");
    b = fopen(d, "w");

    if(a == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(a)) != EOF)
    {
        fputc(ch, b);
    }

    fclose(a);
    fclose(b);

    return 0;
}

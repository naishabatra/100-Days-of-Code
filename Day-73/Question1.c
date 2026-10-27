/* Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by
spaces or newlines.*/

#include <stdio.h>

int main()
{
    FILE *f;
    char ch;
    int c = 0, w = 0, l = 0;
    int word = 0;

    f = fopen("input.txt", "r");

    if(f == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(f)) != EOF)
    {
        c++;

        if(ch == '\n')
            l++;

        if(ch == ' ' || ch == '\n')
            word = 0;
        else if(word == 0)
        {
            w++;
            word = 1;
        }
    }

    printf("Characters = %d\n", c);
    printf("Words = %d\n", w);
    printf("Lines = %d", l);

    fclose(f);

    return 0;
}

/* Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; 
otherwise, read and display its content. */

#include <stdio.h>

int main()
{
    FILE *f;
    char name[50];
    char ch;

    scanf("%s", name);

    f = fopen(name, "r");

    if(f == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(f)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(f);

    return 0;
}

// Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>

int main()
{
    FILE *f;
    char ch;
    int v = 0, c = 0;

    f = fopen("input.txt", "r");

    if(f == NULL)
    {
        printf("File not found");
        return 0;
    }

    while((ch = fgetc(f)) != EOF)
    {
        if(ch == 'a' || ch == 'e' || ch == 'i' ||
           ch == 'o' || ch == 'u' || ch == 'A' ||
           ch == 'E' || ch == 'I' || ch == 'O' ||
           ch == 'U')
        {
            v++;
        }
        else if((ch >= 'a' && ch <= 'z') ||
                (ch >= 'A' && ch <= 'Z'))
        {
            c++;
        }
    }

    printf("Vowels = %d\n", v);
    printf("Consonants = %d", c);

    fclose(f);

    return 0;
}

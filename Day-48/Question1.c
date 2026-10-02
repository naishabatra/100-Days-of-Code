// Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100], c[200];

    scanf("%s", a);
    scanf("%s", b);

    if(strlen(a) != strlen(b))
    {
        printf("Not Rotation");
        return 0;
    }

    strcpy(c, a);
    strcat(c, a);

    if(strstr(c, b) != NULL)
        printf("Rotation");
    else
        printf("Not Rotation");

    return 0;
}

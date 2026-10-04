// Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main()
{
    int d, m, y;

    scanf("%d/%d/%d", &d, &m, &y);

    printf("%02d-Apr-%d", d, y);

    return 0;
}

//Q74: Find the transpose of a matrix.
#include <stdio.h>

void main()
{
    int a[10][10], r, c, i, j;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    }

    for(j = 0; j < c; j++)
    {
        for(i = 0; i < r; i++)
            printf("%d ", a[i][j]);

        printf("\n");
    }
}

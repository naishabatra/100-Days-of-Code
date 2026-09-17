//Q79: Perform diagonal traversal of a matrix.
#include <stdio.h>

void main()
{
    int a[10][10], r, c, i, j, k;

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(k = 0; k < r + c - 1; k++)
    {
        if(k % 2 == 0)
        {
            for(i = k; i >= 0; i--)
            {
                j = k - i;
                if(i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        }
        else
        {
            for(j = k; j >= 0; j--)
            {
                i = k - j;
                if(i < r && j < c)
                    printf("%d ", a[i][j]);
            }
        }
    }
}

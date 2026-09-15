//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void main()
{
    int a[100], n, x, i, pos;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    pos = n;

    for(i = 0; i < n; i++)
    {
        if(x < a[i])
        {
            pos = i;
            break;
        }
    }

    for(i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = x;
    n++;

    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
}

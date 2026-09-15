//Q61: Search for an element in an array using linear search.
#include <stdio.h>

void main()
{
    int a[100], n, x, i;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(a[i] == x)
        {
            printf("Found at index %d", i);
            break;
        }
    }

    if(i == n)
        printf("-1");
}

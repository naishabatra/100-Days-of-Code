//Q65: Search in a sorted array using binary search.
#include <stdio.h>

void main()
{
    int a[100], n, x, i;
    int low, high, mid;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    scanf("%d", &x);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            printf("Found at index %d", mid);
            break;
        }
        else if(x < a[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(low > high)
        printf("-1");
}

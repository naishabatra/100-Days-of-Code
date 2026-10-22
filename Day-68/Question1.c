// Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main()
{
    int n, arr[100];
    int i, sum1 = 0, sum2 = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum1 = sum1 + arr[i];
    }

    for(i = 0; i <= n; i++)
        sum2 = sum2 + i;

    printf("%d", sum2 - sum1);

    return 0;
}

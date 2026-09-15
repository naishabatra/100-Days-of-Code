//Q64: Find the digit that occurs the most times in an integer number.
#include <stdio.h>

void main()
{
    int n, digit, count[10] = {0};
    int i, max = 0, ans = 0;

    scanf("%d", &n);

    while(n > 0)
    {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    for(i = 0; i < 10; i++)
    {
        if(count[i] > max)
        {
            max = count[i];
            ans = i;
        }
    }

    printf("%d", ans);
}

/* Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k 
moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.*/

#include <stdio.h>

int main()
{
    int n, arr[100], k;
    int i, j, ans;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    for(i = 0; i <= n - k; i++)
    {
        ans = 0;

        for(j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                ans = arr[j];
                break;
            }
        }

        printf("%d ", ans);
    }

    return 0;
}

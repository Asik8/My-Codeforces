#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
        }
        if (sum % n != 0)
        {
            printf("-1\n");
            continue;
        }
        else
        {
            int count = 0;
            int div = sum / n;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] > div)
                {
                    count++;
                }
            }
            printf("%d\n", count);
        }
    }
    return 0;
}
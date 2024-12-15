#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int tem = arr[0], i = 1, count = 0, min, max;
        while (i < n)
        {
            if (tem <= arr[i])
            {
                min = tem;
                max = arr[i];
            }
            else
            {
                min = arr[i];
                max = tem;
            }
            if (max <= (min * 2))
            {
                tem = arr[i];
                i++;
            }
            else
            {
                tem = min;
                while (max > (tem * 2))
                {
                    count++;
                    tem *= 2;
                }
                tem = arr[i];
                i++;
            }
        }
        printf("%d\n", count);
    }

    return 0;
}


// count++;
                // tem = min * 2;
                // if (max > (tem * 2))
                // {
                //     while (max > (tem * 2))
                //     {
                //         count++;
                //         tem *= 2;
                //     }
                // }
                // tem = arr[i];
                // i++;
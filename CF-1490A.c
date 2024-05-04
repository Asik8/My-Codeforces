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
        // printf("initial tem: %d\n", tem);
        while (i < n)
        {
            if (tem <= arr[i])
            {
                min = tem;
                max = arr[i];
                // printf("Condition-1 tem: %d arr[i]: %d min=%d max= %d\n", tem, arr[i], min, max);
            }
            else
            {
                min = arr[i];
                max = tem;
                // printf("Condition-2 tem: %d arr[i]: %d min=%d max= %d\n", tem, arr[i], min, max);
            }
            if (max <= (min * 2))
            {
                tem = arr[i];
                i++;
                // printf("Condition-3 Updated_tem: %d i: %d min=%d min*2=%d max= %d\n", tem, i, min, min * 2, max);
            }
            else
            {
                count++;
                tem = min * 2;
                // printf("Condition-4:Before while loop: count=%d updated_tem = %d max=%d min=%d min*2=%d\n", count, tem, max, min, min * 2);
                if (max > (tem * 2))
                {
                    while (max > (tem * 2))
                    {
                        // printf("Condition-4:Inside(starting) while loop: count=%d tem = %d max=%d\n", count, tem, max);
                        count++;
                        tem *= 2;
                        // printf("Condition-4:Inside(Ending) while loop: count=%d tem = %d max=%d\n", count, tem, max);
                    }
                }
                // printf("Condition-4:Outside while loop: count=%d tem = %d max=%d\n", count, tem, max);
                tem = arr[i];
                i++;
                // printf("Condition-4:Ending: count=%d updated_tem = %d arr[i]=%d i=%d\n", count, tem, arr[i], i);
            }
        }
        printf("%d\n", count);
    }

    return 0;
}
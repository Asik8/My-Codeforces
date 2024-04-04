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
        int n, d;
        scanf("%d %d", &n, &d);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        bool find_sum = false;
        bool find_greater = false;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > d)
            {
                find_greater = true;
                break;
            }
        }
        if (find_greater == false)
        {
            printf("YES\n");
        }
        else
        {
            for (int i = 0; i < n - 1; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    if (arr[i] + arr[j] <= d)
                    {
                        find_sum = true;
                        break;
                    }
                }
            }

            if(find_greater == true && find_sum == true)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }

    return 0;
}
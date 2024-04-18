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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        if (n == 1)
        {
            printf("1\n");
        }
        else
        {
            int l = 0;
            bool found[max_size-1] = {false};
            
            for (int i = 0; i < n; i++)
            {
                if(!found[arr[i]])
                {
                    found[arr[i]] = true;
                    l++;
                }
            }

            if (l != 2)
                printf("%d\n", n);
            else
                printf("%d\n", ((n - 2) / 2) + 2);
        }
    }

    return 0;
}
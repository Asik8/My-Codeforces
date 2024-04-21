#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define ll long long int
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
        ll arr[7];
        for (int i = 0; i < 7; i++)
        {
            scanf("%lld", &arr[i]);
        }

        for (int i = 0; i < 5; i++)
        {
            if (arr[i] != -1)
            {
                for (int j = i + 1; j < 6; j++)
                {
                    if (arr[j] != -1)
                    {
                        for (int k = j + 1; k < 7; k++)
                        {
                            if (arr[k]!=-1 && arr[i] + arr[j] == arr[k])
                            {
                                arr[k] = -1;
                                break;
                            }
                        }
                    }
                }
            }
        }

        for (int i = 0; i < 7; i++)
        {
            if(arr[i] != -1)
            {
                printf("%lld ", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
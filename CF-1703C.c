#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>

#define lli long long int
#define max_size 100000

// int compare(const void *a, const void *b)
// {
//     return (*(int *)a - *(int *)b);
// }

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);
        int arr[n],new_arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }

        for (int i = 0; i < n; i++)
        {
            int a;
            scanf("%d", &a);
            char c[a];
            scanf("%s", c);
            for(int j=0;j<a;j++)
            {
                if (c[j] == 'U')
                {
                    arr[i]-=1;
                    if (arr[i] == -1)
                    {
                        arr[i] = 9;
                    }
                }
                    
                else if(c[j] == 'D')
                {
                    arr[i]+=1;
                    if (arr[i] == 10)
                    {
                        arr[i] = 0;
                    }
                }
                    
            }
           new_arr[i] = arr[i];
        }

        for (int i=0;i<n;i++)
        {
            printf("%d ",new_arr[i]);
        }printf("\n");

        // qsort(arr, n, sizeof(int), compare);
    }

    return 0;
}
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
    lli arr[11];
    for (int i = 0; i <= 10; i++)
    {
        arr[i] = pow(10, i);
        if(arr[i]%10 == 9)
        {
            arr[i]++;
        }
    }

    while (t--)
    {
        lli n;
        scanf("%lld",&n);

        for (int i = 0; i <= 10; i++)
        {
            if(arr[i]>n)
            {
                printf("%lld\n",n-arr[i-1]);
                break;
            }
            else if (arr[i] == n)
            {
                printf("%lld\n",n-arr[i]);
                break;
            }
        }
    }

    return 0;
}
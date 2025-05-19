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
        lli n;
        scanf("%lld", &n);
        lli ar[n], sum = 0;
        for (lli i = 0; i < n; i++)
        {
            scanf("%lld", &ar[i]);
            if (ar[i] < 0)
                sum += (ar[i] * -1);
            else
                sum += ar[i];
        }

        lli count = 0;
        lli l = 0;
        for (lli i=0;i<n;i++)
        {
            if(ar[i]<0)
                l=-1;
            if (ar[i] > 0 && l==-1)
            {
                count++;
                l=0;
            }
        }
        if(l==-1)
            count++;
        printf("%lld %lld\n", sum, count);
    }
    return 0;
}
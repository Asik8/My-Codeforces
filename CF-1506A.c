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
        lli n, m, x;
        scanf("%lld %lld %lld", &n, &m, &x);
        lli row = 0,col= 0;

        if(x%n !=0)
        {
            col = x/n +1;
            row = x%n;
        }
        else
        {
            col = x/n;
            row = n;
        }
        printf("%lld\n",m*(row-1)+col);
    }

    return 0;
}

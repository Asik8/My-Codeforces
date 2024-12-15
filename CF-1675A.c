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
        lli a, b, c, x, y;
        scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &x, &y);
        if (x <= a)
        {
            if ((b + c) >= y)
                printf("YES\n");
            else
                printf("NO\n");
        }
        else
        {
            x -= a;
            if (x <= c)
            {
                c -= x;
                if ((b + c) >= y)
                    printf("YES\n");
                else
                    printf("NO\n");
            }
            else
                printf("NO\n");
        }
    }

    return 0;
}
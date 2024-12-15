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
        lli n;
        scanf("%lld", &n);
        lli count = 0;
        if (n > 1)
        {
            count += n / 3;
            n %= 3;
            if (n == 1 || n == 2)
                count += 1;
        }
        else
            count +=2;
        printf("%d\n", count);
    }

    return 0;
}
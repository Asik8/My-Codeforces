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
        char c[101];
        scanf("%s", c);
        int ans = 0, len = strlen(c), in = 0;
        for (int i = 0; i < len; i++)
        {
            if (c[i] == '1')
            {
                in = i;
                break;
            }
        }
        int count = 0;
        for (int i = in + 1; i < len; i++)
        {
            if (c[i] == '0')
            {
                count++;
            }
            else
            {
                ans += count;
                count = 0;
            }
        }
        printf("%d\n", ans);
    }

    return 0;
}
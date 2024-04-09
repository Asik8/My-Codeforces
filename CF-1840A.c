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
        int n;
        scanf("%d", &n);
        char c[n], d[n];
        scanf("%s", c);
        char a = c[0];
        d[0] = c[0];
        int l = 1;

        for (int i = 1; i < n;)
        {
            int ind = 0;
            for (int j = i; j < n; j++)
            {
                if (a == c[j])
                {
                    ind = j;
                    break;
                }
            }
            if (ind == n - 1)
                break;
            else
            {
                d[l] = c[ind + 1];
                a = c[ind + 1];
                l++;
                i = ind + 2;
            }
        }
        for(int i=0;i<l;i++)
        {
            printf("%c",d[i]);
        }printf("\n");
    }

    return 0;
}
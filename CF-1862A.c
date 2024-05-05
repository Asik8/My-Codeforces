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
    getchar();

    while (t--)
    {
        int n, l;
        scanf("%d %d", &n, &l);
        char vika[5] = "vika";

        char c[n][l];
        for (int i = 0; i < n; i++)
        {
            scanf("%s", c[i]);
        }

        int in = 0;
        bool found = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < l; j++)
            {
                if (c[i][j] == vika[in])
                {
                    in++;
                    if (in == 4)
                    {
                        found = true;
                        break;
                    }
                }
            }
            if (in < 4)
                in = 0;
            if (found)
                break;
        }

        if (found == false)
        {
            in=0;
            for (int i = 0; i < n; i++)
            {
                if (c[i][0] == vika[in])
                {
                    in++;
                    if (in == 4)
                    {
                        found = true;
                        break;
                    }
                }
            }
        }

        if (found)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

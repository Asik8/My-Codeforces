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
        int n, l;
        scanf("%d %d", &n, &l);
        if (l < 4)
        {
            printf("NO\n");
        }
        else
        {
            bool found = false;
            char c[n][l];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < l; j++)
                {
                    scanf("%c",&c[i][j]);
                }
            }
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < l; j++)
                {
                    printf("%s", c);
                }printf("\n");
            }
            // if(found == false)
            //     printf("NO\n");
            // else
            //     printf("YES\n");
        }
    }

    return 0;
}
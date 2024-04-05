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
    char c[101];
    scanf("%s", c);

    if (strlen(c) < 3)
        printf("0\n");
    else
    {
        int q = 0, a = 0;
        for (int i = 0; i < strlen(c); i++)
        {
            if (c[i] == 'Q')
                q++;
            else if (c[i] == 'A')
                a++;
        }
        if (q >= 2 && a >= 1)
        {
            int count = a;
            // if (q % 2 == 0)
            // {
            //     count += q / 2;
            // }
            // else
                count += q - 1;

            printf("%d\n", count);
            // printf("Q=%d\n", q);
            // printf("A=%d\n", a);
        }
        else
            printf("0\n");
    }

    return 0;
}
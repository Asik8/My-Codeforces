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
        int q = 0;
        for (int i = 0; i < strlen(c) - 2; i++)
        {
            if (c[i] == 'Q')
            {
                for (int j = i + 1; j < strlen(c) - 1; j++)
                {
                    if (c[j] == 'A')
                        for (int k = j + 1; k < strlen(c); k++)
                        {
                            if (c[k] == 'Q')
                            {
                                q++;
                            }
                        }
                }
            }
        }

        printf("%d\n", q);
    }

    return 0;
}
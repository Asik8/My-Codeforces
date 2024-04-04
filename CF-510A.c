#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int ar[n][m];
    int c = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                printf("#");
            }
            else
            {
                c++;
                if (c % 2 == 1)
                {
                    for (int l = 0; l < m - 1; l++)
                    {
                        printf(".");
                    }
                    printf("#");
                    break;
                }
                else if (c % 2 != 1)
                {
                    printf("#");
                    for (int l = 1; l < m; l++)
                    {
                        printf(".");
                    }
                    break;
                }
            }
        }
        printf("\n");
    }

    return 0;
}
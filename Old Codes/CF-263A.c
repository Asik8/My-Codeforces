#include <stdio.h>

int main()
{
    int a[5][5], c = 0, m, n, temp;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (a[i][j] > 0)
            {
                m = i;
                n = j;
                i = 5;
                break;
            }
        }
    }

    while (1)
    {

        if (m < 2)
        {
            m += 1;
            c++;
        }

        else if (m > 2)
        {
            m -= 1;
            c++;
        }

        else if (n < 2)
        {
            n += 1;
            c++;
        }

        else if (n > 2)
        {
            n -= 1;
            c++;
        }

        else
        {
            break;
        }
    }

    printf("%d\n",c);

    return 0;
}
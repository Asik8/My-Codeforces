#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d",&n,&t);

    int rem_time = 240 - t;
    int cont = 0;

    for (int i = 1; i <= n; i++)
    {
        if (rem_time >= (5*i))
        {
            rem_time = rem_time - (5 * i);
            cont++;
            if (rem_time < (5 * (i + 1)))
            {
                break;
            }
        }
        else
        {
            break;
        }
    }

    printf("%d\n", cont);

    return 0;
}
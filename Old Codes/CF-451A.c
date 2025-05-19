#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d",&n,&m);

    int l = 0;

    while (1)
    {
        n--;
        m--;
        l++;
        if (n == 0 || m == 0)
        {
            break;
        }
    }

    if (l % 2 == 0)
    {
        printf("Malvika\n");
    }

    else
    {
        printf("Akshat\n");
    }

    return 0;
}

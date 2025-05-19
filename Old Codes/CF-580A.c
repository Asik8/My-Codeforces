#include <stdio.h>

int main()
{
    long long int a;
    scanf("%lld", &a);

    long long int ar[a];
    for (long long int i = 0; i < a; i++)
    {
        scanf("%lld", &ar[i]);
    }

    long long int c = 1, max_len = 1;
    for (long long int i = 0; i < a - 1; i++)
    {
        if (ar[i] <= ar[i + 1])
        {
            c++;
            if (c > max_len)
            {
                max_len = c;
            }
        }
        else
        {
            c = 1;
        }
    }

    printf("%lld\n", max_len);

    return 0;
}
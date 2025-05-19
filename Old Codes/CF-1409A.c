#include <stdio.h>

int main()
{
    long long int t;
    scanf("%lld",&t);

    for (long long int l = 0; l < t; l++)
    {
        long long int a, b, cont = 0;
        scanf("%lld %lld",&a,&b);

        if (b > a)
        {
            for (long long int i = 10; i > 0; i--)
            {
                long long int sub = b - a;
                if (sub >= i)
                {
                    long long int add = sub / i;
                    cont += add;
                    a += cont * i;
                }
                if (a == b)
                {
                    break;
                }
            }
            printf("%lld\n", cont);
        }

        else if (b < a)
        {
            for (long long int i = 10; i > 0; i--)
            {
                long long int sub = a - b;
                if (sub >= i)
                {
                    long long int add = sub / i;
                    cont += add;
                    a -= cont * i;
                }
                if (a == b)
                {
                    break;
                }
            }
            printf("%lld\n", cont);
        }

        else if (a == b)
        {
            printf("0\n");
        }
    }

    return 0;
}